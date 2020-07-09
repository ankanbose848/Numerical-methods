/* Integration of f(x) = x^2 */

#include <stdio.h>
#include <math.h>
float f(float x)
{
    return (x*x);
}
int main()
{
    int i, n;
    float a, b, h, sum = 0, t;
    printf("\n Enter the lower limit:");
    scanf("%f", &a);
    printf("\n Enter the upper limit:");
    scanf("%f", &b);
    printf("\n Enter the number of sub intervals:");
    scanf("%d", &n);
    h = (b - a) / n;
    do {
	sum = sum + (h/2)*(f(a) + f(a+h));
	a = a + h;
    } while(a<b);
    printf("\n The result is %6.4f\n", sum);
}    
