/*
episode-11-control-flow
**Rules**:
- If temperature ≥ 30
    - If event is `"Beach"` → suggest `"Shorts and Tank Top"`
    - Else → suggest `"Light Cotton Shirt"`
- If 15 ≤ temperature < 30
    - If event is `"Party"` → suggest `"Shirt and Jeans"`
    - Else → suggest `"Comfortable Clothes"`
- If temperature < 15
    - If event is `"Formal"` → suggest `"Suit and Jacket"`
    - Else → suggest `"Sweater and Jeans"`
- Otherwise → suggest `"Standard Casual Wear"`
**Goal**: Use nested `if-else` to pick correct outfit.

*/

# include <stdio.h>
# include <string.h>

int main ( ) {
  int temp; 
  scanf("%d" , &temp);

  char event[10];
  scanf("%s" , event);

  if(temp >= 30 ) {
    if(strcmp(event , "Beach") == 0){
      printf("Shorts and Tank Top");
    }else {
      printf("Light Cotton Shirt");
    }
  }else if (temp >= 15 && temp < 30) {
    if(strcmp(event , "Party") == 0){
      printf("Shirt and Jeans");
    }else {
      printf("Comfortable Clothes");
    }
  }else if (temp < 15) {
    if(strcmp(event , "Formal") == 0){
      printf("Suit and Jacket");
    }else {
      printf("Sweater and Jeans");
    }
  }else  {
    printf("tandard Casual Wear");
  }

  return 0;
}