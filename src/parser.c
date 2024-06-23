#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  sym__newline = 3,
  anon_sym_name = 4,
  anon_sym_EQ = 5,
  anon_sym_author = 6,
  anon_sym_description = 7,
  anon_sym_version = 8,
  anon_sym_bundleID = 9,
  anon_sym_buildNumber = 10,
  anon_sym_imagePath = 11,
  anon_sym_launchSoundPath = 12,
  anon_sym_contentWarning = 13,
  anon_sym_contentWarning2 = 14,
  aux_sym_customDefinition_token1 = 15,
  sym_string = 16,
  sym_integer = 17,
  sym_reverse_dns = 18,
  sym_source_file = 19,
  sym_comment = 20,
  sym_definition = 21,
  sym_name = 22,
  sym_author = 23,
  sym_description = 24,
  sym_version = 25,
  sym_bundleID = 26,
  sym_buildNumber = 27,
  sym_imagePath = 28,
  sym_launchSoundPath = 29,
  sym_contentWarning = 30,
  sym_contentWarning2 = 31,
  sym_customDefinition = 32,
  aux_sym_source_file_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__newline] = "_newline",
  [anon_sym_name] = "name",
  [anon_sym_EQ] = "=",
  [anon_sym_author] = "author",
  [anon_sym_description] = "description",
  [anon_sym_version] = "version",
  [anon_sym_bundleID] = "bundleID",
  [anon_sym_buildNumber] = "buildNumber",
  [anon_sym_imagePath] = "imagePath",
  [anon_sym_launchSoundPath] = "launchSoundPath",
  [anon_sym_contentWarning] = "contentWarning",
  [anon_sym_contentWarning2] = "contentWarning2",
  [aux_sym_customDefinition_token1] = "customDefinition_token1",
  [sym_string] = "string",
  [sym_integer] = "integer",
  [sym_reverse_dns] = "reverse_dns",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_definition] = "definition",
  [sym_name] = "name",
  [sym_author] = "author",
  [sym_description] = "description",
  [sym_version] = "version",
  [sym_bundleID] = "bundleID",
  [sym_buildNumber] = "buildNumber",
  [sym_imagePath] = "imagePath",
  [sym_launchSoundPath] = "launchSoundPath",
  [sym_contentWarning] = "contentWarning",
  [sym_contentWarning2] = "contentWarning2",
  [sym_customDefinition] = "customDefinition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__newline] = sym__newline,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_author] = anon_sym_author,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_bundleID] = anon_sym_bundleID,
  [anon_sym_buildNumber] = anon_sym_buildNumber,
  [anon_sym_imagePath] = anon_sym_imagePath,
  [anon_sym_launchSoundPath] = anon_sym_launchSoundPath,
  [anon_sym_contentWarning] = anon_sym_contentWarning,
  [anon_sym_contentWarning2] = anon_sym_contentWarning2,
  [aux_sym_customDefinition_token1] = aux_sym_customDefinition_token1,
  [sym_string] = sym_string,
  [sym_integer] = sym_integer,
  [sym_reverse_dns] = sym_reverse_dns,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_definition] = sym_definition,
  [sym_name] = sym_name,
  [sym_author] = sym_author,
  [sym_description] = sym_description,
  [sym_version] = sym_version,
  [sym_bundleID] = sym_bundleID,
  [sym_buildNumber] = sym_buildNumber,
  [sym_imagePath] = sym_imagePath,
  [sym_launchSoundPath] = sym_launchSoundPath,
  [sym_contentWarning] = sym_contentWarning,
  [sym_contentWarning2] = sym_contentWarning2,
  [sym_customDefinition] = sym_customDefinition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_author] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bundleID] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buildNumber] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imagePath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_launchSoundPath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contentWarning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contentWarning2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_customDefinition_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_reverse_dns] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_author] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_bundleID] = {
    .visible = true,
    .named = true,
  },
  [sym_buildNumber] = {
    .visible = true,
    .named = true,
  },
  [sym_imagePath] = {
    .visible = true,
    .named = true,
  },
  [sym_launchSoundPath] = {
    .visible = true,
    .named = true,
  },
  [sym_contentWarning] = {
    .visible = true,
    .named = true,
  },
  [sym_contentWarning2] = {
    .visible = true,
    .named = true,
  },
  [sym_customDefinition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      ADVANCE_MAP(
        '\n', 9,
        '\r', 1,
        '#', 7,
        '=', 11,
        'a', 90,
        'b', 91,
        'c', 71,
        'd', 40,
        'i', 62,
        'l', 30,
        'n', 29,
        'v', 41,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(97);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_author);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_description);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_bundleID);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_buildNumber);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_imagePath);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_launchSoundPath);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_contentWarning);
      if (lookahead == '2') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_contentWarning2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'D') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'I') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'N') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'P') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'P') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'S') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'W') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'a') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'a') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'a') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'a') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'b') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'c') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'c') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'd') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'd') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'd') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'g') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'g') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'h') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'h') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'h') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'h') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'i') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'i') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'i') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'i') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'l') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'l') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'm') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'm') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'm') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'n') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'n') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'n') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'n') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'n') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'n') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'n') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'o') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'o') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'o') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'o') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'r') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'r') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'r') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'r') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 's') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 's') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 't') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 't') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 't') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'u') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'u') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'u') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'u') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (lookahead == 'u') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_customDefinition_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_reverse_dns);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_author] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_bundleID] = ACTIONS(1),
    [anon_sym_buildNumber] = ACTIONS(1),
    [anon_sym_imagePath] = ACTIONS(1),
    [anon_sym_launchSoundPath] = ACTIONS(1),
    [anon_sym_contentWarning] = ACTIONS(1),
    [anon_sym_contentWarning2] = ACTIONS(1),
    [aux_sym_customDefinition_token1] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym_comment] = STATE(3),
    [sym_definition] = STATE(3),
    [sym_name] = STATE(16),
    [sym_author] = STATE(16),
    [sym_description] = STATE(16),
    [sym_version] = STATE(16),
    [sym_bundleID] = STATE(16),
    [sym_buildNumber] = STATE(16),
    [sym_imagePath] = STATE(16),
    [sym_launchSoundPath] = STATE(16),
    [sym_contentWarning] = STATE(16),
    [sym_contentWarning2] = STATE(16),
    [sym_customDefinition] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [anon_sym_name] = ACTIONS(9),
    [anon_sym_author] = ACTIONS(11),
    [anon_sym_description] = ACTIONS(13),
    [anon_sym_version] = ACTIONS(15),
    [anon_sym_bundleID] = ACTIONS(17),
    [anon_sym_buildNumber] = ACTIONS(19),
    [anon_sym_imagePath] = ACTIONS(21),
    [anon_sym_launchSoundPath] = ACTIONS(23),
    [anon_sym_contentWarning] = ACTIONS(25),
    [anon_sym_contentWarning2] = ACTIONS(27),
    [aux_sym_customDefinition_token1] = ACTIONS(29),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [sym_definition] = STATE(2),
    [sym_name] = STATE(16),
    [sym_author] = STATE(16),
    [sym_description] = STATE(16),
    [sym_version] = STATE(16),
    [sym_bundleID] = STATE(16),
    [sym_buildNumber] = STATE(16),
    [sym_imagePath] = STATE(16),
    [sym_launchSoundPath] = STATE(16),
    [sym_contentWarning] = STATE(16),
    [sym_contentWarning2] = STATE(16),
    [sym_customDefinition] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [sym__newline] = ACTIONS(36),
    [anon_sym_name] = ACTIONS(39),
    [anon_sym_author] = ACTIONS(42),
    [anon_sym_description] = ACTIONS(45),
    [anon_sym_version] = ACTIONS(48),
    [anon_sym_bundleID] = ACTIONS(51),
    [anon_sym_buildNumber] = ACTIONS(54),
    [anon_sym_imagePath] = ACTIONS(57),
    [anon_sym_launchSoundPath] = ACTIONS(60),
    [anon_sym_contentWarning] = ACTIONS(63),
    [anon_sym_contentWarning2] = ACTIONS(66),
    [aux_sym_customDefinition_token1] = ACTIONS(69),
  },
  [3] = {
    [sym_comment] = STATE(2),
    [sym_definition] = STATE(2),
    [sym_name] = STATE(16),
    [sym_author] = STATE(16),
    [sym_description] = STATE(16),
    [sym_version] = STATE(16),
    [sym_bundleID] = STATE(16),
    [sym_buildNumber] = STATE(16),
    [sym_imagePath] = STATE(16),
    [sym_launchSoundPath] = STATE(16),
    [sym_contentWarning] = STATE(16),
    [sym_contentWarning2] = STATE(16),
    [sym_customDefinition] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(5),
    [sym__newline] = ACTIONS(74),
    [anon_sym_name] = ACTIONS(9),
    [anon_sym_author] = ACTIONS(11),
    [anon_sym_description] = ACTIONS(13),
    [anon_sym_version] = ACTIONS(15),
    [anon_sym_bundleID] = ACTIONS(17),
    [anon_sym_buildNumber] = ACTIONS(19),
    [anon_sym_imagePath] = ACTIONS(21),
    [anon_sym_launchSoundPath] = ACTIONS(23),
    [anon_sym_contentWarning] = ACTIONS(25),
    [anon_sym_contentWarning2] = ACTIONS(27),
    [aux_sym_customDefinition_token1] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
    ACTIONS(78), 11,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning,
      anon_sym_contentWarning2,
      aux_sym_customDefinition_token1,
  [19] = 2,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
    ACTIONS(82), 11,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning,
      anon_sym_contentWarning2,
      aux_sym_customDefinition_token1,
  [38] = 2,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
    ACTIONS(86), 11,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning,
      anon_sym_contentWarning2,
      aux_sym_customDefinition_token1,
  [57] = 2,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
    ACTIONS(90), 11,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning,
      anon_sym_contentWarning2,
      aux_sym_customDefinition_token1,
  [76] = 2,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
    ACTIONS(94), 11,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning,
      anon_sym_contentWarning2,
      aux_sym_customDefinition_token1,
  [95] = 2,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
    ACTIONS(98), 11,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning,
      anon_sym_contentWarning2,
      aux_sym_customDefinition_token1,
  [114] = 2,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
    ACTIONS(102), 11,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning,
      anon_sym_contentWarning2,
      aux_sym_customDefinition_token1,
  [133] = 2,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
    ACTIONS(106), 11,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning,
      anon_sym_contentWarning2,
      aux_sym_customDefinition_token1,
  [152] = 2,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
    ACTIONS(110), 11,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning,
      anon_sym_contentWarning2,
      aux_sym_customDefinition_token1,
  [171] = 2,
    ACTIONS(112), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
    ACTIONS(114), 11,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning,
      anon_sym_contentWarning2,
      aux_sym_customDefinition_token1,
  [190] = 2,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
    ACTIONS(118), 11,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning,
      anon_sym_contentWarning2,
      aux_sym_customDefinition_token1,
  [209] = 2,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
    ACTIONS(122), 11,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning,
      anon_sym_contentWarning2,
      aux_sym_customDefinition_token1,
  [228] = 2,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
    ACTIONS(126), 11,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning,
      anon_sym_contentWarning2,
      aux_sym_customDefinition_token1,
  [247] = 2,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__newline,
    ACTIONS(126), 11,
      anon_sym_name,
      anon_sym_author,
      anon_sym_description,
      anon_sym_version,
      anon_sym_bundleID,
      anon_sym_buildNumber,
      anon_sym_imagePath,
      anon_sym_launchSoundPath,
      anon_sym_contentWarning,
      anon_sym_contentWarning2,
      aux_sym_customDefinition_token1,
  [266] = 1,
    ACTIONS(128), 1,
      anon_sym_EQ,
  [270] = 1,
    ACTIONS(130), 1,
      sym_string,
  [274] = 1,
    ACTIONS(132), 1,
      sym_string,
  [278] = 1,
    ACTIONS(134), 1,
      sym_string,
  [282] = 1,
    ACTIONS(136), 1,
      sym_string,
  [286] = 1,
    ACTIONS(138), 1,
      sym_reverse_dns,
  [290] = 1,
    ACTIONS(140), 1,
      sym_integer,
  [294] = 1,
    ACTIONS(142), 1,
      sym_string,
  [298] = 1,
    ACTIONS(144), 1,
      sym_string,
  [302] = 1,
    ACTIONS(146), 1,
      sym_string,
  [306] = 1,
    ACTIONS(148), 1,
      sym_string,
  [310] = 1,
    ACTIONS(150), 1,
      sym_string,
  [314] = 1,
    ACTIONS(152), 1,
      aux_sym_comment_token1,
  [318] = 1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [322] = 1,
    ACTIONS(156), 1,
      anon_sym_EQ,
  [326] = 1,
    ACTIONS(158), 1,
      anon_sym_EQ,
  [330] = 1,
    ACTIONS(160), 1,
      anon_sym_EQ,
  [334] = 1,
    ACTIONS(162), 1,
      anon_sym_EQ,
  [338] = 1,
    ACTIONS(164), 1,
      anon_sym_EQ,
  [342] = 1,
    ACTIONS(166), 1,
      anon_sym_EQ,
  [346] = 1,
    ACTIONS(168), 1,
      anon_sym_EQ,
  [350] = 1,
    ACTIONS(170), 1,
      anon_sym_EQ,
  [354] = 1,
    ACTIONS(172), 1,
      anon_sym_EQ,
  [358] = 1,
    ACTIONS(174), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 19,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 57,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 95,
  [SMALL_STATE(10)] = 114,
  [SMALL_STATE(11)] = 133,
  [SMALL_STATE(12)] = 152,
  [SMALL_STATE(13)] = 171,
  [SMALL_STATE(14)] = 190,
  [SMALL_STATE(15)] = 209,
  [SMALL_STATE(16)] = 228,
  [SMALL_STATE(17)] = 247,
  [SMALL_STATE(18)] = 266,
  [SMALL_STATE(19)] = 270,
  [SMALL_STATE(20)] = 274,
  [SMALL_STATE(21)] = 278,
  [SMALL_STATE(22)] = 282,
  [SMALL_STATE(23)] = 286,
  [SMALL_STATE(24)] = 290,
  [SMALL_STATE(25)] = 294,
  [SMALL_STATE(26)] = 298,
  [SMALL_STATE(27)] = 302,
  [SMALL_STATE(28)] = 306,
  [SMALL_STATE(29)] = 310,
  [SMALL_STATE(30)] = 314,
  [SMALL_STATE(31)] = 318,
  [SMALL_STATE(32)] = 322,
  [SMALL_STATE(33)] = 326,
  [SMALL_STATE(34)] = 330,
  [SMALL_STATE(35)] = 334,
  [SMALL_STATE(36)] = 338,
  [SMALL_STATE(37)] = 342,
  [SMALL_STATE(38)] = 346,
  [SMALL_STATE(39)] = 350,
  [SMALL_STATE(40)] = 354,
  [SMALL_STATE(41)] = 358,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_customDefinition, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_customDefinition, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentWarning2, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contentWarning2, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentWarning, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contentWarning, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_launchSoundPath, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_launchSoundPath, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imagePath, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imagePath, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buildNumber, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buildNumber, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundleID, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundleID, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_playdate(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
