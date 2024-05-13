/*                                      42 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────────────────────────────────────────────╮ ╭───────────────────────────────────────────────────────────────────╮
  │  0   1   2   3   4   5             6     7   8   9  10  11  12 │ │ LT5 LT4 LT3 LT2 LT1 LT0            LFO    RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 13  14  15  16  17  18        19  20    21  22  23  24  25  26 │ │ LM5 LM4 LM3 LM2 LM1 LM0        LF1 LF2    RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 27  28  29  30  31  32            33    34  35  36  37  38  39 │ │ LB5 LB4 LB3 LB2 LB1 LB0            LF3    RB0 RB1 RB2 RB3 RB4 RB5 │
  ╰───╮ 40      41  42  43    44  45  46    47  48  49      50 ╭───╯ ╰───╮ LEC     LH2 LH1 LH0    LF4 LF5 LF6    RH0 RH1 RH2     REC ╭───╯
      ╰────────────────────────────────────────────────────────╯         ╰───────────────────────────────────────────────────────────╯     */

#pragma once

#define LT0  5  // left-top row
#define LT1  4
#define LT2  3
#define LT3  2
#define LT4  1
#define LT5  0

#define LF0  6  // middle columns/rows 
#define LF1 19  // used one section, as my understanding is that the defines are just aliases
#define LF2 20  // positional data is still determined by the numbers, but that may be incorrect
#define LF3 33  
#define LF4 44  
#define LF5 45 
#define LF6 46 

#define RT0  7  // right-top row
#define RT1  8
#define RT2  9
#define RT3 10
#define RT4 11
#define RT5 12

#define LM0 18  // left-middle row
#define LM1 17
#define LM2 16
#define LM3 15
#define LM4 14
#define LM5 13

#define RM0 21  // right-middle row
#define RM1 22
#define RM2 23
#define RM3 24
#define RM4 25
#define RM5 26

#define LB0 32  // left-bottom row
#define LB1 31
#define LB2 30
#define LB3 29
#define LB4 28
#define LB5 27

#define RB0 34  // right-bottom row
#define RB1 35
#define RB2 36
#define RB3 37
#define RB4 38
#define RB5 39

#define LH0 43  // left thumb keys
#define LH1 42
#define LH2 41

#define LEC 42  // left encoder key

#define RH0 47  // right thumb keys
#define RH1 48
#define RH2 49

#define REC 50  // right encoder key