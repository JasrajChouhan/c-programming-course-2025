# include<stdio.h>

// user gives you two number and you need to perform these opeation
// + , - * and /

// First we take only first number from user
// Choose your oeperation choice
// 1 -> + 
// 2 -> -
// 3 -> *
// 4 -> /
// after then we take second number from user
// Then we perform the specific operation 
// And gives the output on terminal
// end the algoritom

int main () {

  int firstNum;
  printf("Please give your first Number");
  scanf("%d" , &firstNum);

  int userChoice;
  printf("Please give your choice");
  scanf("%d" , &userChoice);

  int secondNum;
  printf("Please give your second Number");
  scanf("%d" , &secondNum);

  // We start the perform an operation on both numbers

  if(userChoice == 1) {
    printf("sum =>> %d" , firstNum + secondNum);
  }else if (userChoice == 2) {
    printf("subtaction =>> %d" , firstNum - secondNum);
  }else if (userChoice == 3) {
    printf("multiply =>> %d" , firstNum * secondNum);
  }else {
    if(secondNum == 0) {
      printf("Error :: invalid number");
    }
    else {
      printf("divison =>> %d" , firstNum / secondNum);
    }
  }

  // 5 / 0 => don't exist

  return 0;

}