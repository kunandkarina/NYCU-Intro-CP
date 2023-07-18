#include<stdio.h>

//for(i=start; i<stop ; i++)
//for(i=0;i<10;i++)  //run 10 times
//for(i=7;i<10;i++) //run 3 times

int main(){
    int n;
    int t;

    scanf("%d",&n);
    scanf("%d",&t);
    printf("%d\n",n);
    for(int i=0;i<t;i++){
        /***do once***/
        int a = 1;
        int last;
        while( !(10*a > n && n >= a) ){
            a = a * 10;
        }
        //printf("%d\n", a);
        last = n % 10; //算個位數;
        n = (n-last)/10; //刪個位數後把數字右推;
        //printf("%d\n",n);
        n = last*a + n;
        printf("%d\n",n);
        /*************/
    }
    return 0;
}
