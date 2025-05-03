// Airthmatic instructions

// BODMAS 

// BRACKET OF DIVISION MULTIPLEY AND ADDISSION SUB (-)

// 3 + 4* 5 + 9 - 7
// 3 + 20 + 9 - 7
// 23 + 9 - 7
// 25 answer

// Operator
/*
 +
 -
 *
 /
 %
 >> 
 << 
 |
 &
*/


// ()
// !
// * and /
// + and -

# include<stdio.h>

int main () {

  int cal = 3 + 4* 5 + 9 - 7;

  // 3 + 20 + 9 - 7
  // 25
  printf("%d " , cal);

  printf("%f " , 3/4);
  // 3/4 => 0.75 => 0

  int ans = 3/4*5 - 9*5 + 4* 5/4 + 9 - 7;
  // 0*5 - 9*5 + 4* 5/4 + 9 - 7
  // 0 - 9*5 + 4* 5/4 + 9 - 7
  // 0 - 45 + 4* 5/4 + 9 - 7
  // -45 + 20/4 + 2
  // -45 + 5 + 2
  // -38

  printf("%d " , ans);
  return 0;
}



