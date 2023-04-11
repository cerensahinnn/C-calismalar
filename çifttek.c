#include <stdio.h>
#include <stdlib.h>

// tek sayı çift sayı bulma

int main()
{
    int a;
    printf("bir sayı giriniz: ");
    scanf("%d",&a);
    switch (a%2) {
    case 0:
    printf(" girdiğiniz sayi çift sayidir.");
    break;
    case 1:
    printf("girdiğiniz sayi tek sayidir.");
    break;
    case -1:
    printf("girdiğiniz sayi tek sayidir");
    break;
    }
    return 0;
}
