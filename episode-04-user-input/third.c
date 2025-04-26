// calculate simple interst

// define the p , n ,r 
// "Give p,n and r for calculteing simple interst"
// take the input from user
// store and calucalte the si.
// print

# include <stdio.h>

int main () {

  int p , n ,r;

  printf("Give p,n and r for calculteing simple interst");
  scanf("%d %d %d" , &p , &n , &r);  // user input from keyboard


  float si = (p * n * r) / 1000; // calculate

  printf("%f " , si);

  return 0;
}