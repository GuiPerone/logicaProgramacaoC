
#include <stdio.h>
#include <stdlib.h>
int main (){
	double reais;
	double dolar; 
	double conversao;
	printf("Insira o valor do seu credito em reais");
	scanf("%.f", reais);
	scanf("O valor da cota��o do dolar � de 5,35");
	conversao = (reais*5.35);
	printf("O seu cr�dito em dolar ap�s a conversao �: %.f", conversao);
	
}

