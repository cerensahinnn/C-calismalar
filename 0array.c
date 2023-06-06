#include <stdio.h>

int main()
{
    int i;
    int sayilar[] = {1,2,3,4,5};
    for (i=0 ; i<5 ; i++){
    printf("%d \n",sayilar[i]);
        
    }
    return 0;
}

/*
#include <stdio.h>

int main()
{
    int i;
    int sayilar[5];
    printf("arrayinizin sayılarını giriniz:");
    for (i=0 ; i<5 ; i++){
    scanf("%d \n", &sayilar[i]);
        
    }
    for(i=0 ; i<5 ; i++){
    printf("%d",sayilar[i]);}
    
    return 0;
}
