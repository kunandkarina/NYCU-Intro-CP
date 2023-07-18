#include<stdio.h>
int main(){
    int i,j;
    scanf("%d %d",&i,&j);
    int mx = 0;
    for(int z = i;z <= j;++z){
        int n = z;
        int count = 0;
        while(n>1){
            count++;
            if(n%2 == 1){
                n = 3*n + 1;

            }
            else{
                n = n/2;

            }
        }
        if(count>mx){
            mx = count;
        }
    }
    printf("%d %d %d",i,j,mx+1);
    return 0;
}
