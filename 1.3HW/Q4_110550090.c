#include<stdio.h>
int a[50][200];
void makeMap(int w,int h,int a[][200]){
    for(int i=0;i<h;i++){
        int sum = 0;
        int n;
        scanf("%d",&n);
        a[i][n-1] = 1;
        sum += n;
        while(sum<w){
            int t;
            scanf("%d",&t);
            a[i][sum-1+t]=1;
            sum += t;
        }
    }
}
int ansMap(int w,int h,int a[][200]){
    int max = 0;
    for(int i=0;i<w-1;i++){
        int ans = 0;
        for(int j=0;j<h;j++){
            ans += a[j][i];
            if(ans > max){
                max = ans;
            }
        }
    }
    return max;
}
int main(){
    int w,h;
    scanf("%d%d",&w,&h);
    makeMap(w,h,a);
    int t = ansMap(w,h,a);
    printf("%d\n",h-t);
    return 0;
}
