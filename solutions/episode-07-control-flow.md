# 🎯 If-Else Assignment with Solutions – C Programming

Learn and practice `if`, `else if`, and `else` statements in C.

---

## 🟢 Easy

### 1. Positive, Negative, or Zero  
🧠 **Task**: Write a program that takes a number and prints whether it is positive, negative, or zero.

```c
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num > 0)
        printf("Positive");
    else if (num < 0)
        printf("Negative");
    else
        printf("Zero");
    return 0;
}
```

---

### 2. Odd or Even  
🧠 **Task**: Input an integer and print "Even" or "Odd".

```c
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}
```

---

## 🟡 Medium

### 3. Maximum of Two Numbers  
🧠 **Task**: Input two integers and print the larger one (or state if they are equal).

```c
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d is greater", a);
    else if (b > a)
        printf("%d is greater", b);
    else
        printf("Both are equal");
    return 0;
}
```

---

### 4. Vowel or Consonant  
🧠 **Task**: Take a character and determine if it’s a vowel or consonant.

```c
#include <stdio.h>
int main() {
    char ch;
    scanf(" %c", &ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("Vowel");
    else
        printf("Consonant");
    return 0;
}
```

---

### 5. Divisible by Both  
🧠 **Task**: Check if a number is divisible by both 3 and 5.

```c
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n % 3 == 0 && n % 5 == 0)
        printf("Divisible by both 3 and 5");
    else
        printf("Not divisible by both");
    return 0;
}
```

---

## 🔴 Hard

### 6. Grade Evaluator  
🧠 **Task**: Input marks (0–100) and print grade:
- A: 90+
- B: 75–89
- C: 50–74
- D: 35–49
- F: <35

```c
#include <stdio.h>
int main() {
    int marks;
    scanf("%d", &marks);
    if (marks >= 90)
        printf("Grade A");
    else if (marks >= 75)
        printf("Grade B");
    else if (marks >= 50)
        printf("Grade C");
    else if (marks >= 35)
        printf("Grade D");
    else
        printf("Grade F");
    return 0;
}
```

---

### 7. Leap Year Checker  
🧠 **Task**: Input a year and check if it is a leap year.

```c
#include <stdio.h>
int main() {
    int year;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");
    return 0;
}
```

---

### 8. Triangle Type  
🧠 **Task**: Input three sides of a triangle. Print:
- Equilateral
- Isosceles
- Scalene

```c
#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("Equilateral");
    else if (a == b || b == c || a == c)
        printf("Isosceles");
    else
        printf("Scalene");
    return 0;
}
```

---
