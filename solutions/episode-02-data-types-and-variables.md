# Solutions – Lecture 2: Data Types and Variables in C

Below are the sample solutions to the assignment questions from Lecture 2. These can be compiled and run to verify output.

---

## Q1. Declare and initialize the following variables and print their values:

```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 21;
    float height = 1.75;
    char initial = 'R';
    bool isStudent = true;
    char name[] = "Rakesh";

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Initial: %c\n", initial);
    printf("Is Student: %d\n", isStudent);
    
    // true = 1
    printf("Name: %s\n", name);

    return 0;
}
```

## Q2. Declare a double and print with 2 decimal places:
```c
#include <stdio.h>

int main() {
    double value = 123.456789;
    printf("Double value: %.2lf\n", value);
    return 0;
}

```

## Q3. Fix the errors in the following code:
```c

#include <stdio.h>
#include <stdbool.h>

int main() {
    char name[] = "Ravi";
    bool isOnline = true;
    float marks = 89.5;
    printf("Name is %s\n", name);
    return 0;
}
```
