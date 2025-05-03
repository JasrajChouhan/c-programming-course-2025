// =========== Airthmatic operations =======

// BODMAS  ( + , - , * and /)
// first use the brackets
// then going for the divison multiply and additon and sub.

// 4 + 6*5 + 34
// 4 + 30 + 34
// 68

// opeatores in c 
// + , - , * , / , % , ^ , & , | , ! 

# include<stdio.h>

int main () {

  int ans = 3 + 5/5  + 5 - 4 ;
  // 3 + 1 + 5 - 4
  // 5
  printf("%d \n" , ans);

  printf("%d " , 1 + 2); //3
  printf("%d " , 1 * 2); //2
  printf("%d " , 1 - 2); // -1
  printf("%d " , 1 / 2); // 0
  printf("%d " , 1 % 2); // 1
  printf("%d " , 2 / 1); // 2
 // 3 2 -1 0 0 2
  // 1/2 => 0.5

  // 14/3 => 2
  printf("%d " , 14 % 3); 

  int cal = 3 + 4 * 5 / 3 - 8 + 9 * 5/5 - 7 % 3;
  // 3 + 20/3 - 8 + 9 * 5/5 - 7 % 3
  // 3 + 6 - 8 + 45/5 - 1
  // 1 + 9 -1
  // 9
  printf("\n%d " , cal);

  
  

  return 0;
}

