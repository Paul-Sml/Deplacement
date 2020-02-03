#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char deplacement[10] = "vide";

	printf("Voulez vous vous rendre au puit (1) ou la grotte (2)");
	scanf("%s", &deplacement);
	if (strcmp(deplacement, "puit")==0){
		printf("Vous vous rendez au puit du village\n");
	}
	if (strcmp(deplacement, "grotte")==0){
		printf("Vous vous retrouvez face a la grotte\n");
	}
	
	return 0;
}
