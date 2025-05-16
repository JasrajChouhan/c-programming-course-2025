/*
If mood is "Happy" and weather is "Sunny" → suggest "Pop Hits"
If mood is "Happy" but weather is not "Sunny" → suggest "Top Charts"
If mood is "Sad" and weather is "Rainy" → suggest "Sad Acoustic"
If mood is "Sad" but weather is not "Rainy" → suggest "Top Charts"
If mood is "Relaxed" → suggest "Chill Vibes"
Otherwise → suggest "Top Charts"
*/

# include <stdio.h>
# include <string.h>

int main () {

  char mood[10];
  scanf("%s",mood);

  char weather[10];
  scanf("%s" , weather);

  printf("%s\n%s\n" , mood , weather);

  if(strcmp(mood , "Happy") == 0) {
    if(strcmp(weather , "Sunny") == 0) {
      printf("Pop Hits");
    }else {
      printf("Top Charts");
    }
  }else if (strcmp(mood , "Sad") == 0){
    if(strcmp(weather , "Rainy") == 0) {
      printf("Sad Acoustic");
    }else {
      printf("Top Charts");
    }
  }else if (strcmp(mood , "Relaxed") == 0) {
    printf("Chill Vibes");
  }else {
    printf("Top Charts");
  }
  
  return 0;
}