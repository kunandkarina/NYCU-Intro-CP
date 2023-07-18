#include<stdio.h>
int s[10000];
int p[10000];
int count;
int read(){
    int i = 0;
    scanf("%d", &s[i]);
    while(s[i] != 0){
            i++;
            scanf("%d", &s[i]);
    }
    return i;
}
void printArr(int s[], int n){
    for(int i=0;i<n;i++){

        printf("%d ",s[i]);
    }
    printf("\n");
}
void fillX(int i, int n){
    for(int j=i;j<n;j++) p[j]=0;
}
void printP(int n){
    for(int i=0;i<n;i++){
        p[i]==0? printf("X") : printf("O");
    }
    printf("\n");
}
void rec(int sum,int i, int a,int n){
    if(sum == a){
        fillX(i,n);
        printP(n);
        count=1;
        return;
    }else if(sum > a){
        return;
    }else if(i == n){
        return;
    }

    for(int k=1;k>=0;k--){
        p[i] = k;
        if(p[i] == 1) rec(sum + s[i], i+1,a,n);
        else rec(sum,i+1,a,n);

    }

//    p[i] = 0;
//    rec(sum, i+1, a, n);
//    p[i] = 1;
//    rec(sum+s[i], i+1, a, n);
}

int main(){
    int c,a,n;
    scanf("%d", &c);
    for(int k =0;k<c;k++){
        scanf("%d", &a);
        n = read();
        //printf("a = %d n = %d\n",a,n);
        //printArr(s,n);
        count = 0;
        rec(0,0,a,n);
        if(count == 1) printf("finish\n");
        else printf("no solution\n");

    }

}
