#include<stdio.h>
#include<math.h>
#define M 1000000007
typedef long long LL;

LL mypow(LL d, LL u){
    LL a = 1;
    d = d % M;
    for(int i=0;i<u;i++){
        a = (a * d)% M;
    }
    return a % M;

}
//LL mypow1(LL d, LL u){
//    LL a = 1;
//    for(int i=0;i<u;i++){
//        a = (a * d);
//    }
//    return a;
//
//}
int main(){
    int q;
    scanf("%d",&q);
//    LL a = mypow(2,q)-2;
//    LL b = mypow1(2,q-1)-1;
//    LL c = mypow(a,b);
//    printf("%d\n",c*(a+1)%M);
//   return 0;
    LL c=mypow(2,q)-2;
    LL a= c + 1;
    LL b=1;
    for(int i=0;i<q-1;i++){
        b = (b*c) % M;
        c = (c*c) % M;
    }
    b = (b*a) % M;
    printf("%d",b);
    return 0;
}
