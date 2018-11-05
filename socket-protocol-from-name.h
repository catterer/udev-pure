/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: /usr/bin/gperf -L ANSI-C -t --ignore-case -N lookup_socket_protocol -H hash_socket_protocol_name -p -C src/basic/socket-protocol-from-name.gperf  */
/* Computed positions: -k'1-3' */

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

#line 1 "src/basic/socket-protocol-from-name.gperf"

#if __GNUC__ >= 7
_Pragma("GCC diagnostic ignored \"-Wimplicit-fallthrough\"")
#endif
#line 6 "src/basic/socket-protocol-from-name.gperf"
struct socket_protocol_name { const char* name; int id; };

#define TOTAL_KEYWORDS 32
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 8
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 76
/* maximum key range = 75, duplicates = 0 */

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
hash_socket_protocol_name (register const char *str, register size_t len)
{
  static const unsigned char asso_values[] =
    {
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77,  5,  0,  5,  5, 35,
      25, 10,  5,  0, 77, 77, 45,  0,  0, 20,
       0, 77,  5,  0, 25, 10, 35, 10, 77, 77,
      77, 77, 77, 77, 77, 77, 77,  5,  0,  5,
       5, 35, 25, 10,  5,  0, 77, 77, 45,  0,
       0, 20,  0, 77,  5,  0, 25, 10, 35, 10,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77, 77, 77, 77, 77,
      77, 77, 77, 77, 77, 77
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

const struct socket_protocol_name *
lookup_socket_protocol (register const char *str, register size_t len)
{
  static const struct socket_protocol_name wordlist[] =
    {
      {(char*)0}, {(char*)0},
#line 28 "src/basic/socket-protocol-from-name.gperf"
      {"IP", IPPROTO_IP},
#line 11 "src/basic/socket-protocol-from-name.gperf"
      {"PIM", IPPROTO_PIM},
#line 17 "src/basic/socket-protocol-from-name.gperf"
      {"IPIP", IPPROTO_IPIP},
      {(char*)0}, {(char*)0},
#line 24 "src/basic/socket-protocol-from-name.gperf"
      {"MH", IPPROTO_MH},
#line 16 "src/basic/socket-protocol-from-name.gperf"
      {"IDP", IPPROTO_IDP},
#line 31 "src/basic/socket-protocol-from-name.gperf"
      {"ICMP", IPPROTO_ICMP},
      {(char*)0},
#line 37 "src/basic/socket-protocol-from-name.gperf"
      {"ICMPV6", IPPROTO_ICMPV6},
#line 23 "src/basic/socket-protocol-from-name.gperf"
      {"AH", IPPROTO_AH},
#line 15 "src/basic/socket-protocol-from-name.gperf"
      {"PUP", IPPROTO_PUP},
#line 36 "src/basic/socket-protocol-from-name.gperf"
      {"IGMP", IPPROTO_IGMP},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 27 "src/basic/socket-protocol-from-name.gperf"
      {"UDP", IPPROTO_UDP},
#line 39 "src/basic/socket-protocol-from-name.gperf"
      {"DCCP", IPPROTO_DCCP},
      {(char*)0}, {(char*)0},
#line 40 "src/basic/socket-protocol-from-name.gperf"
      {"UDPLITE", IPPROTO_UDPLITE},
#line 19 "src/basic/socket-protocol-from-name.gperf"
      {"RAW", IPPROTO_RAW},
#line 35 "src/basic/socket-protocol-from-name.gperf"
      {"NONE", IPPROTO_NONE},
      {(char*)0}, {(char*)0},
#line 26 "src/basic/socket-protocol-from-name.gperf"
      {"TP", IPPROTO_TP},
#line 25 "src/basic/socket-protocol-from-name.gperf"
      {"MTP", IPPROTO_MTP},
#line 38 "src/basic/socket-protocol-from-name.gperf"
      {"COMP", IPPROTO_COMP},
      {(char*)0}, {(char*)0},
#line 29 "src/basic/socket-protocol-from-name.gperf"
      {"HOPOPTS", IPPROTO_HOPOPTS},
#line 18 "src/basic/socket-protocol-from-name.gperf"
      {"TCP", IPPROTO_TCP},
#line 21 "src/basic/socket-protocol-from-name.gperf"
      {"SCTP", IPPROTO_SCTP},
      {(char*)0}, {(char*)0},
#line 34 "src/basic/socket-protocol-from-name.gperf"
      {"DSTOPTS", IPPROTO_DSTOPTS},
#line 13 "src/basic/socket-protocol-from-name.gperf"
      {"ESP", IPPROTO_ESP},
#line 20 "src/basic/socket-protocol-from-name.gperf"
      {"IPV6", IPPROTO_IPV6},
      {(char*)0}, {(char*)0},
#line 9 "src/basic/socket-protocol-from-name.gperf"
      {"ROUTING", IPPROTO_ROUTING},
#line 32 "src/basic/socket-protocol-from-name.gperf"
      {"FRAGMENT", IPPROTO_FRAGMENT},
#line 22 "src/basic/socket-protocol-from-name.gperf"
      {"RSVP", IPPROTO_RSVP},
#line 12 "src/basic/socket-protocol-from-name.gperf"
      {"ENCAP", IPPROTO_ENCAP},
      {(char*)0}, {(char*)0},
#line 10 "src/basic/socket-protocol-from-name.gperf"
      {"EGP", IPPROTO_EGP},
#line 30 "src/basic/socket-protocol-from-name.gperf"
      {"MPLS", IPPROTO_MPLS},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 33 "src/basic/socket-protocol-from-name.gperf"
      {"GRE", IPPROTO_GRE},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 14 "src/basic/socket-protocol-from-name.gperf"
      {"BEETPH", IPPROTO_BEETPH}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash_socket_protocol_name (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (s && (((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strcmp (str, s))
            return &wordlist[key];
        }
    }
  return 0;
}
