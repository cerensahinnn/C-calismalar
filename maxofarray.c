// Find maximum of array "b".

#include "stdio.h"
#include "conio.h"
#define SIZE 6 //SIZE değeri 6 olarak tanımlanmıştır. tüm kodda kullanilabilen genel bir deger oldugundan #define ile tanimlanmiştir. int olarak da tanimlanabilir fakat #define ile tanimlanmasi daha doğrudur.
int main() {
    int max, i;
    int b[SIZE] = { 3, 27, 14, 32, 5, 19 }; //"SIZE" buyuklugunde bir "b" dizisi ve elemanlari tanimlanmiştir. 
    max = b[0]; // //max degere, a dizisinin 0. elemani atanmiştir. bu durumda, max=3 'tur. (Set the initial max value to the first element of the array)
    for (i = 1; i < SIZE; i++) { //6'dan kucuk oldugu surece donguyu dondurur. (max. bulmak icin 6 sayi birbiriyle karsilastirilacagi icin)
        if (b[i] > max) // i=0'dan 6'ya kadar sayılar karşılaştırılır. (Compare each element with the current max value)
            max = b[i]; // Update max value if a larger element is found
    }
    printf("Maximum of array b is: %d\n", max); //en son max değer yazdırılır.
    _getch();
    return 0;
}
//                                    b[0]       b[1]       b[2]       b[3]       b[4]       b[5]
//bu kodda, b dizisinin elemanlari 0. eleman, 1. eleman, 2. eleman, 3. eleman, 4. eleman, 5. eleman olarak gider. fakat #define ile tanimlanirken 5 olarak değil, eleman sayisi 6 olduğundan, 6 olarak tanımlanır. 
//                                     3          27         14         32          5         19

//algoritma taraması (line 10-line 13 arasında sırayla yapılan islemler):
// 1. for döngüsü: i=1, i<6(SIZE), 1. if döngüsü: a[0]=3  > 3(max)  sağlamıyor. max=3  olarak kalır. 
// 2. for döngüsü: i=2, i<6(SIZE), 2. if döngüsü: a[1]=27 > 3(max)  sağlıyor.   max=27 olur.
// 3. for döngüsü: i=3, i<6(SIZE), 3. if döngüsü: a[2]=14 > 27(max) sağlamıyor. max=27 olarak kalır.
// 4. for döngüsü: i=4, i<6(SIZE), 4. if döngüsü: a[3]=32 > 27(max) sağlıyor.   max=32 olur.
// 5. for döngüsü: i=5, i<6(SIZE), 5. if döngüsü: a[4]=5  > 32(max) sağlamıyor. max=32 olarak kalır.
// 6. for döngüsü: i=6, i<6(SIZE), 6. if döngüsü: a[5]=19 > 32(max) sağlamıyor. max=32 olarak kalır.
// 7. for döngüsü: i=7, i<6(SIZE) sağlamadığından döngüye girmez.
// max=32 değeri ekrana yazdırılır. böylelikle dizideki max değer bulunmuş olur.
