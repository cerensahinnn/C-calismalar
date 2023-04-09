#include <stdio.h>
#include <stdlib.h>

/* girilen gün sayısı ile günü bulma*/

int main ()
{
    int day;
    printf("hangi günde olduğunu öğrenmek için sayı giriniz:");
    scanf("%d",&day);
    if (day>0 && day<8){
        printf("sorduğunuz gün: ");
        switch (day){
            case 1: printf("Pazartesi \n");
            break;
            case 2: printf("Salı \n");
            break;
            case 3: printf("Çarşamba \n");
            break;
            case 4: printf("Perşembe \n");
            break;
            case 5: printf("Cuma \n");
            break;
            case 6: printf("Cumartesi \n");
            break;
            case 7: printf("Pazar \n");
            break;
        }
}
    else 
        printf("1 ile 7 arasında bir sayı gir");

    return 0;
}
