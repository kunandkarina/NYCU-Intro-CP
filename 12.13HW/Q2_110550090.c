#include<stdio.h>
int subArray(int num[], int numSize, int k){
    int sum = 1, count = 0;
    for (int i = 0; i < numSize; i++){
        sum = 1;
        for (int j = i; j < numSize; j++){
            sum *= num[j];
            if (sum < k){
                count++;
            } else{
                break;
            }
        }
    }
    return count;
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d ",subArray(a,n,k));
    return 0;
}
