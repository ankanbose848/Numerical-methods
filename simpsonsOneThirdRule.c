/* Program Simpson’s 1/3 rule
   Program to find the value of integration of a function
   f(x) using Simpson’s 1/3 rule. Here we assume that 
   f(x) = x^2. */
 
#include <stdio.h>
#include <stdlib.h>

float f(float x)
{
 return(x*x);
}



void main()
{
 float f(float);
 float a,b,h,sum;
 int i,n;
 printf("Enter the values of a,b: ");
 scanf("%f%f",&a,&b);
 printf("Enter the value of n: ");
 scanf("%d",&n);
 if(n%2!=0)
 {
 printf("\nNumber of subdivision should be even\n");
 exit(0);
 }
 h=(b-a)/n;
 sum = f(a)-f(a+n*h);
 for(i=1;i<n;i++)
 sum += 4*f(a+i*h)+2*f(a+(i+1)*h);
 sum *= h/3;
 printf("\nValue of the integration is %f\n",sum);
}
 
/*float f(float x)
{
 return(x*x);
}*/
