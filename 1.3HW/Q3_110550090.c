#include<stdio.h>
int a[10000];
void printArray(int a[],int i){
    for(int j=0;j<i;j++){
        printf("%d ",a[j]);
    }
    printf("\n");
}
int main(){
    int n;
    int i=0;
    scanf("%d",&n);
    while(1){
        int d,sum=0;
        while(n!=0){   //square sum
            d = n%10;
            sum += d*d;
            n = n/10;
        }
        n = sum;
        if(n==1){    //if sum = 1
            printf("1\n");
            break;
        }else{      //is repeated
            for(int j=0;j<i;j++){
                if(a[j]==n){
                    printf("0\n");
                    return 0;
                }
            }
            //not repeated
        }
        a[i++] = n; //save to a[]
        //printArray(a,i);
    }
    return 0;
}
