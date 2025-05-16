# include <stdio.h>


int main () {

  int units ;
  scanf("%d" , &units);

  int bill;

  if(units <= 100) {
    bill = 1 * 100;
	  printf("%d" , bill);
  }else {
    if(units <= 200) {
      bill = 100 * 1 + (units - 100) * 2;
      printf("%d" , bill);
    }else {
      bill = 100 * 1 + 100*2 + (units - 200) * 3;
      printf("%d" , bill);
      
    }
  }

  return 0;
}

// 270 
// 100 * 1 + 100 * 2 + 70 * 3
// 310 + 210
// 510 