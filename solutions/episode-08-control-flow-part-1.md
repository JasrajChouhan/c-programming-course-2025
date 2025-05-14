# If-Else Assignment in C

## Easy

### 1. Positive, Negative, or Zero

```c
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("Positive\n");
    else if (num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");

    return 0;
}
````

### 2. Odd or Even

```c
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
```

## Medium

### 3. Maximum of Two Numbers

```c
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Maximum is: %d\n", a);
    else
        printf("Maximum is: %d\n", b);

    return 0;
}
```

### 4. Vowel or Consonant

```c
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            printf("Vowel\n");
        else
            printf("Consonant\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
```

### 5. Divisible by Both

```c
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
        printf("Divisible by both 3 and 5\n");
    else
        printf("Not divisible by both 3 and 5\n");

    return 0;
}
```

## Hard

### 6. Grade Evaluator

```c
#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("Grade A\n");
    else if (marks >= 75)
        printf("Grade B\n");
    else if (marks >= 50)
        printf("Grade C\n");
    else if (marks >= 35)
        printf("Grade D\n");
    else
        printf("Grade F\n");

    return 0;
}
```

### 7. Leap Year Checker

```c
#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");

    return 0;
}
```

### 8. Triangle Type

```c
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        printf("Equilateral Triangle\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");

    return 0;
}
```

### Task 1: Minimum Notes for Rs. N

```c
#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter amount: ");
    scanf("%d", &n);

    count += n / 100;
    n %= 100;

    count += n / 10;
    n %= 10;

    count += n / 5;
    n %= 5;

    count += n / 2;
    n %= 2;

    count += n; // remaining Re. 1 notes

    printf("Minimum number of notes: %d\n", count);

    return 0;
}
```

### Task 2: Output of the C Program

**Program 1:**

```c
#include<stdio.h>
int main() {
    int i = 4 , j = 5 , k;
    float t;
    k = i/j*j;          // i/j = 0 (integer division), so k = 0
    t = k*i/j;          // t = 0
    i = i+k*t/j;        // i = 4
    t = i*(i+j)/t;      // Division by zero - Runtime Error
    printf("%d %d %d %f" , i , j , k , t);
    return 0;
}
```

**Output:** This will cause **division by zero error** during runtime.

**Program 2:**

```c
#include<stdio.h>
int main() {
    printf("nn \n\n nn\n");
    printf("nn /n/n nn/n");
    return 0;
}
```

**Output:**

```text
nn 

nn
nn /n/n nn/n
```

