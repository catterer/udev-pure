/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: /usr/bin/gperf -L ANSI-C -t --ignore-case -N lookup_arphrd -H hash_arphrd_name -p -C src/basic/arphrd-from-name.gperf  */
/* Computed positions: -k'2-3,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "src/basic/arphrd-from-name.gperf"

#if __GNUC__ >= 7
_Pragma("GCC diagnostic ignored \"-Wimplicit-fallthrough\"")
#endif
#line 6 "src/basic/arphrd-from-name.gperf"
struct arphrd_name { const char* name; int id; };

#define TOTAL_KEYWORDS 59
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 18
#define MIN_HASH_VALUE 5
#define MAX_HASH_VALUE 135
/* maximum key range = 131, duplicates = 0 */

#ifndef GPERF_DOWNCASE
#define GPERF_DOWNCASE 1
static unsigned char gperf_downcase[256] =
  {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255
  };
#endif

#ifndef GPERF_CASE_STRCMP
#define GPERF_CASE_STRCMP 1
static int
gperf_case_strcmp (register const char *s1, register const char *s2)
{
  for (;;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 != 0 && c1 == c2)
        continue;
      return (int)c1 - (int)c2;
    }
}
#endif

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash_arphrd_name (register const char *str, register size_t len)
{
  static const unsigned char asso_values[] =
    {
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136,  55,
        0,  12,  60,   0,  15, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136,  20,  55,  15,   5,   5,
       10,   0,  60,   0,  45,  25,  10,  25,  45,  15,
        0,  25,   0,  15,   0,   5, 136,  40,  10,   5,
      136, 136, 136, 136, 136, 136, 136,  20,  55,  15,
        5,   5,  10,   0,  60,   0,  45,  25,  10,  25,
       45,  15,   0,  25,   0,  15,   0,   5, 136,  40,
       10,   5, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
      136, 136, 136, 136, 136, 136, 136
    };
  return len + asso_values[(unsigned char)str[2]+1] + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[len - 1]];
}

