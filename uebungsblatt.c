#include <stdio.h>

int main(){

	printf("Bitte Aufgabe stellen: Zahl{+,-,*,/}Zahl \nBeispiel: 1+1 \n");
	double firstFigure, secondFigure, result;
	char operation;

//Eingeben der Aufgabenstellung
	printf("Bitte Aufgabe stellen: Zahl{+,-,*,/}Zahl \nBeispiel: 1+1 \n");
	scanf("%.3lf", &firstFigure);
	scanf("%c", &operation);
	scanf("%.3lf", &secondFigure);

	switch(operation){
		case '+': result = firstFigure+secondFigure; break;	
		case '-': result = firstFigure-secondFigure; break;
		case '*': result = firstFigure*secondFigure; break;
		case '/': result = firstFigure/secondFigure; break;
	default: 
		fprintf(stderr, "Konnte Operation (\'%c\') nicht auswerten...\n");return -1;

	}
	printf("----------------------------------------\n");
	printf("%.3lf\n", result);
	
	return 0;
	
	
}
