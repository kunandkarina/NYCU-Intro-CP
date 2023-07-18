#include<stdio.h>

int isPrime(int p[], int count, int i){
    for(int j =0 ; p[j]*p[j] <= i && j < count; j++){
        if(i % p[j] ==0 ) {
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int p[n];
    p[0] = 2;
    p[1] = 3;
    int c = 2;
    if(n<=2) {
        printf("0");
        return 0;
    }else if(n==3){
        printf("1");
        return 0;
    }
    for(int i=4;i<n;i++){      //�q4�]��p��n���e�@��
        if(isPrime(p,c,i)){    //judge if i is a prime.
            p[c] = i;          //�p�Gi����Q�㰣,�h�N��s�Jp[c],�è䬰���
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
