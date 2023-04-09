// pointer mantığı 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x=3.14;
    double* y=&x;
    double* z=&x;
    printf("y: %f \n",*y);
    printf("z: %f \n",*z);
    *y=21.19; // *y ve *z sadece birer birbiririyle aynı değeri olan pointerdır. 
    printf("z: %f \n", *z); // ve pointerda yapılan değişiklik aslında x değerine yapılmıştır.
    printf("x: %f",x); // *z veya *y değiştirilirse x değeri de değişir.
}
