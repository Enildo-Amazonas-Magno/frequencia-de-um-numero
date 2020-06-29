#include <stdio.h>
int main()
{
    double a, b, c, k, i;
    scanf("%lf %lf\n", &a, &b);
    i=0;
    k=0;
    while(i!=a){
        i=i+1;
        scanf("%lf\n", &c);
        if(c==b)k=k+1;
    }
    printf("%.0lf\n", k);
    return 0;
}