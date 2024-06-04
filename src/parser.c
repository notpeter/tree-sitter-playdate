#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym_empty_line = 2,
  anon_sym_name = 3,
  anon_sym_ = 4,
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
  aux_sym_unknown_token1 = 15,
  sym__string = 16,
  sym__integer = 17,
  sym__reverse_dns = 18,
  sym_source_file = 19,
  sym_definition = 20,
  sym_known = 21,
  sym_unknown = 22,
  aux_sym_source_file_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_empty_line] = "empty_line",
  [anon_sym_name] = "name",
  [anon_sym_] = "",
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
  [aux_sym_unknown_token1] = "unknown_token1",
  [sym__string] = "_string",
  [sym__integer] = "_integer",
  [sym__reverse_dns] = "_reverse_dns",
  [sym_source_file] = "source_file",
  [sym_definition] = "definition",
  [sym_known] = "known",
  [sym_unknown] = "unknown",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_empty_line] = sym_empty_line,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_] = anon_sym_,
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
  [aux_sym_unknown_token1] = aux_sym_unknown_token1,
  [sym__string] = sym__string,
  [sym__integer] = sym__integer,
  [sym__reverse_dns] = sym__reverse_dns,
  [sym_source_file] = sym_source_file,
  [sym_definition] = sym_definition,
  [sym_known] = sym_known,
  [sym_unknown] = sym_unknown,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_line] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
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
  [aux_sym_unknown_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym__reverse_dns] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_known] = {
    .visible = true,
    .named = true,
  },
  [sym_unknown] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(83);
      ADVANCE_MAP(
        '\n', 85,
        '#', 84,
        'a', 72,
        'b', 73,
        'c', 53,
        'd', 22,
        'i', 44,
        'l', 12,
        'n', 11,
        'v', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'I') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'N') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'P') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'P') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'W') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'b') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'g') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'g') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 37:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 63:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 's') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 's') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 66:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 't') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 't') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 't') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 't') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 70:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 't') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 't') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 75:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == '=') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == '=') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 81:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 82:
      if (eof) ADVANCE(83);
      ADVANCE_MAP(
        '\n', 85,
        '#', 84,
        '=', 88,
        'a', 72,
        'b', 73,
        'c', 53,
        'd', 22,
        'i', 44,
        'l', 12,
        'n', 11,
        'v', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_empty_line);
      if (lookahead == '\n') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '=') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_author);
      if (lookahead == '=') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead == '=') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '=') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_bundleID);
      if (lookahead == '=') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_buildNumber);
      if (lookahead == '=') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_imagePath);
      if (lookahead == '=') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_launchSoundPath);
      if (lookahead == '=') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_contentWarning);
      if (lookahead == '2') ADVANCE(97);
      if (lookahead == '=') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_contentWarning2);
      if (lookahead == '=') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_unknown_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__reverse_dns);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 82},
  [4] = {.lex_state = 82},
  [5] = {.lex_state = 82},
  [6] = {.lex_state = 82},
  [7] = {.lex_state = 82},
  [8] = {.lex_state = 79},
  [9] = {.lex_state = 87},
  [10] = {.lex_state = 82},
  [11] = {.lex_state = 82},
  [12] = {.lex_state = 82},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 82},
  [15] = {.lex_state = 79},
  [16] = {.lex_state = 80},
  [17] = {.lex_state = 82},
  [18] = {.lex_state = 79},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_empty_line] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_author] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_bundleID] = ACTIONS(1),
    [anon_sym_buildNumber] = ACTIONS(1),
    [anon_sym_imagePath] = ACTIONS(1),
    [anon_sym_launchSoundPath] = ACTIONS(1),
    [anon_sym_contentWarning] = ACTIONS(1),
    [anon_sym_contentWarning2] = ACTIONS(1),
    [aux_sym_unknown_token1] = ACTIONS(1),
    [sym__integer] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym_definition] = STATE(2),
    [sym_known] = STATE(4),
    [sym_unknown] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_empty_line] = ACTIONS(5),
    [anon_sym_name] = ACTIONS(7),
    [anon_sym_author] = ACTIONS(7),
    [anon_sym_description] = ACTIONS(9),
    [anon_sym_version] = ACTIONS(9),
    [anon_sym_bundleID] = ACTIONS(11),
    [anon_sym_buildNumber] = ACTIONS(13),
    [anon_sym_imagePath] = ACTIONS(9),
    [anon_sym_launchSoundPath] = ACTIONS(9),
    [anon_sym_contentWarning] = ACTIONS(9),
    [anon_sym_contentWarning2] = ACTIONS(9),
    [aux_sym_unknown_token1] = ACTIONS(15),
  },
  [2] = {
    [sym_definition] = STATE(3),
    [sym_known] = STATE(4),
    [sym_unknown] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym_empty_line] = ACTIONS(19),
    [anon_sym_name] = ACTIONS(7),
    [anon_sym_author] = ACTIONS(7),
    [anon_sym_description] = ACTIONS(9),
    [anon_sym_version] = ACTIONS(9),
    [anon_sym_bundleID] = ACTIONS(11),
    [anon_sym_buildNumber] = ACTIONS(13),
    [anon_sym_imagePath] = ACTIONS(9),
    [anon_sym_launchSoundPath] = ACTIONS(9),
    [anon_sym_contentWarning] = ACTIONS(9),
    [anon_sym_contentWarning2] = ACTIONS(9),
    [aux_sym_unknown_token1] = ACTIONS(15),
  },
  [3] = {
    [sym_definition] = STATE(3),
    [sym_known] = STATE(4),
    [sym_unknown] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [sym_empty_line] = ACTIONS(23),
    [anon_sym_name] = ACTIONS(26),
    [anon_sym_author] = ACTIONS(26),
    [anon_sym_description] = ACTIONS(29),
    [anon_sym_version] = ACTIONS(29),
    [anon_sym_bundleID] = ACTIONS(32),
    [anon_sym_buildNumber] = ACTIONS(35),
    [anon_sym_imagePath] = ACTIONS(29),
    [anon_sym_launchSoundPath] = ACTIONS(29),
    [anon_sym_contentWarning] = ACTIONS(29),
    [anon_sym_contentWarning2] = ACTIONS(29),
    [aux_sym_unknown_token1] = ACTIONS(38),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment] = ACTIONS(41),
    [sym_empty_line] = ACTIONS(41),
    [anon_sym_name] = ACTIONS(43),
    [anon_sym_author] = ACTIONS(43),
    [anon_sym_description] = ACTIONS(43),
    [anon_sym_version] = ACTIONS(43),
    [anon_sym_bundleID] = ACTIONS(43),
    [anon_sym_buildNumber] = ACTIONS(43),
    [anon_sym_imagePath] = ACTIONS(43),
    [anon_sym_launchSoundPath] = ACTIONS(43),
    [anon_sym_contentWarning] = ACTIONS(43),
    [anon_sym_contentWarning2] = ACTIONS(43),
    [aux_sym_unknown_token1] = ACTIONS(41),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_comment] = ACTIONS(45),
    [sym_empty_line] = ACTIONS(45),
    [anon_sym_name] = ACTIONS(47),
    [anon_sym_author] = ACTIONS(47),
    [anon_sym_description] = ACTIONS(47),
    [anon_sym_version] = ACTIONS(47),
    [anon_sym_bundleID] = ACTIONS(47),
    [anon_sym_buildNumber] = ACTIONS(47),
    [anon_sym_imagePath] = ACTIONS(47),
    [anon_sym_launchSoundPath] = ACTIONS(47),
    [anon_sym_contentWarning] = ACTIONS(47),
    [anon_sym_contentWarning2] = ACTIONS(47),
    [aux_sym_unknown_token1] = ACTIONS(45),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_comment] = ACTIONS(49),
    [sym_empty_line] = ACTIONS(49),
    [anon_sym_name] = ACTIONS(51),
    [anon_sym_author] = ACTIONS(51),
    [anon_sym_description] = ACTIONS(51),
    [anon_sym_version] = ACTIONS(51),
    [anon_sym_bundleID] = ACTIONS(51),
    [anon_sym_buildNumber] = ACTIONS(51),
    [anon_sym_imagePath] = ACTIONS(51),
    [anon_sym_launchSoundPath] = ACTIONS(51),
    [anon_sym_contentWarning] = ACTIONS(51),
    [anon_sym_contentWarning2] = ACTIONS(51),
    [aux_sym_unknown_token1] = ACTIONS(49),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_comment] = ACTIONS(53),
    [sym_empty_line] = ACTIONS(53),
    [anon_sym_name] = ACTIONS(55),
    [anon_sym_author] = ACTIONS(55),
    [anon_sym_description] = ACTIONS(55),
    [anon_sym_version] = ACTIONS(55),
    [anon_sym_bundleID] = ACTIONS(55),
    [anon_sym_buildNumber] = ACTIONS(55),
    [anon_sym_imagePath] = ACTIONS(55),
    [anon_sym_launchSoundPath] = ACTIONS(55),
    [anon_sym_contentWarning] = ACTIONS(55),
    [anon_sym_contentWarning2] = ACTIONS(55),
    [aux_sym_unknown_token1] = ACTIONS(53),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(57), 1,
      sym__string,
    ACTIONS(59), 1,
      sym__integer,
  [7] = 1,
    ACTIONS(61), 1,
      anon_sym_,
  [11] = 1,
    ACTIONS(63), 1,
      anon_sym_EQ,
  [15] = 1,
    ACTIONS(65), 1,
      anon_sym_EQ,
  [19] = 1,
    ACTIONS(67), 1,
      anon_sym_EQ,
  [23] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [27] = 1,
    ACTIONS(71), 1,
      anon_sym_EQ,
  [31] = 1,
    ACTIONS(73), 1,
      sym__string,
  [35] = 1,
    ACTIONS(73), 1,
      sym__reverse_dns,
  [39] = 1,
    ACTIONS(73), 1,
      sym__integer,
  [43] = 1,
    ACTIONS(75), 1,
      sym__string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 7,
  [SMALL_STATE(10)] = 11,
  [SMALL_STATE(11)] = 15,
  [SMALL_STATE(12)] = 19,
  [SMALL_STATE(13)] = 23,
  [SMALL_STATE(14)] = 27,
  [SMALL_STATE(15)] = 31,
  [SMALL_STATE(16)] = 35,
  [SMALL_STATE(17)] = 39,
  [SMALL_STATE(18)] = 43,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_known, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_known, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_known, 4, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_known, 4, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
