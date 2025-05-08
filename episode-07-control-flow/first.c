// user give a number and you check is this number positive or negitive
// user -> 4 (positive)
// user -> -5 (negitive)

/*

if (conditon) {
 // print "a"
}

*/ 

# include <stdio.h>

int main () {

  int n;
  printf("Enter a number:");
  scanf("%d" , &n); // take input from user

  printf("%d" , n);

  // 3 (You check number is greater then 0 or not) 
  // if yes -> positive
  // if no -> negitive

  // if - else sytex
  if(n > 0) {  // 14 > 0  => true  (-34 > 0 false)
    printf("\nnumber %d is positive" , n);
  }

  if (n < 0) {  //  -34 < 0 true
    printf("\nnumber %d is negitive" , n);
  }
  return 0;
}

