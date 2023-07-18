#include<stdio.h>
#define mod 1000000007
void multiply(long long F[2][2],long long M[2][2]){
    long long x = F[0][0]*M[0][0]%mod + F[0][1]*M[1][0];
    long long y = F[0][0]*M[0][1]%mod + F[0][1]*M[1][1];
    long long z = F[1][0]*M[0][0]%mod + F[1][1]*M[1][0];
    long long w = F[1][0]*M[0][1]%mod + F[1][1]*M[1][1];
    F[0][0] = x%mod;
    F[0][1] = y%mod;
    F[1][0] = z%mod;
    F[1][1] = w%mod;
}
unsigned long long getbit(long long i,long long n){
    unsigned long long b = (n>>i)%2;
    return b;
}
long long fib(long long n){
    long long ans[2][2]={{1,0},{0,1}};
    long long M[2][2]={{1,1},{1,0}};
    for(int i=0;i<64;i++){
        unsigned long long b = getbit(i,n);
        if(b==1){
            multiply(ans,M);
        }
        multiply(M,M);
    }
    return ans[0][1];
}
int main(){
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        long long n;
        scanf("%lld",&n);
        printf("%lld\n",fib(n));
    }
    return 0;
}
