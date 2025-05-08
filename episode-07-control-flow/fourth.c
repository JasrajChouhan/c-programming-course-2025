// WAP to check a number is even or odd

// control flow
// We take the input from user
// and check, this number is even or odd
// print the result

// How to we can check a number is even or odd
// 5 / 2 => remainder ==> 1
// 12 / 2 => remainder ==> 0

# include<stdio.h>

int main () {

  int num; 
  printf("Enter your num");
  scanf("%d" , &num);

  // remainder in c => % 
  if(num % 2 == 0 ) {
    printf("Even number :: %d" , num);
  }
  else {
    printf("Odd number :: %d" , num);
  }

  // if(num % 2 == 1 ) {
  //   printf("Odd number :: %d" , num);
  // }
  return 0;
}

