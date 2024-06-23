/// <reference types="tree-sitter-cli/dsl" />

// todo:
// - Check how empty lines are handled (ignored, empty string, etc)
// - Check how custom values are encoded (string, integer, float?)
// - Check to see whether inline comments are supported
// - Try and break pdc a bit

module.exports = grammar({
  name: 'playdate',
  rules: {
    source_file: ($) => repeat(choice($.definition, $.comment, $._newline)),
    comment: (_) => seq('#', /[^\r\n]*/),
    _newline: (_) => /\r?\n/,
    definition: ($) =>
      seq(
        choice(
          prec(
            2,
            choice(
              $.name,
              $.author,
              $.description,
              $.version,
              $.bundleID,
              $.buildNumber,
              $.imagePath,
              $.launchSoundPath,
              $.contentWarning,
              $.contentWarning2,
            ),
          ),
          prec(1, $.customDefinition),
        ),
      ),
    // Known definitions (key=value)
    name: ($) => seq('name', '=', $.string),
    author: ($) => seq('author', '=', $.string),
    description: ($) => seq('description', '=', $.string),
    version: ($) => seq('version', '=', $.string),
    bundleID: ($) => seq('bundleID', '=', $.reverse_dns),
    buildNumber: ($) => seq('buildNumber', '=', $.integer),
    imagePath: ($) => seq('imagePath', '=', $.string),
    launchSoundPath: ($) => seq('launchSoundPath', '=', $.string),
    contentWarning: ($) => seq('contentWarning', '=', $.string),
    contentWarning2: ($) => seq('contentWarning2', '=', $.string),
    // Custom definitions (key=value)
    customDefinition: ($) => seq(/[A-z]+[A-z0-9]*/, '=', $.string),
    string: (_) => /[^\r\n]+/,
    integer: (_) => /[0-9]+/,
    reverse_dns: (_) => /[-a-zA-Z0-9]+(\.[-a-zA-Z0-9]+)+/,
  },
  extras: (_) => [],
});
