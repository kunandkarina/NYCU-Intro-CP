#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int h[n];
    for(int i=0;i<n;i++){
        scanf("%d",&h[i]);
    }
    int max = 0;
    int vol;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(h[i]>h[j]){
                vol = h[j]*(j-i);
                if(vol>max){
                    max = vol;
                }
            }
            else{
                vol = h[i]*(j-i);
                if(vol>max){
                    max = vol;
                }
            }
        }
    }
    printf("%d ",max);
    return 0;
}
