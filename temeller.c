#include <stdio.h>
#include <stdlib.h>

/* burada değerlerin kümelere göre nasıl işedğini göstermek istedim. */
/* kümeler dışında verdiğimiz değer yenisi söylenemediği sürece kullanılır */
/* fonksiyon için yazılımış ayrı bir değer varsa,yeni değer söyelememe rağmen fonksiyonu kullanır.*/
void fonk1 ();
void fonk2 ();

int a=5;
int main() {
    int a=6; 
    printf("main:%d\n",a);
    fonk1();
    printf("main:%d\n",a);
    fonk2();
    printf("main:%d\n",a);
}

void fonk1() {
    int a=7;
    printf("fonk1:%d\n",a);
}
void fonk2() {
    printf("fonk2:%d\n",a);
}
