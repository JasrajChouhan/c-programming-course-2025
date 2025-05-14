# include<stdio.h>

int main () {

  // int num = 10;
  // if(num > 20) {
  //   printf("You're awesome");
  // }


  // int num = -8;
  // if(num > 2) {
  //   printf("You're awesome");
  // }else {
  //   printf("You're bad person");
  // }

  // take the input from user 
  // we process the number or check this number is positive or negative
  // print the statement

  int num; 
  scanf("%d" , &num);

  // positive number conditon
  if(num > 0) {
    printf("%d is positive number.", num);
  }else{
    printf("%d is negative number.", num);
  }


  return 0;
}