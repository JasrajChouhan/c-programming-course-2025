/*
WAP to calculate distance in meter, cm, inch and feet if user give input in km.

----
1 km = 1000m
1 m = 100cm
1 inch = 2.54cm
1 feet/foot = 12inch
*/

// --- control flow
// First we take the input from user (distance in km)
// meter , cm , inch and feet (change the distance km ->  r unit)

// print the distances

# include <stdio.h>

int main () {

  int distance , meters , inches , feets , centimeters;
  printf("Give distance in km ");
  scanf("%d" , &distance);

  meters = distance * 1000;  // distance is 2km => 2000
  centimeters = meters * 100; // 1m have 100 cm
  inches = centimeters/2.54;
  feets = inches / 12;

  printf("meters => %d\n" , meters);

  printf("centimeters => %d\n" , centimeters);
  printf("inches => %d\n" , inches);
  printf("feets => %d\n" , feets);



  return 0;
}





