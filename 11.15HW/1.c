#include<stdio.h>
int f(int a){
    if(a==1 || a==2){
        return 1;
    }else{
        return f(a-2) + f(a-1);
    }
}

int main(){
    int a;
    scanf("%d",&a);

    printf("%d",f(a));
    return 0;
}
