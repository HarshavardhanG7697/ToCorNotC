#include <stdio.h>
#define LOWER 0
#define UPPER 100
#define STEP 10

/*Print Celsius Fahrenheit table */

main()
{
  int celsius, fahr;

  for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP) {
    fahr = ((celsius * (9 / 5)) + 32);
    printf("%3d %6d\n", celsius, fahr);
  }
}
