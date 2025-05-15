// ram => 01/ 01 / 2002
// shyam => 02/01/2002
// mohan => 03/01/2002

// First we take the user input from keyboard
// We process the ages and find out the oldest age
  // a <= b && a <= c ==> a
  // b <= c && b <= a  ==> b
  // ===> c
 

# include<stdio.h>

int main () {

  int ageOfRam , ageOfShyam , ageOfMohan;
  printf("Enter the ages");
  scanf("%d %d %d" , &ageOfRam , &ageOfShyam , &ageOfMohan);

  if(ageOfRam <= ageOfMohan && ageOfRam <= ageOfShyam) {
    printf("Ram is older guy");
  }else if (ageOfShyam <= ageOfMohan && ageOfShyam <= ageOfRam){
    printf("Shyam is older guy");
  }else {
    printf("Mohan is older guy");
  }

  return 0;

}


