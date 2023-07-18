#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>612 && a<=660){
       printf("I have earned NTD %d.\n",(a*1000)-600000);
    }
    if(588<=a && a<=612){
       printf("Keep my position.\n");
    }
    if(540<=a && a<588){
       printf("I have loss NTD %d.\n",600000-(a*1000));
    }
    if(a<540 || a>660){
       printf("Error opening price.\n");
    }


    return 0;
}
