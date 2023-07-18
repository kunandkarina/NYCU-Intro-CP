#include <stdio.h>
int main(){
    int a,b,c,i,gcd;
    scanf("%d %d %d", &a, &b, &c);
    for(i=1; i <= a && i <= b && i<=c; i++)
    {
        if(a%i==0 && b%i==0 && c%i==0)
            gcd = i;
    }

    printf("%d",gcd);
    return 0;
}
