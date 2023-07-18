#include<stdio.h>
int main(){
    int r,c;
    scanf("%d,%d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d,",&a[i][j]);
        }
    }

    int s,t;

    scanf("%d,%d",&s,&t);
    int b[s][t];
    for(int i=0;i<s;i++){
        for(int j=0;j<t;j++){
            scanf("%d,",&b[i][j]);
        }
    }

    //judge
    if(c!=s){
        printf("Wrong dimensions!\n");
    }else{
        for(int i=0;i<r;i++){
            for(int j=0;j<t;j++){
                int sum =0;
                for(int k=0;k<c;k++){
                    sum+=a[i][k]*b[k][j];
                }
                printf("%d,",sum);
            }
            printf("\n");
        }
    }

    return 0;
}
