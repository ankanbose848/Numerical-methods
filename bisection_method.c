#include <stdio.h>
#include <math.h>

float f(float x)
{
  float y;
  y = (x*x*x) - (9*x) + 1;
  return y;
}

void main()
{
  float r, a, b, e;
  int count = 0;
  printf("Enter accuracy: \n");
  scanf("%f", &e);

  do {
    printf("Enter the initial intervals a and b: \n");
    scanf("%f %f", &a, &b);
  } while(f(a)*f(b) > 0);

  float i1 = a;
  float i2 = b;

  do {
    r = (a+b)/2;
    if (f(a)*f(r) < 0)
      b = r;
    else
      a = r;
    count++;
  } while(fabs(a-b) > e);

  printf("The root of the equation  in the given intervals [%f %f] is %2.4f\n", i1, i2, r);
  printf("Iterations = %d\n", count);
}
