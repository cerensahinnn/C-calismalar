#include <stdio.h>
#include <stdlib.h>

// minimum sayı bulma

int main() {

	int i=1;
	int num, min;
	printf("5 tane sayı giriniz:");
	scanf("%d",&num);
	min=num;
	while (i<5){
	    scanf("%d" , &num);
	    if (num<min){
	        min=num;
	    }
	    i ++;
	}
    printf("girilen en küçük sayı: %d",min); 
	
	return 0 ;
}
