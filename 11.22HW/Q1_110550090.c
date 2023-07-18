#include<stdio.h>
void rec(int n,int m,int ans[],int i){
    if(n==0){
        printf("%d",ans[0]);
        for(int j=1;j<i;j++){
            printf("+%d" ,ans[j]);
        }
        printf("\n");
        return ;
    }
    for(int start = m; start <=n; start++){
        ans[i]=start;
        rec(n-start, start, ans, i+1);
    }


}
int main(){
    int n;
    int m = 1;
    int i = 0;
    int ans[1005];
    scanf("%d",&n);
    rec(n,m,ans,i);
    return 0;
}