const struct arphrd_name *
lookup_arphrd (register const char *str, register size_t len)
{
  static const struct arphrd_name wordlist[] =
    {
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 34 "src/basic/arphrd-from-name.gperf"
      {"ETHER", ARPHRD_ETHER},
#line 42 "src/basic/arphrd-from-name.gperf"
      {"PRONET", ARPHRD_PRONET},
      {(char*)0},
#line 9 "src/basic/arphrd-from-name.gperf"
      {"SIT", ARPHRD_SIT},
      {(char*)0},
#line 45 "src/basic/arphrd-from-name.gperf"
      {"IPDDP", ARPHRD_IPDDP},
#line 62 "src/basic/arphrd-from-name.gperf"
      {"ARCNET", ARPHRD_ARCNET},
      {(char*)0},
#line 28 "src/basic/arphrd-from-name.gperf"
      {"BIF", ARPHRD_BIF},
#line 37 "src/basic/arphrd-from-name.gperf"
      {"FDDI", ARPHRD_FDDI},
#line 35 "src/basic/arphrd-from-name.gperf"
      {"DDCMP", ARPHRD_DDCMP},
#line 44 "src/basic/arphrd-from-name.gperf"
      {"EETHER", ARPHRD_EETHER},
      {(char*)0},
#line 21 "src/basic/arphrd-from-name.gperf"
      {"X25", ARPHRD_X25},
#line 48 "src/basic/arphrd-from-name.gperf"
      {"DLCI", ARPHRD_DLCI},
#line 53 "src/basic/arphrd-from-name.gperf"
      {"CISCO", ARPHRD_CISCO},
#line 46 "src/basic/arphrd-from-name.gperf"
      {"ECONET", ARPHRD_ECONET},
#line 36 "src/basic/arphrd-from-name.gperf"
      {"IEEE802", ARPHRD_IEEE802},
      {(char*)0},
#line 60 "src/basic/arphrd-from-name.gperf"
      {"ROSE", ARPHRD_ROSE},
#line 40 "src/basic/arphrd-from-name.gperf"
      {"IEEE802_TR", ARPHRD_IEEE802_TR},
#line 14 "src/basic/arphrd-from-name.gperf"
      {"AX25", ARPHRD_AX25},
      {(char*)0},
#line 17 "src/basic/arphrd-from-name.gperf"
      {"PPP", ARPHRD_PPP},
#line 31 "src/basic/arphrd-from-name.gperf"
      {"IRDA", ARPHRD_IRDA},
#line 58 "src/basic/arphrd-from-name.gperf"
      {"HIPPI", ARPHRD_HIPPI},
      {(char*)0}, {(char*)0},
#line 25 "src/basic/arphrd-from-name.gperf"
      {"IEEE80211_RADIOTAP", ARPHRD_IEEE80211_RADIOTAP},
#line 16 "src/basic/arphrd-from-name.gperf"
      {"IEEE802154_PHY", ARPHRD_IEEE802154_PHY},
#line 59 "src/basic/arphrd-from-name.gperf"
      {"RAWIP", ARPHRD_RAWIP},
#line 32 "src/basic/arphrd-from-name.gperf"
      {"TUNNEL", ARPHRD_TUNNEL},
      {(char*)0},
#line 24 "src/basic/arphrd-from-name.gperf"
      {"FCFABRIC", ARPHRD_FCFABRIC},
#line 54 "src/basic/arphrd-from-name.gperf"
      {"NONE", ARPHRD_NONE},
#line 66 "src/basic/arphrd-from-name.gperf"
      {"RSRVD", ARPHRD_RSRVD},
#line 26 "src/basic/arphrd-from-name.gperf"
      {"NETROM", ARPHRD_NETROM},
#line 50 "src/basic/arphrd-from-name.gperf"
      {"TUNNEL6", ARPHRD_TUNNEL6},
#line 38 "src/basic/arphrd-from-name.gperf"
      {"METRICOM", ARPHRD_METRICOM},
#line 23 "src/basic/arphrd-from-name.gperf"
      {"FCPP", ARPHRD_FCPP},
#line 30 "src/basic/arphrd-from-name.gperf"
      {"CSLIP", ARPHRD_CSLIP},
      {(char*)0}, {(char*)0},
#line 67 "src/basic/arphrd-from-name.gperf"
      {"LOOPBACK", ARPHRD_LOOPBACK},
#line 20 "src/basic/arphrd-from-name.gperf"
      {"HDLC", ARPHRD_HDLC},
#line 43 "src/basic/arphrd-from-name.gperf"
      {"HWX25", ARPHRD_HWX25},
#line 47 "src/basic/arphrd-from-name.gperf"
      {"PIMREG", ARPHRD_PIMREG},
#line 52 "src/basic/arphrd-from-name.gperf"
      {"RAWHDLC", ARPHRD_RAWHDLC},
#line 64 "src/basic/arphrd-from-name.gperf"
      {"LOCALTLK", ARPHRD_LOCALTLK},
#line 22 "src/basic/arphrd-from-name.gperf"
      {"FCPL", ARPHRD_FCPL},
#line 19 "src/basic/arphrd-from-name.gperf"
      {"IEEE80211_PRISM", ARPHRD_IEEE80211_PRISM},
      {(char*)0}, {(char*)0},
#line 49 "src/basic/arphrd-from-name.gperf"
      {"APPLETLK", ARPHRD_APPLETLK},
#line 29 "src/basic/arphrd-from-name.gperf"
      {"SLIP", ARPHRD_SLIP},
#line 56 "src/basic/arphrd-from-name.gperf"
      {"INFINIBAND", ARPHRD_INFINIBAND},
#line 63 "src/basic/arphrd-from-name.gperf"
      {"CSLIP6", ARPHRD_CSLIP6},
      {(char*)0}, {(char*)0},
#line 27 "src/basic/arphrd-from-name.gperf"
      {"FRAD", ARPHRD_FRAD},
#line 15 "src/basic/arphrd-from-name.gperf"
      {"ADAPT", ARPHRD_ADAPT},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 55 "src/basic/arphrd-from-name.gperf"
      {"VOID", ARPHRD_VOID},
#line 39 "src/basic/arphrd-from-name.gperf"
      {"IPGRE", ARPHRD_IPGRE},
      {(char*)0}, {(char*)0},
#line 13 "src/basic/arphrd-from-name.gperf"
      {"ATM", ARPHRD_ATM},
#line 11 "src/basic/arphrd-from-name.gperf"
      {"SKIP", ARPHRD_SKIP},
#line 65 "src/basic/arphrd-from-name.gperf"
      {"SLIP6", ARPHRD_SLIP6},
      {(char*)0}, {(char*)0},
#line 12 "src/basic/arphrd-from-name.gperf"
      {"ASH", ARPHRD_ASH},
#line 41 "src/basic/arphrd-from-name.gperf"
      {"IEEE80211", ARPHRD_IEEE80211},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 51 "src/basic/arphrd-from-name.gperf"
      {"IEEE1394", ARPHRD_IEEE1394},
#line 18 "src/basic/arphrd-from-name.gperf"
      {"FCAL", ARPHRD_FCAL},
#line 57 "src/basic/arphrd-from-name.gperf"
      {"IEEE802154", ARPHRD_IEEE802154},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 61 "src/basic/arphrd-from-name.gperf"
      {"LAPB", ARPHRD_LAPB},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 10 "src/basic/arphrd-from-name.gperf"
      {"EUI64", ARPHRD_EUI64},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 33 "src/basic/arphrd-from-name.gperf"
      {"CHAOS", ARPHRD_CHAOS}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash_arphrd_name (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (s && (((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strcmp (str, s))
            return &wordlist[key];
        }
    }
  return 0;
}
