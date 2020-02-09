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

  do
  {
    printf("Enter the initial intervals a and b: \n");
    scanf("%f %f", &a, &b);
  } while(f(a)*f(b) > 0);

  do
  {
    r = b - (f(b)*(b-a))/(f(b)-f(a));
    printf("Iterations:%d\t a:%f\t b:%f\t f(a):%f\t f(b):%f\t r:%f\n", count, a, b, f(a), f(b), r);
    if (f(a)*f(r) < 0)
      b = r;
    else
      a = r;
    count++;
  } while(fabs(f(r)) > e);
}
