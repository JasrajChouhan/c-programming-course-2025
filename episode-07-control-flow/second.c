// buid a grade system of a school
// if student get more then 50 marks, then your grade is 'C'
// if student get more then 70 marks, then your grade is 'B'
// if student get more then 85 marks, then your grade is 'A'
// if student get more then 95 marks, then your grade is 'A+'

// user give your marks and you decide the what is grade of student

// marks is 65 => 50 < 65 < 70

# include <stdio.h>

int main () {

  int marks;
  printf("Enter a marks:");
  scanf("%d" , &marks); // take input from user

  printf("%d\n" , marks);
  // marks = 80
  if(marks >= 50 && marks < 70 ) { // 65  
    printf("Your grade is C");
  }

  else if(marks >= 70 && marks < 85 ) { // 80
    printf("Your grade is B");
  }

  else if(marks >= 85 && marks < 95 ) { // 1 && 0 => 0
    printf("Your grade is A");
  }

  else {
    printf("Your grade is A+");
  }

  return 0;

}

