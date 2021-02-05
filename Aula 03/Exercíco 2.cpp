#include <stdio.h>
#include<stdlib.h>
int main (){
	char prod1[50];
	char prod2[50];
	char prod3[50];
	int valor1;
	int valor2;
	int valor3;
	double prestacoes;
	printf("Insira o nome do produto1:  ");
	scanf("%s", &prod1);
	printf("Insira o valor do produto1: ");
	scanf("%d", &valor1);
	printf("Insira o nome do produto2: ");
	scanf("%s", &prod2);
	printf("Insira o valor do produto2: ");
	scanf("%d", &valor2);
	printf("Insira o nome do produto3: ");
	scanf("%s", &prod3);
	printf("Insira o valor do produto3: ");
	scanf("%d", &valor3);
	prestacoes = (valor1+valor2+valor3)/5;
	printf("As prestações são: %.2f", prestacoes);
	system("pause");
	
	}
