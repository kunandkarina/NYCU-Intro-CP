#include<stdio.h>

int main(){
    int w;
    scanf("%d",&w);
    for(int r=1;r<=w;r++){
        int a,f;
        scanf("%d%d",&a,&f);
        for(int t=1;t<=f;t++){
            for(int i=1;i<=a;i++){
                for(int j=1;j<=i;j++){
                    printf("%d",i);
                }
                printf("\n");
            }
            for(int i=a-1;i>=1;i--){
                for(int j=i;j>=1;j--){
                    printf("%d",i);
                }
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
