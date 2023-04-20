#ifndef OTESUNKI_CALLEVIL_H
#define OTESUNKI_CALLEVIL_H
  #ifndef C_VERSION
    #ifndef __STDC__
      #define C_VERSION 1978
    #endif
  #endif

  #ifndef C_VERSION
    #ifndef __STDC_VERSION__
      #define C_VERSION 1989
    #endif
  #endif

  #ifndef C_VERSION
    #if __STDC_VERSION__ <= 199409L
      #define C_VERSION 1995
    #endif
  #endif

  #ifndef C_VERSION
    #if __STDC_VERSION__ <= 199901L
      #define C_VERSION 1999
    #endif
  #endif

  #ifndef C_VERSION
    #if __STDC_VERSION__ <= 201112L
      #define C_VERSION 2011
    #endif
  #endif

  #ifndef C_VERSION
    #if __STDC_VERSION__ <= 201710L
      #define C_VERSION 2017
    #endif
  #endif

  #ifndef C_VERSION
    /* who knows??? */
    #define C_VERSION 2023
  #endif
    

  #if C_VERSION == 1978
    #include <stdio.h>
    #include <varargs.h> /* pray that lack of standardization allows this */
  #endif

  #if C_VERSION == 1989
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
    #include <string.h>
    #include <time.h>
  #endif

  #if C_VERSION == 1995
    #include <assert.h>
    #include <ctype.h>
    #include <float.h>
    #include <iso646.h>
    #include <limits.h>
    #include <locale.h>
    #include <math.h>
    #include <setjmp.h>
    #include <signal.h>
    #include <stdarg.h>
    #include <stddef.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <time.h>
    #include <wchar.h>
    #include <wctype.h>
  #endif

  #if C_VERSION >= 1999
    #include <assert.h>
    #include <complex.h>
    #include <ctype.h>
    #include <fenv.h>
    #include <float.h>
    #include <inttypes.h>
    #include <iso646.h>
    #include <limits.h>
    #include <locale.h>
    #include <math.h>
    #include <setjmp.h>
    #include <signal.h>
    #include <stdarg.h>
    #include <stdbool.h>
    #include <stddef.h>
    #include <stdint.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <tgmath.h>
    #include <time.h>
    #include <wchar.h>
    #include <wctype.h>
  #endif

  #if C_VERSION >= 1989
    typedef enum {
      #if C_VERSION <= 1995
      true = 1, false = 0,
      #else
        #ifdef true
          #undef true
          true = 1,
        #endif
        #ifdef false
          #undef false
          false = 0,
        #endif
      #endif
      YES = 1,
      yes = 1,
      Y = 1,
      y = 1,
      NO = 0,
      no = 0,
      N = 0,
      n = 0,
      TRUE = 1,
      T = 1,
      t = 1,
      FALSE = 0,
      F = 0,
      f = 0,
      NIL = 0,
      nil = 0,
      ON = 1,
      on = 1,
      OFF = 0,
      off = 0,
      ENABLED = 1,
      enabled = 1,
      DISABLED = 0,
      disabled = 0,
      ENABLE = 1,
      enable = 1,
      DISABLE = 0,
      disable = 0,
      YAY = 1,
      yay = 1,
      NAY = 0,
      nay = 0,
      ONE = 1,
      one = 1,
      UNO = 1,
      uno = 1,
      ZERO = 0,
      zero = 0,
      CERO = 0,
      cero = 0,
      SI = 1,
      si = 1,
      NAO = 0,
      nao = 0,
      YEAH = 1,
      yeah = 1,
      NAH = 0,
      nah = 1,
      SURE = 1,
      sure = 1,
      MEH = 0,
      meh = 0
    }
  
    #if C_VERSION <= 1995
      bool;
    #else
      #ifdef bool
        #undef bool
        bool;
        #define bool bool
      #else
        CALLEVILBOOL;
        #define bool CALLEVILBOOL
      #endif
    #endif
  #else
    #define YES 1
    #define yes 1
    #define Y 1
    #define y 1
    #define NO 0
    #define no 0
    #define N 0
    #define n 0
    #define TRUE 1
    #define T 1
    #define t 1
    #define FALSE 0
    #define F 0
    #define f 0
    #define NIL 0
    #define nil 0
    #define ON 1
    #define on 1
    #define OFF 0
    #define off 0
    #define ENABLED 1
    #define enabled 1
    #define DISABLED 0
    #define disabled 0
    #define ENABLE 1
    #define enable 1
    #define DISABLE 0
    #define disable 0
    #define YAY 1
    #define yay 1
    #define NAY 0
    #define nay 0
    #define ONE 1
    #define one 1
    #define UNO 1
    #define uno 1
    #define ZERO 0
    #define zero 0
    #define CERO 0
    #define cero 0
    #define SI 1
    #define si 1
    #define NAO 0
    #define nao 0
    #define YEAH 1
    #define yeah 1
    #define NAH 0
    #define nah 1
    #define SURE 1
    #define sure 1
    #define MEH 0
    #define meh 0
    typedef int bool;
    #define bool bool
  #endif

  #if C_VERSION < 1999
    #define inline
  #endif

  #ifdef __GNUC__
    #define unused __attribute__((unused))
  #else
    #define unused
  #endif

  #if C_VERSION >= 1989
  enum {
    SIZEOF_VOID_P = sizeof(void *),
    SIZEOF_CHAR = sizeof(char),
    SIZEOF_SHORT_INT = sizeof(short int),
    SIZEOF_INT = sizeof(int),
    SIZEOF_LONG_INT = sizeof(long int)
  };
  #endif

  #if C_VERSION >= 1999
    #ifdef UINT8_MAX
      typedef int8_t i8;
      typedef uint8_t u8;
      #define i8 i8
      #define u8 u8
    #endif
    #ifdef UINT16_MAX
      typedef int16_t i16;
      typedef uint16_t u16;
      #define i16 i16
      #define u16 u16
    #endif
    #ifdef UINT16_MAX
      typedef int32_t i32;
      typedef uint32_t u32;
      #define i32 i32
      #define u32 u32
    #endif
    #ifdef UINT64_MAX
      typedef int64_t i64;
      typedef uint64_t u64;
      #define i64 i64
      #define u64 u64
    #endif
    #ifdef UINTPTR_MAX
      typedef intptr_t isize;
      typedef uintptr_t usize;
      #define isize isize
      #define usize usize
    #endif
  #else
    #if C_VERSION >= 1989
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
      #if SIZEOF_CHAR == SIZEOF_VOID_P
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
    #else
      typedef unsigned char u8;
      typedef signed char i8;
      typedef unsigned short int u16;
      typedef signed short int i16;
      typedef unsigned long int u32;
      typedef signed long int i32;
      #define u8 u8
      #define i8 i8
      #define u16 u16
      #define i16 i16
      #define u32 u32
      #define i32 i32
    #endif
  #endif

  typedef void CALLEVILVOID;
  typedef signed char CALLEVILCHAR;
  typedef signed short CALLEVILSHORT;
  typedef signed int CALLEVILINT;
  typedef signed long CALLEVILLONG;
  typedef unsigned char CALLEVILUCHAR;
  typedef unsigned short CALLEVILUSHORT;
  typedef unsigned int CALLEVILUINT;
  typedef unsigned long CALLEVILULONG;
  typedef char *str;

  #undef NULL
  #define NULL ((CALLEVILVOID *) 0)
  #define UNDEFINED { 0 }
  #define undefined { 0 }
  #define nul NULL
  #define null NULL
  #define nulptr NULL
  #define nullptr NULL
  #define NUL NULL
  #define NULPTR NULL
  #define NULLPTR NULL
  #define and &&
  #define or ||
  #define not !
  #define un !
  #define increment ++
  #define decrement --
  #define be =
  #define is ==
  #ifdef __GNUC__
    #define let __auto_type
  #else
    typedef int let;
  #endif
  
  #define DECLARE_KEYWORD(KEYWORD) \
    typedef struct { CALLEVILINT dummy; } KEYWORD; \
    KEYWORD KEYWORD##_V = undefined; \
    static inline unused CALLEVILINT assert_##KEYWORD##_keyword(CALLEVILINT cond, KEYWORD keyword) { \
      return keyword.dummy ? 1 : cond; \
    }
  
  #define IGNORE(expr) ((CALLEVILVOID) (expr))
  #define nothing IGNORE(0)
  #define nop nothing;

  #define half_begin {
  #define begin half_begin half_begin
  #define half_end ;}
  #define end half_end half_end
  
  #define if ; if (assert_THEN_keyword((
  DECLARE_KEYWORD(THEN)
  #define then ), THEN_V)) begin
  #define else end else begin
  
  #define while ; while (assert_DO_keyword((
  DECLARE_KEYWORD(DO)
  #define do ), DO_V)) begin
  
  #define continue ; continue;
  #define break ; break;
  
  #define switch ; switch (assert_AMONG_keyword((
  DECLARE_KEYWORD(AMONG)
  #define among ), AMONG_V)) begin
  #define case ; if true then break end case
  #define default ; if true then break end default
  
  DECLARE_KEYWORD(CHECK)
  #if C_VERSION >= 1999
    #define for ; for (
    #define check ; assert_AFTERWARDS_keyword((
  #else
    #define for ; for (assert_CHECK_keyword((
    #define check ), CHECK_V); assert_AFTERWARDS_keyword((
  #endif
  DECLARE_KEYWORD(AFTERWARDS)
  #define afterwards ), AFTERWARDS_V); assert_DURING_keyword((
  DECLARE_KEYWORD(DURING)
  #define during ), DURING_V)) begin
  
  DECLARE_KEYWORD(TIMES)
  #if C_VERSION >= 1999
    #define repeat for struct { i32 i, N; } _repeat = {0, (assert_TIMES_keyword(
    #define times , TIMES_V)) } check _repeat.i < _repeat.N afterwards increment _repeat.i during
  #else
    #define repeat DECL_AS_EXPR(CALLEVILINT REQUIRES_C99_OR_ABOVE: -1); if
    #define times ), TIMES_V)) then
  #endif
  
  #define loop while true do

  #ifdef __GNUC__
    #define defer defer_1(__COUNTER__)
    #define defer_1(counter) defer_2(defer_3, __COUNTER__)
    #define defer_2(f, a) f(a)
    #define defer_3(counter) \
      auto CALLEVILVOID _defer_##counter(CALLEVILVOID *); \
      __attribute__ ((cleanup(_defer_##counter))) struct {} foo; \
      auto declare procedure(CALLEVILVOID, _defer_##counter, (CALLEVILVOID *_ptr)) \
        IGNORE(ptr);
  #else
    #define defer if DECL_AS_EXPR(CALLEVILINT REQUIRES_GNU_C : -1), false then
  #endif
  
  #define declare extern char PASTE2(EXPECTED_STRUCT_UNION_ENUM_OR_PROCEDURE_LINE_, __LINE__)[
  #define struct(name) 2]; struct name; typedef struct name name; struct name {
  #define union(name) 2]; union name; typedef union name name; union name {
  #define enum(name) 2]; enum name; typedef enum name name; enum name {
  #ifdef __GNUC__
    #define WHEN_GNU(foo, bar) foo
  #else
    #define WHEN_GNU(foo, bar) bar
  #endif
  
  #define procedure(ret, name, args) \
    2]; ret name args begin \
      typedef WHEN_GNU(typeof(ret), ret) RETURN_TYPE; \
      static CALLEVILUINT CURRENT_LABEL = 0; \
      RETURN_TYPE UNIT_RETURNED = { strcmp(#name, "main") ? 1 : EXIT_SUCCESS }; \
      RETURN_TYPE NULL_RETURNED = { strcmp(#name, "main") ? 0 : EXIT_FAILURE }; \
      RETURN_TYPE ERR_RETURNED = { strcmp(#name, "main") ? -1 : EXIT_FAILURE }; \
      IGNORE(sizeof(RETURN_TYPE)); \
      IGNORE(UNIT_RETURNED); \
      IGNORE(NULL_RETURNED); \
      IGNORE(ERR_RETURNED); \
  
  #define coroutine(ret, name, args, initdecls) \
    2]; ret name args half_begin \
      typedef WHEN_GNU(typeof(ret), ret) RETURN_TYPE; \
      static CALLEVILUINT CURRENT_LABEL = 0; \
      RETURN_TYPE UNIT_RETURNED = { strcmp(#name, "main") ? 1 : EXIT_SUCCESS }; \
      RETURN_TYPE NULL_RETURNED = { strcmp(#name, "main") ? 0 : EXIT_FAILURE }; \
      RETURN_TYPE ERR_RETURNED = { strcmp(#name, "main") ? -1 : EXIT_FAILURE }; \
      initdecls; \
      IGNORE(sizeof(RETURN_TYPE)); \
      IGNORE(UNIT_RETURNED); \
      IGNORE(NULL_RETURNED); \
      IGNORE(ERR_RETURNED); \
      switch CURRENT_LABEL among half_end case 0: \
  
  #define yield(val) \
    CURRENT_LABEL = __LINE__; return val; case __LINE__: nop
  
  #define main \
    declare procedure(CALLEVILINT, main, (CALLEVILINT argc, str argv[])) \
      IGNORE(argc); \
      IGNORE(argv);
  
  #define return(expr) CURRENT_LABEL = 0; return expr;
  
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
  #if C_VERSION >= 1999
    #define PP_NARG_1(...)                          \
      PP_NARG_2(__VA_ARGS__,PP_RSEQ_N())
    #define PP_NARG_2(...)                          \
      PP_ARG_N(__VA_ARGS__)
    #define PP_ARG_N(_1, _2, _3, _4, _5, _6, _7, _8, _9,_10,        \
                     _11,_12,_13,_14,_15,_16,_17,_18,_19,_20,       \
                     _21,_22,_23,_24,_25,_26,_27,_28,_29,_30,       \
                     _31,_32,_33,_34,_35,_36,_37,_38,_39,_40,       \
                     _41,_42,_43,_44,_45,_46,_47,_48,_49,_50,       \
                     _51,_52,_53,_54,_55,_56,_57,_58,_59,_60,       \
                     _61,_62,_63,N,...) N
    #define PP_RSEQ_N()                             \
      63,62,61,60,                                  \
        59,58,57,56,55,54,53,52,51,50,              \
        49,48,47,46,45,44,43,42,41,40,              \
        39,38,37,36,35,34,33,32,31,30,              \
        29,28,27,26,25,24,23,22,21,20,              \
        19,18,17,16,15,14,13,12,11,10,              \
        9,8,7,6,5,4,3,2,1,0
    #define HAS_COMMA_RSEQ_N()                      \
      1,1,1,1,                                      \
        1,1,1,1,1,1,1,1,1,1,                        \
        1,1,1,1,1,1,1,1,1,1,                        \
        1,1,1,1,1,1,1,1,1,1,                        \
        1,1,1,1,1,1,1,1,1,1,                        \
        1,1,1,1,1,1,1,1,1,1,                        \
        1,1,1,1,1,1,1,1,0
    #define HAS_COMMA(...) PP_NARG_1(__VA_ARGS__, HAS_COMMA_RSEQ_N())
    #define TRIGGER_PARENTHESIS(...) ,
    #define PP_NARG(...)                                            \
      ISEMPTY_SWITCH(                                \
               0,                                                   \
               PP_NARG_1(__VA_ARGS__),                              \
               HAS_COMMA(__VA_ARGS__),                              \
               HAS_COMMA(TRIGGER_PARENTHESIS __VA_ARGS__),          \
               HAS_COMMA(__VA_ARGS__ (/**/)),                       \
               HAS_COMMA(TRIGGER_PARENTHESIS __VA_ARGS__ (/**/)))
    #define IS_EMPTY_CASE_0000(YES, NO) NO
    #define IS_EMPTY_CASE_0001(YES, NO) YES
    #define IS_EMPTY_CASE_0010(YES, NO) NO
    #define IS_EMPTY_CASE_0011(YES, NO) NO
    #define IS_EMPTY_CASE_0100(YES, NO) NO
    #define IS_EMPTY_CASE_0101(YES, NO) NO
    #define IS_EMPTY_CASE_0110(YES, NO) NO
    #define IS_EMPTY_CASE_0111(YES, NO) NO
    #define IS_EMPTY_CASE_1001(YES, NO) NO
    #define IS_EMPTY_CASE_1010(YES, NO) NO
    #define IS_EMPTY_CASE_1011(YES, NO) NO
    #define IS_EMPTY_CASE_1100(YES, NO) NO
    #define IS_EMPTY_CASE_1101(YES, NO) NO
    #define IS_EMPTY_CASE_1110(YES, NO) NO
    #define IS_EMPTY_CASE_1111(YES, NO) NO
    #define ISEMPTY_SWITCH(YES, NO, _0, _1, _2, _3) \
      PASTE5(IS_EMPTY_CASE_, _0, _1, _2, _3)(YES, NO)
    #if C_VERSION >= 2011
      #define print(...) IGNORE((PASTE2(_print_, PP_NARG(__VA_ARGS__))(__VA_ARGS__), printf("\n")));
      #define _print_0() nothing
      #define _print_1(_0) IGNORE(printf(_printf_spec(_0), _0))
      #define _print_2(_0, _1) IGNORE(printf(_printf_spec(_0), _0)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_1), _1))
      #define _print_3(_0, _1, _2) IGNORE(printf(_printf_spec(_0), _0)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_1), _1)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_2), _2))
      #define _print_4(_0, _1, _2, _3) IGNORE(printf(_printf_spec(_0), _0)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_1), _1)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_2), _2)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_3), _3))
      #define _print_5(_0, _1, _2, _3, _4) IGNORE(printf(_printf_spec(_0), _0)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_1), _1)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_2), _2)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_3), _3)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_4), _4))
      #define _print_6(_0, _1, _2, _3, _4, _5) IGNORE(printf(_printf_spec(_0), _0)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_1), _1)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_2), _2)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_3), _3)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_4), _4)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_5), _5))
      #define _print_7(_0, _1, _2, _3, _4, _5, _6) IGNORE(printf(_printf_spec(_0), _0)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_1), _1)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_2), _2)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_3), _3)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_4), _4)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_5), _5)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_6), _6))
      #define _print_8(_0, _1, _2, _3, _4, _5, _6, _7) IGNORE(printf(_printf_spec(_0), _0)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_1), _1)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_2), _2)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_3), _3)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_4), _4)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_5), _5)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_6), _6)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_7), _7))
      #define _print_9(_0, _1, _2, _3, _4, _5, _6, _7, _8) IGNORE(printf(_printf_spec(_0), _0)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_1), _1)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_2), _2)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_3), _3)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_4), _4)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_5), _5)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_6), _6)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_7), _7)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_8), _8))
      #define _print_10(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9) IGNORE(printf(_printf_spec(_0), _0)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_1), _1)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_2), _2)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_3), _3)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_4), _4)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_5), _5)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_6), _6)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_7), _7)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_8), _8)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_9), _9))
      #define _print_11(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10) IGNORE(printf(_printf_spec(_0), _0)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_1), _1)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_2), _2)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_3), _3)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_4), _4)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_5), _5)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_6), _6)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_7), _7)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_8), _8)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_9), _9)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_10), _10))
      #define _print_12(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) IGNORE(printf(_printf_spec(_0), _0)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_1), _1)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_2), _2)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_3), _3)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_4), _4)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_5), _5)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_6), _6)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_7), _7)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_8), _8)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_9), _9)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_10), _10)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_11), _11))
      #define _print_13(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12) IGNORE(printf(_printf_spec(_0), _0)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_1), _1)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_2), _2)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_3), _3)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_4), _4)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_5), _5)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_6), _6)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_7), _7)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_8), _8)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_9), _9)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_10), _10)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_11), _11)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_12), _12))
      #define _print_14(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13) IGNORE(printf(_printf_spec(_0), _0)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_1), _1)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_2), _2)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_3), _3)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_4), _4)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_5), _5)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_6), _6)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_7), _7)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_8), _8)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_9), _9)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_10), _10)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_11), _11)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_12), _12)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_13), _13))
      #define _print_15(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14) IGNORE(printf(_printf_spec(_0), _0)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_1), _1)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_2), _2)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_3), _3)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_4), _4)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_5), _5)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_6), _6)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_7), _7)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_8), _8)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_9), _9)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_10), _10)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_11), _11)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_12), _12)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_13), _13)), IGNORE(printf(" ")), IGNORE(printf(_printf_spec(_14), _14))
      #define _printf_spec(x) _Generic((x), \
        char: "%c", \
        CALLEVILCHAR: "%hhd", \
        CALLEVILUCHAR: "%hhu", \
        CALLEVILSHORT: "%hd", \
        CALLEVILUSHORT: "%hu", \
        CALLEVILINT: "%d", \
        CALLEVILUINT: "%u", \
        CALLEVILLONG: "%ld", \
        CALLEVILULONG: "%lu", \
        float: "%g", \
        double: "%g", \
        str: "%s", \
        CALLEVILVOID *: "%p", \
        volatile char: "%c", \
        volatile CALLEVILCHAR: "%hhd", \
        volatile CALLEVILUCHAR: "%hhu", \
        volatile CALLEVILSHORT: "%hd", \
        volatile CALLEVILUSHORT: "%hu", \
        volatile CALLEVILINT: "%d", \
        volatile CALLEVILUINT: "%u", \
        volatile CALLEVILLONG: "%ld", \
        volatile CALLEVILULONG: "%lu", \
        volatile float: "%g", \
        volatile double: "%g", \
        volatile str: "%s", \
        volatile CALLEVILVOID *: "%p", \
        const char: "%c", \
        const CALLEVILCHAR: "%hhd", \
        const CALLEVILUCHAR: "%hhu", \
        const CALLEVILSHORT: "%hd", \
        const CALLEVILUSHORT: "%hu", \
        const CALLEVILINT: "%d", \
        const CALLEVILUINT: "%u", \
        const CALLEVILLONG: "%ld", \
        const CALLEVILULONG: "%lu", \
        const float: "%g", \
        const double: "%g", \
        const str: "%s", \
        const CALLEVILVOID *: "%p", \
        const volatile char: "%c", \
        const volatile CALLEVILCHAR: "%hhd", \
        const volatile CALLEVILUCHAR: "%hhu", \
        const volatile CALLEVILSHORT: "%hd", \
        const volatile CALLEVILUSHORT: "%hu", \
        const volatile CALLEVILINT: "%d", \
        const volatile CALLEVILUINT: "%u", \
        const volatile CALLEVILLONG: "%ld", \
        const volatile CALLEVILULONG: "%lu", \
        const volatile float: "%g", \
        const volatile double: "%g", \
        const volatile str: "%s", \
        const volatile CALLEVILVOID *: "%p")
    #endif
  #endif
  #define DECL_AS_EXPR(decl) IGNORE(sizeof(struct { CALLEVILINT dummy; decl; }))
  #define STATIC_ASSERT(cond, msg) DECL_AS_EXPR(CALLEVILINT ERROR: (cond) ? 2 : -1)
  #if C_VERSION >= 1989
    #define CONSTEXPR_INT(decl) DECL_AS_EXPR(enum { decl } foo)
  #else
    #define CONSTEXPR_INT(decl) DECL_AS_EXPR(CALLEVILINT REQUIRES_ANSI_C_OR_LATER : -1)
  #endif
  #ifndef unreachable
    #ifdef _MSC_VER
      #define unreachable IGNORE(__assume(0));
    #endif
  #endif
  #ifndef unreachable
    #ifdef __GNUC__
      #define unreachable IGNORE(__builtin_unreachable());
    #endif
  #endif
  #ifndef unreachable
    #define unreachable IGNORE(*NULL);
  #endif
  #ifndef assume
    #ifdef _MSC_VER
      #define assume(cond) IGNORE(__assume(cond));
    #endif
  #endif
  #ifndef assume
    #ifdef __GNUC__
      #define assume(cond) IGNORE(cond ? 0 : (__builtin_unreachable(), 0));
    #endif
  #endif
  #ifndef assume
    #define assume(cond) IGNORE(cond ? 0 : (*NULL, 0));
  #endif
  #ifndef lambda
    #ifdef __GNUC__
      #if C_VERSION >= 1999
          #define lambda(ret, args, ...) ({ \
            auto declare procedure(ret, _, args) \
              __VA_ARGS__ \
            end \
            _; \
          })
      #endif
    #endif
  #endif
  #ifndef lambda
    #define lambda(ret, args, body) (DECL_AS_EXPR(CALLEVILINT REQUIRES_GNU_C : -1), ((ret (*)args) NULL))
  #endif
  #if C_VERSION >= 2011
    #define try(err) begin \
      isize err_ = (isize) (err); \
      if _Generic((err)-(err), isize: err_ < 0, ptrdiff_t: err_ == 0) then \
        return error \
      end \
    end
  #endif
  #ifndef try
    #define try(err) begin \
      isize err_ = (isize) (err); \
      if err_ <= 0 then \
        return error; \
      end \
    end
  #endif
  #define error (sizeof(RETURN_TYPE) == SIZEOF_VOID_P ? NULL_RETURNED : ERR_RETURNED)
  #define ok UNIT_RETURNED
  #define throw(err) begin \
    errno = err; \
    return error \
  end
  #ifdef __GNUC__
    #define expect(errful, errmsg) ({ \
      __auto_type errful_ = errful; \
      IGNORE(( \
        (isize) (errful_) <= 0 \
        ? IGNORE((fprintf(stderr, "%s: %s\n", errmsg, strerror(errno)), exit(EXIT_FAILURE))) \
        : nothing \
      )); \
      errful_; \
    })
  #endif
  #ifndef expect
    #define expect(errful, errmsg) (DECL_AS_EXPR(CALLEVILINT REQUIRES_GNU_C : -1), errful)
  #endif
  #define unwrap(errful) expect(errful, "failed to unwrap " #errful)
  #ifdef __GNUC__
    #define error_prone(T) __attribute__ ((warn_unused_result)) T
  #else
    #define error_prone(T) T
  #endif
  #define unsigned struct { UNSIGNED_KEYWORD_DELETED : -1 }
  #define signed struct { SIGNED_KEYWORD_DELETED : -1 }
  #define short struct { SHORT_KEYWORD_DELETED : -1 }
  #define int struct { INT_KEYWORD_DELETED : -1 }
  #define long struct { LONG_KEYWORD_DELETED : -1 }
  #define void i8
#endif
