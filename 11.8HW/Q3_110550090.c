#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        if(a[i+1]>a[i] ){
        sum += a[i+1]-a[i];
      }
    }
    printf("%d",sum);

    return 0;
}
