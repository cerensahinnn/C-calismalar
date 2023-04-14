#include <stdio.h>
#include <malloc.h>
// maximum sayı bulma

int main() {

	int i=1;
	int num, max;
	printf("5 tane sayı giriniz:");
	scanf("%d",&num);
	max=num;
	while (i<5){
	    scanf("%d" , &num);
	    if (num>max){
	        max=num;
	    }
	    i ++;
	}
    printf("girilen en büyük sayı: %d",max); 
	
	return 0 ;
}
