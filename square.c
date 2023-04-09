#include <stdio.h>
#include <stdlib.h>

/* girilen sayının karesini alan fonksiyon*/

float square(float k);

int main()
{
    float a,b;
    printf("bir sayı giriniz: ");
    scanf("%f",&a);
    b=square(a);
    printf("girdiğiniz sayının karesi: %.2f",b);
    
}

float square(float k)
{
    float sqr;
    sqr=k*k;
    return sqr;
}
