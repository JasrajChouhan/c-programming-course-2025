
# Epi-04 Assignment – Solution

## Question 1: User Information

```c
#include <stdio.h>

int main() {
    int age;
    char name[50];
    char isVIP[10];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your name: ");
    scanf("%s", name);  // Use fgets for full name with spaces

    printf("Are you a VIP? (yes/no): ");
    scanf("%s", isVIP);

    printf("%s is %d years old and he holds the %s status\n", name, age, isVIP);

    return 0;
}
```

---

## Question 2: Arithmetic Operations

```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first integer (a): ");
    scanf("%d", &a);

    printf("Enter second integer (b): ");
    scanf("%d", &b);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;

    printf("sum : %d\n", sum);
    printf("difference : %d\n", difference);
    printf("product : %d\n", product);
    printf("quotient : %d\n", quotient);

    return 0;
}
```

---

## Question 3: Rectangle Area and Perimeter

```c
#include <stdio.h>

int main() {
    float length, width;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    float area = length * width;
    float perimeter = 2 * (length + width);

    printf("length : %.2f\n", length);
    printf("width : %.2f\n", width);
    printf("area : %.2f\n", area);
    printf("perimeter : %.2f\n", perimeter);

    return 0;
}
```