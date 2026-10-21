# Predict the Output

A simple C exercise to understand integer division, type casting, and increment behavior.

## Code

```c
#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float c = a / b;
    float d = (float)a / b;
    int x = 5;
    int y = x++ + ++x;

    printf("c=%f d=%f x=%d y=%d", c, d, x, y);
    return 0;
}
```

## Output

```text
c=2.000000 d=2.500000 x=7 y=12
```

## Explanation

- `a / b` uses integer division, so `5 / 2 = 2`
- `(float)a / b` converts `a` to float, so `5.0 / 2 = 2.5`
- `x++` uses the old value first, then increments `x`
- `++x` increments first, then uses the new value

Final result:

- `c = 2.0`
- `d = 2.5`
- `x = 7`
- `y = 12`

This is a beginner-friendly example of how C handles arithmetic and increment operators.
