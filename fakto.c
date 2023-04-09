#include<stdio.h>
#include<stdlib.h>
int faktoriyel(int);     /* prototype */
int main(){
    int a,c;
    printf("bir sayı giriniz: ");
    scanf("%d",&a);
    if (a<0){
    printf("girdiğiniz sayının faköriyeli tanımsızdır");}
    else {
    c=faktoriyel(a);
    printf("girdiğiniz sayının faktöriyeli: %d \n",c);}
}

int faktoriyel(int k){
    int i, fakto=1; 
    for (i=k; i>1; i--){
       fakto*=i; 
    } 
    return fakto;
}
