#include<stdio.h>
#include<string.h>
int a[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
int whereIsStr(char acc[][11], char str[], int r){
    for(int i=0;i<r;i++){
        if(strcmp(acc[i],str)==0){
            return i;
        }
    }
    return -1;
}
int isRightid(char str[]){
    int k = str[0]-65;
    int n[11];
    if(str[1]<49 || str[1] >50) return 0;
    n[0] = a[k]/10;
    n[1] = a[k]%10;
    for(int i=2;i<11;i++){
        n[i] = str[i-1]-48;
    }
    int b[11] = {1,9,8,7,6,5,4,3,2,1,1};
    int sum = 0;
    for(int i=0;i<11;i++){
        sum += n[i]*b[i];
    }
    int cnt = 0;
    if(sum%10==0){
        return 1;
    }else return 0;
}
void printAnswer(char acc[][11],int right[],int times[], int r){
    for(int i=0;i<r;i++){
        char tf;
        if(right[i] == 1) tf = 'T';
        else tf='F';
        printf("%s (%c, %d)\n",acc[i],tf,times[i]);
    }
}
int main(){
    int times[10];
    int right[10];
    char acc[10][11];
    int r = 0;
    char str[11];
    int c;
    for(int i=0;i<10;i++){
        scanf("%s",&str);
        c = whereIsStr(acc,str,r);
        if(c==-1){
             strcpy(acc[r],str);
             //printf("acc[%d] = %s\n", r, acc[r]);
             times[r] = 1;
             right[r] = isRightid(str);
             r++;
        }else times[c]++;
    }
    //printf("final r = %d\n",r);
    printAnswer(acc, right, times, r);
    return 0;
}
