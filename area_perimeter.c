#include <stdio.h>
#include <stdlib.h>

float perimeter, area;

int main () 
{
    int r;
    float perimeter,area;
    printf("enter a radius value: ");
    scanf("%d",&r);
    perimeter=2*3.14*r;
    printf("perimeter of circle: %.2f \n",perimeter);
    area=3.14*r*r;
    printf("area of circle: %.2f",area);
    return 0 ;
}
