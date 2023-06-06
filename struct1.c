#include <stdio.h>

struct mydate{
    int day;
    int month;
    int year;
    
};

int main()
{
    struct mydate x;
    struct mydate y;
    printf("doğum tarihinizi gün-ay-yıl şeklinde giriniz giriniz:");
    scanf("%d%d%d", &x.day , &x.month , &x.year);
    printf("bu günün tarihini gün-ay-yıl şeklinde giriniz:");
    scanf("%d%d%d", &y.day , &y.month , &y.year);
    if (x.day>y.day){
    y.day+=30;
    y.month-=1;
        
    }
    if (x.month>y.month){
    y.month+=12;
    y.year-=1;
    
    }
    
    printf(" \n Bu zamana kadar ");
    printf("%d gün, %d ay, %d yıl ", y.day-x.day, y.month-x.month , y.year-x.year);
    printf(" yaşadın ");
    
    
    return 0;
}
