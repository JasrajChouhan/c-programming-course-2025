# include<stdio.h>

// First we take three side of triangle from user
// we check sum of any two sides is greater then third side
// If yes then we say , valid triangle
// other wise we say, invalid triangle

int main () {

  int firstSide , secondSide , thirdSide ;
  scanf("%d %d %d" , &firstSide , &secondSide , &thirdSide); // we take the input from user

  if(firstSide <= 0 || secondSide <= 0 || thirdSide <= 0) {
    printf("Invalid sides");
  }

  else if(firstSide + secondSide > thirdSide) {
    printf("Valid Triangle");
  }

  else if(secondSide + thirdSide > firstSide) {
    printf("Valid Triangle");
  }

  else if(firstSide + thirdSide > secondSide) {
    printf("Valid Triangle");
  }

  else {
    printf("Invalid Triangle");
  }

  /// 1 1 1

  return 0;
}