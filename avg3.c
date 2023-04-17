int main ()
{
    
    float a,sum=0,avg;
    int i;
    printf("10 tane sayı giriniz:");
    for (i=1; i<11; i++ ) {
    scanf("%f",&a);
    sum=sum+a;
    }
    avg=sum/i;
    printf("girdiğiniz sayıların ortalamsı: %f",avg);
    return 0;
    
}
