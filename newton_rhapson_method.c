#include <stdio.h>
#include <math.h>

float f(float x)
{
  float y;
  y = (x*x*x) - (9*x) + 1;
  return y;
}

float df(float x)
{
  float y;
  y = (3*x*x) - 9;
  return y;
}

void main()
{
  float e, x0, x1, f0, f1, df0;
  int count = 0;
  printf("Enter accuracy: \n");
  scanf("%f", &e);

  printf("Enter the value of x0: \n");
  scanf("%f", &x0);

  do
  {
    f0 = f(x0);
    df0 = df(x0);
    x1 = x0 - (f0/df0);
    f1 = f(x1);
    x0 = x1;
    count++;
    printf("Iteration: %d\t root: %2.4f\t f(x1): %2.4f\n", count, x1, f1);
  }while(fabs(f1) > e);
}
