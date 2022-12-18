#include<stdio.h>

int main(){
	int tamanhoTorre = 0;
	int espacosVazios = 0;
	
	printf("Qual a altura da torre?\n");
	scanf("%d",&tamanhoTorre);
	
	espacosVazios = tamanhoTorre;
	
	for(int i = 1;i<tamanhoTorre;i++){
		for(int i2 = 0;i2<espacosVazios;i2++ ){
			printf(" ");
		}
		
		for(int i3 = 1;i3<=i;i3++){
			printf("#");
		}
		
		
		
		espacosVazios--;
		printf("\n");
	}
	
	return 0;
}
