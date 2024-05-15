#include <stdio.h>

unsigned int sum_of_squares(unsigned int number)
{
  unsigned int i, sum;
  sum = 0;

  for (i = 1; i <= number; ++i)
  {
    sum += i * i;
  }

  return sum;
}

unsigned int square_of_sum(unsigned int number)
{

  unsigned int i, sum, square;
  sum = 0;

  for (i = 1; i <= number; ++i)
  {
    sum += i;
  }
  square = sum * sum;

  return square;
}

unsigned int difference_of_squares(unsigned int number)
{
  return square_of_sum(number) - sum_of_squares(number);
}

int main(void)
{

  printf("sum of squares: %d\n", sum_of_squares(10));

  printf("square of sums: %d\n", square_of_sum(10));

  printf("difference of squares: %d\n", square_of_sum(10) - sum_of_squares(10));
}
