#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
	char nome [50];
	char nivelIngles[50];
	int testeTipoInglestecnico;
	int testeTipoInglesVerbal;
			
			
	printf("Insira seu nome");
	scanf("%s", &nome);
	printf("Qual seu ninel de ingles? ");
	scanf("%s", &nivelIngles);
	
	
	testeTipoInglestecnico = strcmp(nivelIngles,"Tecnico"); //se = 0 / senão = 1
	testeTipoInglesVerbal =  strcmp(nivelIngles,"Verbal");
	
	if (testeTipoInglestecnico == 0 || testeTipoInglesVerbal==0){
		printf("Aprovado");
}
	else{
	 	printf("Repovado");
			
	}	
}
	
	


	
