#include<stdio.h>
int n,w;
int checkABCD(int a[n][w],int r,int c,int i,int j){
     int dr[4]={-1,0,1,0};
     int dc[4]={0,1,0,-1};
     int ti,tj,count = 0;
     int round[4]={0,0,0,0};

     if(a[i][j]==0){
        return 0;
     }else{
         for(int s=0;s<4;s++){
            ti = i+dr[s];
            tj = j+dc[s];

            if(0<=ti && ti<r && 0<=tj && tj<c){

                if(a[ti][tj]==1){
                    count++;
                    round[s] = 1;
                }
            }
         }
         //printf("===%d %d ans = %d ====\n", i,j,count);
         if(count==1){
            return 1;
         }else if(count==2){
            if(round[0]!=round[2] || round[1]!=round[3]) return 2;
            else return 0;
         }else if(count==3){
            return 3;
         }else if(count==4){
            return 4;
         }else return 0;

     }
}

//void printM(int a[n][w]){

    //for(int i = 0 ;i < n;i++){
        //for(int j =0; j < w;j++){
            //printf("%d ", a[i][j]);
        //}
        //printf("\n");
    //}
//}
int main(){

    scanf("%d%d",&n,&w);
    int a[n][w];
    //printf("%d %d \n", n,w);
    for(int i=0;i<n;i++){
        for(int j=0;j<w;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //printM(a);
    int t;
    int ans[4]={0,0,0,0};
    for(int i=0;i<n;i++){
        for(int j=0;j<w;j++){
            t = checkABCD(a,n,w,i,j);
            //printf("t=%d\n",t);
            if(t!=0){
                ans[t-1]++;
            }
        }
    }
    for(int i=3;i>=0;i--){
        printf("%d\n",ans[i]);
    }
    return 0;
}
