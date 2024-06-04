module.exports = grammar({
  name: "playdate",
  rules: {
    source_file: ($) => repeat(choice($.definition, $.comment, $.empty_line)),
    comment: ($) => token(seq("#", /.*/)),
    empty_line: ($) => /\s*\n/,
    definition: ($) => seq(choice($.known, $.unknown)),
    known: ($) =>
      choice(
        seq("name", "", "=", $._string),
        seq("author", "", "=", $._string),
        seq("description", "=", $._string),
        seq("version", "=", $._string),
        seq("bundleID", "=", $._reverse_dns),
        seq("buildNumber", "=", $._integer),
        seq("imagePath", "=", $._string),
        seq("launchSoundPath", "=", $._string),
        seq("contentWarning", "=", $._string),
        seq("contentWarning2", "=", $._string),
      ),
    unknown: ($) => seq(/[A-z]+[A-z0-9]*=/, choice($._string, $._integer)),
    _string: ($) => /[^\r\n]+/,
    _integer: ($) => /[0-9]+/,
    _reverse_dns: ($) => /[-a-zA-Z0-9]+(\.[-a-zA-Z0-9]+)+/,
  },
  extras: ($) => [],
});
