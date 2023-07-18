#include<stdio.h>
int main(){
    int last;
    scanf("%d",&last);
    int n[last];
    int b[last];
    int k;
    for(int i=0;i<last;i++){
        scanf("%d",&n[i]);
    }
    b[0] = 1;
    for(int i=1;i<last;i++){
        b[i]=0;
    }
    for(int i=0;i<last;i++){
        if(b[i]==1){
            k=1;
            for(int j=0;j<n[i];j++){
                b[i+k]=1;
                k++;
            }
        }
    }
    //printf("%d\n",b[last-1]);
    if(b[last-1]==1){
        printf("true");
    }else{
        printf("false");
    }

    return 0;
}
