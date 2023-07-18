#include<stdio.h>
#include<limits.h>
int findbottom(int t,int p[]){
    int i=t;
    while(i!=0 && p[i-1]<=p[i]){
        i = i-1;
    }
    return i;
}

void printArr(int a[], int n){
    for(int i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
}
void fillB(int B[],int n,int p[]){
    int t = n-1;
    int d;
    while(t>=0){
        d = findbottom(t,p);
        for(int i=d;i<=t;i++){
            B[i] = d;
        }
        t = d-1;
    }
//    printArr(B,n);

}
int maxOfEveryBottom(int n,int i, int j, int m[][n+1],int p[], int B[], int t){
    int ans = 0;
    int s;
    int d = t+1;
    do{
        d = B[d-1];
        if(p[t] >= p[d]){
            s = m[i-1][d] + p[t] - p[d];
            if(s > ans) ans = s;
        }
    }while(d!=0);

    return ans;
}
int main(){
    int n;
    int k;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m[k+1][n+1];
    for(int i=0;i<n+1;i++){
        m[0][i] = 0;
    }
    for(int i=0;i<k+1;i++){
        m[i][0] = 0;
        m[i][1] = 0;
    }
//    printArr(a,n);
    int t,d,s,ns;
    int B[n];
    fillB(B,n,a);
    for(int i=1;i<=k;i++){
        for(int j=2;j<=n;j++){
            t = j-1;
//            d = B[t];
//            s = m[i-1][d] + a[t]-a[d];
            s = maxOfEveryBottom(n,i,j, m,a,B,t);
            ns = m[i][j-1] ;
            if(s>ns){
                m[i][j] = s;
            }
            else{
                m[i][j] = ns;
            }
        }
    }
//    for(int i=0;i<k+1;i++){
//        for(int j=0;j<n+1;j++){
//            printf("%d ",m[i][j]);
//        }
//        printf("\n");
//
//    }
    printf("%d\n",m[k][n]);
    //printf("%d",findbottom(2,a));


//    for(int i=0;i<n;i++){
//        for(int k=0;k<=i;k++){
//
//        }
//    }
    return 0;
}
