# include <stdio.h>
# include <stdbool.h>

int main () {

  int a = 3;
  float b = 4.5;
  double c = 3;
  bool d  = true ;
  int score = a * b + c /d ;

  // 3 * 4.5 + 3 * 1
  // 13.5 + 3
  // 16.5

  // 16

  printf("%d " , score);

  // 3 * true 
  // true -> 1
  // false -> 0

  return 0;
}