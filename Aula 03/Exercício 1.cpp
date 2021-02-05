#include <stdio.h>
#include <stdlib.h>
int main(){
	int nota1;
	int nota2;
	int nota3;
	int nota4;
	double media;
    printf("\n Insira a nota 1: ");
    scanf ("%d", &nota1);
    printf("Insira a nota 2: ");
    scanf("%d", &nota2);
    printf("Insira a nota 3: ");
    scanf("%d", &nota3);
    printf("Insira a nota 4: ");
    scanf("%d", &nota4);
    media = (nota1+nota2+nota3+nota4)/4;
    printf("A média das notas é %.2f", media);
}
