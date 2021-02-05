
    #include <stdio.h>
	#include <stdlib.h>
	int main () {
		double cat1;
		double cat2;
		double hip;
		printf("Informe a medida do cateto1");
		scanf("O valor do cateto1 e %d", &cat1);
		printf("Informe a medida do cateto2");
		scanf("O valor do cateto2 e %d", &cat2);
		printf("Informe o valor da hipotenusa");
		scanf("O valor da hipotenusa e %d", &hip);
		if (cat1 != cat2 != hip) {
		printf("E um Triangulo Escaleno");
		}
		else if(cat1==cat2) {
			printf("E um Triangulo Isoceles");
			}
			else (cat1==cat2==hip) {
				printf("E um Triangulo Equilatero");
			}
			
			}


