	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h> 	
	int main () {
		char TurnoMatutino[50];
		char TurnoNoturno[50]; 
		char turno [50];
		int testem, testen;
	printf("Insira o turno em que voce estuda: ");
	scanf("Seu turno e %s: ", &turno);
	testem = strcmp (TurnoMatutino,"Matutino");
	testen = strcmp (TurnoNoturno,"noturno");
	if (TurnoNoturno == 0){
	printf("Bom dia!");
	}
	else {
		printf("Boa noite");
	}
	
	}
		
	


