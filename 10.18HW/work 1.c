/* Enter your code here. Read input from STDIN. Print output to STDOUT */
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(c == 0){
       printf("%d",a+b);
    }
    if(c == 1){
       printf("%d",a-b);
    }
    if(c == 2){
       printf("%d",a*b);
    }
    if(c == 3){
       printf("%d",a/b);
    }
    if(c == 4){
       printf("%d",a%b);
    }
    return 0;
}
