#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t;
    for(int i=1;i<n;i++){
        if(a[i]!=0 && a[0]!=0){
            for(int j=i;a[j-1]==0;j--){
                a[j-1] = a[j];
                a[j] = 0;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
