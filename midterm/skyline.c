#include<stdio.h>
int H[10000] = {0};
void scanbuilding(int l[],int h[],int r[],int len){
    for(int i=0;i<len;i++){
        scanf("%d%d%d",&l[i],&h[i],&r[i]);
    }
}
//void printbuilding(int l[],int h[],int r[],int len){
//    for(int i=0;i<len;i++){
//        printf("%d %d %d\n",l[i],h[i],r[i]);
//    }
//}
void putInBuilding(int L, int nowH,int R){
    for(int j=L;j<R;j++){
        if(nowH > H[j]){
            H[j] = nowH;
        }
    }
}
void comparevalue(int l[],int h[],int r[],int len){
    for(int i=0;i<len;i++){
        putInBuilding(l[i],h[i],r[i]);
    }
}
void printans(int H[]){
    printf("%d %d ",1, H[1]);
    for(int i=2;i<10000;i++){
        if(H[i-1]!=H[i]){
            printf("%d %d ",i,H[i]);
        }
    }
    puts("");
}
void printH(int H[]){
    for(int i=0;i<30;i++){
       printf("%d ",H[i]);
   }
   printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    int l[n],h[n],r[n];
    scanbuilding(l,h,r,n);
    //printbuilding(l,h,r,n);
    comparevalue(l,h,r,n);
    //printH(H);
    printans(H);
    return 0;
}
