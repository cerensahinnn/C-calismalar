#include<stdio.h>
#include<stdlib.h>

float avarage(float,float);
int main(){
    float i,j;
    printf("bir sayı giriniz: ");
    scanf("%f",&i);
    printf("bir sayı daha giriniz: ");
    scanf("%f",&j);
    float avg;
    avg=avarage(i,j);
    printf("girdiğiniz sayıların ortalaması: %.3f",avg);
    
}

float avarage(float k, float m){
    float result;
    result=(float(k+m)/2);
    return result;
}
