#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,bolum,bolum2,bolum3,kalan1,kalan2,kalan3,sum;
    sum=0;
    num=0;
    printf(" 4 basamaklı bir sayı giriniz:");
    scanf("%d",&num);
    bolum=num/1000; /* 9541   bolum=9 */
    kalan1=num-bolum*1000; /* kalan1= 541*/
    bolum2=kalan1/100; /* bolum2=5*/
    kalan2=kalan1-bolum2*100; /* kalan2=41 */
    bolum3=kalan2/10; /* bolum3=4*/
    kalan3=kalan2-bolum3*10; /* kalan3=1 */
    sum=bolum+bolum2+bolum3+kalan3;
    printf("girdiginiz sayı: %d \n",num);
    printf("girdiginiz sayının basamaklarının toplamı: %d", sum);
    
    return 0;
}
