#include <stdio.h>

// üslü sayı bulma

int main() {

	int i=1;
	int a,b;
	int sonuc=1;
	printf("kaç üssü kaç olsun?  ");
	scanf("%d",&a);
	printf("üssü ");
	scanf("%d",&b);

	while (i<=b){
	    sonuc=sonuc*a;
	    i ++;
	    }
    printf("işleminizin sonucu: %d ",sonuc); 
	return 0 ;
}
