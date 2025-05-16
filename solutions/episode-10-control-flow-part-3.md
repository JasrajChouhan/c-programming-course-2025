# Solutions of Assignment Control Flow part 3


### Task 1
```c
#include <stdio.h>

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  if (num > 0) {
    if (num % 2 == 0)
      printf("Positive Even\n");
    else
      printf("Positive Odd\n");
  } else {
      printf("Not Positive\n");
  }

  return 0;
}
```

### Task 2

```
Input age and if the person is a student

  If age < 18

    If student is "yes", print: "School Student"

    Else print: "Minor"

  Else print: "Adult"
```

```c
#include <stdio.h>
#include <string.h>

int main() {
  int age;
  char student[4];

  printf("Enter age: ");
  scanf("%d", &age);

  printf("Are you a student (yes/no): ");
  scanf("%s", student);

  if (age < 18) {
    if (strcmp(student, "yes") == 0)
      printf("School Student\n");
    else
      printf("Minor\n");
  } else {
    printf("Adult\n");
  }

  return 0;
}

```

### Task 3

#### Try to build grading system using Nested If Else

Grading Rule

1. Marks >= 90 → "Grade A"

2. Marks >= 75 → "Grade B"

3. Marks >= 50 → "Grade C"

4. Else → "Grade D"

```c
#include <stdio.h>

int main() {
  int marks;
  printf("Enter your marks: ");
  scanf("%d", &marks);

  if (marks >= 50) {
    if (marks >= 90)
      printf("Grade A\n");
    else {
      if (marks >= 75)
        printf("Grade B\n");
      else
        printf("Grade C\n");
    }
  } else {
    printf("Grade D\n");
  }

  return 0;
}

```


### Task 4

#### Try to find out if a triangle is valid or not using Nested If Else

`Triangle Rule` :
A triangle is valid if the sum of any two sides is greater than the third.


```c
#include <stdio.h>

int main() {
  int a, b, c;
  printf("Enter three sides of triangle: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a + b > c) {
    if (a + c > b) {
      if (b + c > a)
        printf("Triangle is Valid\n");
      else
        printf("Triangle is Not Valid\n");
    } else {
      printf("Triangle is Not Valid\n");
    }
  } else {
    printf("Triangle is Not Valid\n");
  }

  return 0;
}
```


