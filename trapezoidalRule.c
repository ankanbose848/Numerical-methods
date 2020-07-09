#include <stdio.h>
#include <math.h>
float f(float x)
{
    return (1 / (1 + pow(x, 2)));
}
int main()
{
    int i, n;
    float a, b, h, s = 0, t;
    printf("\n Enter the lower limit:");
    scanf("%f", &a);
    printf("\n Enter the upper limit:");
    scanf("%f", &b);
    printf("\n Enter the number of sub intervals:");
    scanf("%d", &n);
    h = (b - a) / n;
    for (i = 1; i < n - 1; i++)
        s = s + f(a + i * h);
    t = (h / 2) * (f(a) + 2 * s + f(b));
    printf("\n The result is %6.4f\n", t);
}
