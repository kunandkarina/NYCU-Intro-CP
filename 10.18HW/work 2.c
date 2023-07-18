#include<stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    if(0<=a && a<=540000){
       printf("%.0f",a*0.05);}
    if (540000<a && a<=1210000){
       printf("%.0f\n",(a-37800)*0.12);}
    if(1210000<a && a<=2420000){
       printf("%.0f\n",(a-134600)*0.2);}
    if(2420000<a && a<=4530000){
       printf("%.0f\n",(a-376600)*0.3);}
    if(4530000<a){
       printf("%.0f\n",(a-829600)*0.4);}
    if(a<0){
       printf("You've entered something negative.");
    }


    return 0;
}

