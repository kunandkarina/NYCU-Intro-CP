#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    int p;
    scanf("%d",&p);
    int pi[p];
    for(int i=0;i<p;i++){
        scanf("%d",&pi[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            if(i%pi[j]==pi[j]-1){
                a[i] = 1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(i%7==5 || i%7==6){
            a[i] = 0;
        }
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
