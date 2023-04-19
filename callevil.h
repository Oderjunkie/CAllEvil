#ifndef OTESUNKI_CALLEVIL_H
#define OTESUNKI_CALLEVIL_H
  #include <assert.h>
  #include <ctype.h>
  #include <errno.h>
  #include <float.h>
  #include <limits.h>
  #include <locale.h>
  #include <math.h>
  #include <setjmp.h>
  #include <signal.h>
  #include <stdarg.h>
  #include <stddef.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  
  typedef enum {
    YES = 1, yes = 1, Y = 1, y = 1,
    NO = 0, no = 0, N = 0, n = 0,
    TRUE = 1, true = 1, T = 1, t = 1,
    FALSE = 0, false = 0, F = 0, f = 0,
    NIL = 0, nil = 0,
    ON = 1, on = 1, OFF = 0, off = 0,
    ENABLED = 1, enabled = 1, DISABLED = 0, disabled = 0,
    ENABLE = 1, enable = 1, DISABLE = 0, disable = 0,
    YAY = 1, yay = 1, NAY = 0, nay = 0,
    ONE = 1, one = 1, UNO = 1, uno = 1,
    ZERO = 0, zero = 0, CERO = 0, cero = 0,
    YEAH = 1, yeah = 1,
  } bool;

  #define bool bool
  
  #if CHAR_MAX == 127
    typedef signed char i8;
    #define i8 i8
  #endif
  
  #if UCHAR_MAX == 255
    typedef unsigned char u8;
    #define u8 u8
  #endif
  
  #if CHAR_MAX == 32767
    typedef signed char i16;
    #define i16 i16
  #else
    #if SHRT_MAX == 32767
      typedef signed short int i16;
      #define i16 i16
    #endif
  #endif
  
  #if UCHAR_MAX == 65535
    typedef unsigned char u16;
    #define u16 u16
  #else
    #if USHRT_MAX == 65535
      typedef unsigned short int u16;
      #define u16 u16
    #endif
  #endif
  
  #if CHAR_MAX == 2147483647UL
    typedef signed char i32;
    #define i32 i32
  #else
    #if SHRT_MAX == 2147483647UL
      typedef signed short int i32;
      #define i32 i32
    #else
      #if INT_MAX == 2147483647UL
        typedef signed int i32;
        #define i32 i32
      #else
        #if LONG_MAX == 2147483647UL
          typedef signed long int i32;
          #define i32 i32
        #endif
      #endif
    #endif
  #endif
  
  #if UCHAR_MAX == 4294967295UL
    typedef unsigned char u32;
    #define u32 u32
  #else
    #if USHRT_MAX == 4294967295UL
      typedef unsigned short int u32;
      #define u32 u32
    #else
      #if UINT_MAX == 4294967295UL
        typedef unsigned int u32;
        #define u32 u32
      #else
        #if ULONG_MAX == 4294967295UL
          typedef unsigned long int u32;
          #define u32 u32
        #endif
      #endif
    #endif
  #endif
  
  #if CHAR_MAX == 9223372036854775807UL
    typedef signed char i64;
    #define i64 i64
  #else
    #if SHRT_MAX == 9223372036854775807UL
      typedef signed short int i64;
      #define i64 i64
    #else
      #if INT_MAX == 9223372036854775807UL
        typedef signed int i64;
        #define i64 i64
      #else
        #if LONG_MAX == 9223372036854775807UL
          typedef signed long int i64;
          #define i64 i64
        #endif
      #endif
    #endif
  #endif
  
  #if UCHAR_MAX == 18446744073709551615UL
    typedef unsigned char u64;
    #define u64 u64
  #else
    #if USHRT_MAX == 18446744073709551615UL
      typedef unsigned short int u64;
      #define u64 u64
    #else
      #if UINT_MAX == 18446744073709551615UL
        typedef unsigned int u64;
        #define u64 u64
      #else
        #if ULONG_MAX == 18446744073709551615UL
          typedef unsigned long int u64;
          #define u64 u64
        #endif
      #endif
    #endif
  #endif

  enum {
    SIZEOF_VOID_P = sizeof(void *),
    SIZEOF_CHAR = sizeof(char),
    SIZEOF_SHORT_INT = sizeof(short int),
    SIZEOF_INT = sizeof(int),
    SIZEOF_LONG_INT = sizeof(long int),
  };
  
  #if SIZEOF_VOID == SIZEOF_VOID_P
    typedef signed char isize;
    typedef unsigned char usize;
    #define isize isize
    #define usize usize
  #else
    #if SIZEOF_SHORT_INT == SIZEOF_VOID_P
      typedef signed short int isize;
      typedef unsigned short int usize;
      #define isize isize
      #define usize usize
    #else
      #if SIZEOF_INT == SIZEOF_VOID_P
        typedef signed int isize;
        typedef unsigned int usize;
        #define isize isize
        #define usize usize
      #else
        #if SIZEOF_LONG_INT == SIZEOF_VOID_P
          typedef signed long int isize;
          typedef unsigned long int usize;
          #define isize isize
          #define usize usize
        #endif
      #endif
    #endif
  #endif
  
  #define and &&
  #define or ||
  #define not !
  #define increment ++
  #define decrement --
  
  #ifdef __GNUC__
    #define let __auto_type
  #else
    #define let int
  #endif
  
  #define DECLARE_KEYWORD(KEYWORD) \
    typedef struct { int dummy; } KEYWORD; \
    KEYWORD KEYWORD##_V = { 0 }; \
    static inline int assert_##KEYWORD##_keyword(int cond, KEYWORD keyword) { \
      return keyword.dummy ? 1 : cond; \
    }
  
  #define IGNORE(expr) ((void) (expr))
  #define nothing IGNORE(0)
  #define nop nothing;
  
  #define begin {
  #define end ;}
  
  #define if if (assert_THEN_keyword(
  DECLARE_KEYWORD(THEN);
  #define then , THEN_V)) begin
  #define else end else begin
  
  #define while while (assert_DO_keyword(
  DECLARE_KEYWORD(DO);
  #define do , DO_V)) begin
  
  #define continue continue;
  #define break break;
  
  #define switch switch (assert_AMONG_keyword(
  DECLARE_KEYWORD(AMONG);
  #define among , AMONG_V)) {
  #define case if true then break end case
  #define default if true then break end default
  
  #define for for (assert_CHECK_keyword(
  DECLARE_KEYWORD(CHECK);
  #define check , CHECK_V); assert_AFTERWARDS_keyword(
  DECLARE_KEYWORD(AFTERWARDS);
  #define afterwards , AFTERWARDS_V); assert_DURING_keyword(
  DECLARE_KEYWORD(DURING);
  #define during , DURING_V)) begin
  
  #define declare static const u8 PASTE2(EXPECTED_STRUCT_LINE_, __LINE__)[
  #define struct(name) 1]; struct name; typedef struct name name; struct name {
  #define union(name) 1]; union name; typedef union name name; union name
  #define enum(name) 1]; enum name; typedef enum name name; enum name
  
  #define main int main(int argc, char *argv[]) {
  #define return(expr) return expr;
  
  #define PASTE0()
  #define PASTE1(_0) PASTE1_(_0)
  #define PASTE1_(_0) _0
  #define PASTE2(_0, _1) PASTE2_(_0, _1)
  #define PASTE2_(_0, _1) _0##_1
  #define PASTE3(_0, _1, _2) PASTE3_(_0, _1, _2)
  #define PASTE3_(_0, _1, _2) _0##_1##_2
  #define PASTE4(_0, _1, _2, _3) PASTE4_(_0, _1, _2, _3)
  #define PASTE4_(_0, _1, _2, _3) _0##_1##_2##_3
  #define PASTE5(_0, _1, _2, _3, _4) PASTE5_(_0, _1, _2, _3, _4)
  #define PASTE5_(_0, _1, _2, _3, _4) _0##_1##_2##_3##_4
  #define PASTE6(_0, _1, _2, _3, _4, _5) PASTE6_(_0, _1, _2, _3, _4, _5)
  #define PASTE6_(_0, _1, _2, _3, _4, _5) _0##_1##_2##_3##_4##_5
  #define PASTE7(_0, _1, _2, _3, _4, _5, _6) PASTE7_(_0, _1, _2, _3, _4, _5, _6)
  #define PASTE7_(_0, _1, _2, _3, _4, _5, _6) _0##_1##_2##_3##_4##_5##_6
  #define PASTE8(_0, _1, _2, _3, _4, _5, _6, _7) PASTE8_(_0, _1, _2, _3, _4, _5, _6, _7)
  #define PASTE8_(_0, _1, _2, _3, _4, _5, _6, _7) _0##_1##_2##_3##_4##_5##_6##_7
  #define PASTE9(_0, _1, _2, _3, _4, _5, _6, _7, _8) PASTE9_(_0, _1, _2, _3, _4, _5, _6, _7, _8)
  #define PASTE9_(_0, _1, _2, _3, _4, _5, _6, _7, _8) _0##_1##_2##_3##_4##_5##_6##_7##_8
  #define PASTE10(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9) PASTE10_(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9)
  #define PASTE10_(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9) _0##_1##_2##_3##_4##_5##_6##_7##_8##_9
  #define PASTE11(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10) PASTE11_(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10)
  #define PASTE11_(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10) _0##_1##_2##_3##_4##_5##_6##_7##_8##_9##_10
  #define PASTE12(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) PASTE12_(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11)
  #define PASTE12_(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) _0##_1##_2##_3##_4##_5##_6##_7##_8##_9##_10##_11
  #define PASTE13(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12) PASTE13_(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12)
  #define PASTE13_(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12) _0##_1##_2##_3##_4##_5##_6##_7##_8##_9##_10##_11##_12
  #define PASTE14(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13) PASTE14_(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13)
  #define PASTE14_(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13) _0##_1##_2##_3##_4##_5##_6##_7##_8##_9##_10##_11##_12##_13
  #define PASTE15(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14) PASTE15_(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14)
  #define PASTE15_(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14) _0##_1##_2##_3##_4##_5##_6##_7##_8##_9##_10##_11##_12##_13##_14
  #define DECL_AS_EXPR(decl) IGNORE(sizeof(struct{ int dummy; decl; }))
  #define STATIC_ASSERT(cond, msg) DECL_AS_EXPR(int ERROR: (cond) ? 2 : -1)
  #define CONSTEXPR_INT(decl) DECL_AS_EXPR(enum { decl } foo)
#endif
