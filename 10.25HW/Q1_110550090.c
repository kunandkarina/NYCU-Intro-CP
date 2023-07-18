#include <stdio.h>
int main(){
    int i;
    int n = 0;
    int a = 0;
    int b = 1;
    int nextterm;
    scanf("%d",&n);
    i = 1;
    if(n<=0){
        printf("Please enter a positive number!");
    }
    else if(n>=1000000){
        printf("You might have entered something bigger than 1 million.");
    }
    else{
    while(i<=n){
          printf("%d\t",a);
          nextterm = a + b;
          a = b;
          b = nextterm;
          ++i;

    }
    }
    return 0;
}
