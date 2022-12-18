#include<stdio.h>

int main(){
	int tamanhoTorre = 0;
	int espacosVazios = 0;
	int i,i2,i3;
	
	printf("Qual a altura da torre?\n");
	scanf("%d",&tamanhoTorre);
	tamanhoTorre++;
	
	espacosVazios = tamanhoTorre;
	
	for(i = 1;i<tamanhoTorre;i++){
		for(i2 = 0;i2<espacosVazios;i2++ ){
			printf(" ");
		}
		
		for(i3 = 1;i3<=i;i3++){
			printf("#");
		}
		espacosVazios--;
		printf("\n");
	}
	
	return 0;
}
