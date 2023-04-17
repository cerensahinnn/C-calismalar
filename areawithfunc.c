// dairenin alanını ve çevresini hesaplama

#include <stdio.h>
#include <stdlib.h>

float calculatePerimeter(int r) 
{
    return 2 * 3.14 * r;
}

float calculateArea(int r) 
{
    return 3.14 * r * r;
}

int main() 
{
    int r;
    float perimeter, area;
    printf("Enter a radius value: ");
    scanf("%d", &r);

    perimeter = calculatePerimeter(r);
    area = calculateArea(r);

    printf("Perimeter of circle: %.2f \n", perimeter);
    printf("Area of circle: %.2f", area);

    return 0;
}
