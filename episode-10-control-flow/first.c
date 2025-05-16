# include <stdio.h>

int main () {

  int num; 
  scanf("%d" , &num);

/*
  if(num > 0 && num % 2== 0) {
    printf("Positive Even");
  }else if (num > 0 && num % 2 == 1) {
    printf("Positive Odd");
  }else {
    printf("Not Positive");
  }

*/

  if(num > 0) {
    if(num % 2 == 0) {
      printf("Positive Even");
    }else {
      printf("Positive odd");
    }
  }else {
    printf("Not Positive");
  }

  return 0;
}