#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char *p;
    int a[100];
    int i=0;
    int L[10][10];
    int R[10][10];
    for(int r =0;r<6; r++){
        fgets(str, 100, stdin);
        p = strtok(str, " \n");
        while(p != NULL){
            //printf("p = %s\n", p);
            a[i] = atoi(p);
            i++;
            p = strtok(NULL, " \n");
        }
        int n= i;
        int sum = 0;
        int ai = 0;
        L[r][0] = 0;
        for(i = 1; i < n-1;i++){
            sum += a[ai];
            ai++;
            L[r][i] = sum;
        }
        for(i=0;i<n-2;i++){
            R[r][i] = L[r][i+1];
        }
        R[r][n-1] = 6;
        for(int i=0;i<n-1;i++){
            printf("%d",sum);
        }
//        printf("\n");
//        for(int i=0;i<n-1;i++){
//            printf("%d ",R[r][i]);
//        }
//        printf("\n")

    }



}
