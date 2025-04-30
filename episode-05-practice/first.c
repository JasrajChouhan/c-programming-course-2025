/*
WAP to calculate total or gross salary of an emplyoe, which have 30% allowance of his basic salary and house rent is only 10% of basic salary.
(take basic salary as a user input)
*/
// total salary ?

// total salary = basic_salary + allowance + rent

// first we deffine the data types
// take the input from user (basic_salary)
// next, we calculate the total_salary
// print the total_salary

# include<stdio.h>

int main () {

  float basicSalary , allowance , rent;
  printf("Enter your basic salary : ");
  scanf("%f" , &basicSalary);

  allowance = 0.30 * basicSalary;
  rent = 0.10 * basicSalary;

  float totalSalary = basicSalary + allowance + rent;
  printf("\nYour total salary is :: %f" , totalSalary);
  printf("\nallownance and rent is :: %f %f " , allowance , rent); 

  return 0;
}





