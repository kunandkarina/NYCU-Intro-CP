#include<stdio.h>
#define inrange 0<=move_i && move_i<n && 0<=move_j && move_j<m
int directioncheck(int n,int m,int map[][m],int i,int j){
    int move_r[4] = {-1,0,1,0};
    int move_c[4] = {0,1,0,-1};
    int move_i;
    int move_j;
    int count = 0;
    int area[4]={0};
    if(map[i][j]==0){
        return 0;
    }
    else{
        for(int d=0;d<4;d++){
            move_i = i + move_r[d];
            move_j = j + move_c[d];
            if(inrange && map[move_i][move_j]==1){
                count++;
                area[d] = 1;
            }
        }
        if(count==1){
            return 1;
        }else if(count==2){
            if(area[0]!=area[2]||area[1]!=area[3]){
                return 2;
            }else{
                return 0;
            }
        }else if(count==3){
            return 3;
        }else if(count==4){
            return 4;
        }else{
            return 0;
        }
    }
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int map[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&map[i][j]);
        }
    }
    int t;
    int ans[4]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t = directioncheck(n,m,map,i,j);
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
