## Control Flow 2 Assignment

### Task 1: Absolute Value of an Integer

```c
#include <stdio.h>

int main() {
  int num;

  printf("Enter an integer: ");
  scanf("%d", &num);

  if (num < 0) {
      num = -num;
  }

  printf("Absolute value is: %d\n", num);

  return 0;
}
```

---

### Task 2: Point on X-axis or Y-axis

```c
#include <stdio.h>

int main() {
  int x, y;

  printf("Enter x-coordinate: ");
  scanf("%d", &x);

  printf("Enter y-coordinate: ");
  scanf("%d", &y);

  if (x == 0 && y == 0) {
    printf("Point is at the origin.\n");
  }
  else if (x == 0) {
    printf("Point lies on Y-axis.\n");
  }
  else if (y == 0) {
    printf("Point lies on X-axis.\n");
  }
  else {
    printf("Point does not lie on any axis.\n");
  }

  return 0;
}
```

---

## Task 3: Valid Triangle or Not

```c
#include <stdio.h>

int main() {
  int angle1, angle2, angle3;

  printf("Enter first angle: ");
  scanf("%d", &angle1);

  printf("Enter second angle: ");
  scanf("%d", &angle2);

  printf("Enter third angle: ");
  scanf("%d", &angle3);

  if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180)) {
    printf("Valid Triangle\n");
  }
  else {
    printf("Invalid Triangle\n");
  }

  return 0;
}
```

---

## Task 4: Palindrome Number Check

```c
#include <stdio.h>

int main() {
  int num, original, reversed = 0, digit;

  printf("Enter a number: ");
  scanf("%d", &num);

  original = num;

  while (num > 0) {
    digit = num % 10;
    reversed = reversed * 10 + digit;
    num = num / 10;
  }

  if (original == reversed) {
    printf("Palindrome Number\n");
  }
  else {
    printf("Not a Palindrome\n");
  }

  return 0;
}
```

---

## Task 5: Closest Multiple of 10

```c
#include <stdio.h>

int main() {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if ((n + 0) % 10 == 0) {
    printf("The digit to add is: 0\n");
  }
  else if ((n + 1) % 10 == 0) {
    printf("The digit to add is: 1\n");
  }
  else if ((n + 2) % 10 == 0) {
    printf("The digit to add is: 2\n");
  }
  else if ((n + 3) % 10 == 0) {
    printf("The digit to add is: 3\n");
  }
  else if ((n + 4) % 10 == 0) {
    printf("The digit to add is: 4\n");
  }
  else if ((n + 5) % 10 == 0) {
    printf("The digit to add is: 5\n");
  }
  else if ((n + 6) % 10 == 0) {
    printf("The digit to add is: 6\n");
  }
  else if ((n + 7) % 10 == 0) {
    printf("The digit to add is: 7\n");
  }
  else if ((n + 8) % 10 == 0) {
    printf("The digit to add is: 8\n");
  }
  else if ((n + 9) % 10 == 0) {
    printf("The digit to add is: 9\n");
  }

  return 0;
}

```
