#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float trab, aval, exam, med;
	
	printf("Insira a nota do trabalho:\n");
	scanf("%f", &trab);
	printf("Insira a nota da avaliacao:\n");
	scanf("%f", &aval);
	printf("Insira a nota do exame:\n");
	scanf("%f", &exam);
	
	if (trab > 10.0 || aval > 10.0 || exam > 10.0){
		printf("Nota digitada ACIMA de 10.0. ERRO!\n");
	} else {
		med = (trab*2 + aval*3 + exam*5)/10;
		printf("Media: %.2f.\n", med);
		if(med >= 8.0 && med <= 10.0){
			printf("Conceito A.\n");
		} else if (med >= 7.0 && med < 8.0){
			printf("Conceito B.\n");
		} else if (med >= 6.0 && med < 7.0){
			printf("Conceito C.\n");
		} else if (med >= 5.0 && med < 6.0){
			printf("Conceito D.\n");
		} else {
			printf("Conceito E.\n");
		}
	}
	
	return 0;
}
