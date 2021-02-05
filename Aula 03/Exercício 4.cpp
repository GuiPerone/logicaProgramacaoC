
#include <stdio.h>
#include <stdlib.h>
int main (){
	double reais;
	double dolar; 
	double conversao;
	printf("Insira o valor do seu credito em reais");
	scanf("%.f", reais);
	scanf("O valor da cotação do dolar é de 5,35");
	conversao = (reais*5.35);
	printf("O seu crédito em dolar após a conversao é: %.f", conversao);
	
}

