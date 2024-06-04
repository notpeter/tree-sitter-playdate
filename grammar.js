module.exports = grammar({
  name: "playdate",
  rules: {
    source_file: ($) => repeat(choice($.definition, $.comment, $._newline)),
    comment: (_) => seq("#", /[^\r\n]*/),
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
    name: ($) => seq("name", "=", $._string),
    author: ($) => seq("author", "=", $._string),
    description: ($) => seq("description", "=", $._string),
    version: ($) => seq("version", "=", $._string),
    bundleID: ($) => seq("bundleID", "=", $._reverse_dns),
    buildNumber: ($) => seq("buildNumber", "=", $._integer),
    imagePath: ($) => seq("imagePath", "=", $._string),
    launchSoundPath: ($) => seq("launchSoundPath", "=", $._string),
    contentWarning: ($) => seq("contentWarning", "=", $._string),
    contentWarning2: ($) => seq("contentWarning2", "=", $._string),
    // Custom definitions (key=value)
    customDefinition: ($) => seq(/[A-z]+[A-z0-9]*/, "=", choice($._string, $._integer)),
    _string: (_) => /[^\r\n]+/,
    _integer: (_) => /[0-9]+/,
    _reverse_dns: (_) => /[-a-zA-Z0-9]+(\.[-a-zA-Z0-9]+)+/,
  },
  extras: (_) => [],
});
