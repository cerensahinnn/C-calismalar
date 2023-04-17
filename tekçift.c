#include <stdio.h>


int main()
{
    int num;
    printf("bir sayi giriniz:");
    scanf("%d",&num);
    if (num%2==0){
    printf("girdiğiniz sayı çift sayıdır."); }
    else {
    printf("girdiğiniz sayı tek sayıdır."); }
    return 0;
}
