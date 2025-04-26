// average of 3 numbers

// (2+5 + 5) / 3 => 4


# include<stdio.h>

int main () {

  int firstNum , secondNum , thirdNum ;

  printf("Enter any three number");
  scanf("%d %d %d" , &firstNum , &secondNum , &thirdNum);

  float average = (firstNum + secondNum + thirdNum) / 3;

  printf("ans => %.2f " , average);

  return 0;
}