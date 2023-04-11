#include <stdio.h>
#include <stdlib.h>

// asal sayı bulma

int main()
{
    int number, i;
    number=0;
    i=2;
    
    printf("pozitif bir sayı giriniz:");
    scanf("%d",&number);
    
    if (number<0){
        printf("lütfen pozitif bir değer giriniz.");
        return 0;
    }
    while (i<number/2){
        if (number%i==0){
            printf("girdiğiniz sayi %d 'ye bolunuyor, asal sayı olamaz.",i);
            return 0;
        }
        i++;
    }
    printf("girdiğiniz sayı(%d) bir asay sayidir :)",number);
    return 0;
}
