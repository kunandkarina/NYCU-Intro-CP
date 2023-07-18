#include<stdio.h>
int subArray(int a[],int n,int k){
    long long l=0,sum=0,ans=1e18;
    for(int i=0;i<n;i++){
        sum+=a[i];
        while(sum-a[l]>k){
            sum-=a[l++];
        }
        if(sum>=k && i-l+1<ans){
            ans = i-l+1;
        }
    }
    if(ans == 1e18){
        return 0;
    }else return ans;
}
int main(){
    int k,n;
    scanf("%d%d",&k,&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d\n",subArray(a,n,k));
    return 0;
}
