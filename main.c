#include <stdlib.h>
#include <stdio.h>
int main(){
	int vettore[10];
	int num = 0;
	int i = 0;
	for (i = 0; i < 10; i++){
		scanf("%d", num);
		printf("inserisci un numero positivo: ");
		vettore[i] = num;
	}
	int m = 0;
	for (m = 0; m < 10; m++){
		printf("v[%d]: %d", m, vettore[i]);
	}
	
}
