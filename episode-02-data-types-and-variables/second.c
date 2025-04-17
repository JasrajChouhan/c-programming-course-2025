# include<stdio.h>
# include <stdbool.h>

int main () {

  // firstNum (float)
  // secondNum (float)

  // result = firstNum * secondNum 

  float firstNum;
  float secnodNum ;

  char player_first_char = 'R';

  // 1.1 * 1.1 => 1.21 (float)

  float result;

  firstNum = 1.1;
  secnodNum = 1.1;

  result = firstNum * secnodNum;

  printf("%.10f " , result);

  // character

  char ch ;
  ch = 'a';

  printf("%c " , ch);

  // takes 1 bytes in memory


  // 1 -> true
  // 0 -> false

  // boolean 
  bool isPending;
  isPending = false;

  printf(" %d\n" , isPending);

  // 0 for the false 

  int num; // declare
  num = 3; // assigen

  int age = 23; 

  printf("%d\n" , age);

  float pi = 3.14;

  printf("%f" , pi); // .2f or .4f or .nf

  return 0;
}