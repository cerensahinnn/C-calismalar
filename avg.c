#include<stdio.h>
#include<stdlib.h>
float avarage(float,float);
float sum;
int main(){
    float a,b;
    float avarage1;
    printf("bir sayı giriniz:");
    scanf("%f",&a);
    printf("bir sayı daha giriniz:");
    scanf("%f",&b);
    avarage1=avarage(a,b);
    printf("girdiğiniz sayıların ortalaması: %2f", avarage1);
}

float avarage(float a, float b) {
    float avarages;
    sum= a+b;
    avarages= sum/2;
    
    return avarages;
    
}
