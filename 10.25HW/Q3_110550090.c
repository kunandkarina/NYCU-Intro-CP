#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a == 0){
       printf("NULL");
    }
    else if(a > 0){
    for(int i=1;i<=a;++i){
        int t = i%2;
        for(int j=1;j<=i;++j){
            printf("%d",t);
            //output t
            t = 1-t;

        }
        printf("\n");
    //out put '\n'
    }
    }
    return 0;
}
