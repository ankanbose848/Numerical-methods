#include <stdio.h>
#include <math.h>

void main()
{
  float x[10], y[10];
  float xp,n,p,q,sum=0;

  printf("Enter the number of values (n): \n");
  scanf("%f", &n);

  for(int i=0; i<n; i++)
  {
    printf("Enter the values of x and y: \n");
    scanf("%f %f", &x[i], &y[i]);
  }

  printf("Enter the value of x at which y is to be calculated: \n");
  scanf("%f", &xp);

  for(int i=0; i<n; i++)
  {
    p=1;
    q=1;
    for(int j=0; j<n; j++)
    {
      if(i != j)
      {
        p = p*(xp-x[j]);
        q = q*(x[i]-x[j]);
      }
    }
    sum = sum + ((p/q)*y[i]);
  }

  printf("The value of y at x = %f is %f\n", xp, sum);
}
