#include<stdio.h>
main(){
int a,b,c,d;
	printf("Masukkan nilai a : ");
	scanf("%d", &a);

	printf("Masukkan nilai b : ");
	scanf("%d", &b);
	
	c = a + b;
	d = c + a;
	
	printf("Hasil : %d", d);
}
