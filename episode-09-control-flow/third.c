# include<stdio.h>

int main () {
  int firstDigit , secondDigit , thirdDigit , fourthDigit;
  int n; 
  scanf("%d" , &n);  //1221
  int originalNum = n;

  fourthDigit = n % 10; // 1
  n = n / 10; //122

  thirdDigit = n % 10; // 2
  n = n / 10; // 12

  secondDigit = n % 10; // 2
  n = n / 10; // 2

  firstDigit = n % 10; // 2
  n = n / 10; // 0



  if(firstDigit + secondDigit == thirdDigit + fourthDigit) {
    printf("%d is a lucky number" , originalNum);
  }else {
    printf("%d is not a lucky number" , originalNum);
  }

  return 0;
}