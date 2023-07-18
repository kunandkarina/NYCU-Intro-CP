#include<stdio.h>

int dr[4] = {-1, 0, +1, 0};
int dc[4] = {0, 1, 0 , -1};

int main(){
    int m[5][6];

    int r = 5, c = 6;
    int i = 4, j = 3;  //(4,3) + (-1,0) = (3,0)
    int ti, tj;

    for(int di =0; di <4; di++){
        ti = i+dr[di];
        tj = j+dc[di];
        if(0<= ti && ti < r  && 0<= tj && tj < c){
            printf("%d %d\n", ti,tj);
        }else printf("outside\n");

    }

}
