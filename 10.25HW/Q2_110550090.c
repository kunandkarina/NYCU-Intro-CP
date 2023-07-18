#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        int w,l;
        scanf("%d%d",&w,&l);
        for(int i=1;i<=w;i++){
            for(int j=1;j<=l;j++){
                printf("*");
            }
            printf("\n");
        }
    }else if(n==2){
        int s;
        scanf("%d",&s);
        for(int i=1;i<=s;i++){
            for(int j=1;j<=s;j++){
                printf("*");
            }
            printf("\n");
        }
    }else if(n==3){
        int h;
        scanf("%d",&h);
        for(int i=1;i<=h;i++){
            for(int j=(h-i);j>=1;j--){
                printf(" ");
            }
            for(int j=1;j<=(2*i)-1;j++){
                printf("*");
            }
            printf("\n");
        }
    }else{
        printf("Please input 1, 2 or 3!");
    }
    return 0;
}

