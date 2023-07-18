#include<stdio.h>
int main(){
    int a,b,x,y,z,m;
    scanf("%d%d",&a,&b);

    if(b==1 && a>=12){
        a = a-12;
        x=a/50;y=(a%50)/10;z=((a%50)%10)/5;m=((a%50)%10)%5;
    }
    else if(b==2 && a>=10){
        a = a-10;

    }

    else if(b==3 && a>=15){
       a = a-15;
    }

    else if(b==4 && a>=50){
       a = a-50;
    }

    else if(b==5 && a>=68){
       a = a-68;
    }

    else if(b==6 && a>=12){
       a = a-12;
    }
    else if(b==7 && a>=30){
       a = a-30;
    }
    else if(b==8 && a>=20){
       a = a-20;
    }
    else{
        printf("You can¡¦t buy it!\n");
        return 0;
    }
    x=a/50;
    y=(a%50)/10;
    z=((a%50)%10)/5;
    m=((a%50)%10)%5;
    printf("%d %d %d %d\n",x,y,z,m);
    return 0;
}
