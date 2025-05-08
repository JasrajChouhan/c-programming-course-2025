// you need to print sum and multiply but with a condition
// if userChoice is 1 => sum
// if userChoise is 2 => mulitply

// What's your choice => 1
// print the sum

// What's your choice => 2
// print the multiply

// control flow of our program
// take the userChoice from terminal
// also take two numbers from user
// and after userChoice we decide or control the program we print the specific result

# include <stdio.h>

int main () {

  int userChoise; 
  printf("Enter your user-choice");
  scanf("%d" , &userChoise);

  int firstNum , secondNum ;

  printf("Enter your two number");
  scanf("%d %d" , &firstNum , &secondNum);


  if(userChoise == 1) {
    // print sum 
    printf("sum is : %d" , (firstNum + secondNum));
  }

  if(userChoise == 2) {
    // print multiply 
    printf("multiply is : %d" , (firstNum * secondNum));
  }
  return 0;
}