#include <stdio.h>
#include <math.h>

float f(float x,float y)
{
  float a;
  a = x*y;
  return a;
}

void main()
{
  float x0, y0, h, xn, y1;
  int count = 0;

  printf("Enter the initial values of x0 and y0: \n");
  scanf("%f %f", &x0, &y0);

  printf("Enter the step length h: \n");
  scanf("%f", &h);

  printf("Enter the valur of xn: \n");
  scanf("%f", &xn);

  printf("\nIteration| x0\t\t | yn+1\n\n");
  do {
    y1 = y0 + (h*f(x0,y0));
    x0 = x0 + h;
    y0 = y1;
    count++;
    printf("%d\t | %2.4f\t | %2.4f\n", count, x0, y1);
  } while(x0 < xn);
  printf("\nThe required value is: %2.4f\n\n", y1);
}
