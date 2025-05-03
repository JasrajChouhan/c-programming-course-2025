# include <stdio.h>
# include <stdbool.h>
int main () {

  int a = 1;
  float b = 1.1;
  double c = 3;
  bool d = true;
  float score = a + b * c +  d ;

  // 1 + 1.1*3 + true
  // 4.3 + true

  // result is 5 

  // true -> 1
  // false -> 0

  // 4.3 + 1
  // 5.3
  // (int ) 5.3 => 5

  printf("%f " , score);
  return 0;
}