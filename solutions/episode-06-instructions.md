## Solutions

### Solution 1: Type Declaration
```c
#include <stdio.h>
#include <stdbool.h>

int main() {
  int age = 20;
  float height = 5.9;
  bool isStudent = true;
  char grade = 'A';
  return 0;
}
```
---

### Solution 2: Arithmetic Calculation

```c
#include <stdio.h>

int main() {
  int result = 5 + 10 \* 2 - 8 / 4;
  printf("Result: %d\n", result); 
  // Expected: 5 + 20 - 2 = 23
  return 0;
}
```

---

### Solution 3: Mixed Data Types

```c
#include <stdio.h>

int main() {
  int a = 3;
  float b = 2.5;
  double result = a \* b;

  printf("Result: %lf\\n", result); 
  // Expected: 7.5
  return 0;
}
```

