#include<stdio.h>
#include<math.h>
int main(){
    int n,x;
    scanf("%d%d",&n,&x);
    int coe[n+1];
    for(int i=0;i<n+1;i++){
        scanf("%d",&coe[i]);
    }
    for(int i=1;i<n+1;i++){
        coe[i-1] = coe[i]*i;
    }
    long long sum = 0;
    for(int i=1;i<n;i++){
        sum += coe[i]*pow(x,i);
    }
    printf("%lld",coe[0]+sum);
    return 0;
}
