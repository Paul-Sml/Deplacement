#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lieu
{
    char nom[20];
    char description[60];
    int difficulte;
    int acces[4];
};
typedef struct lieu defL;
	defL village1 = {"Village", "Village de bonvivre, vous y connaissez tous les habitants", 1, {2}};
	defL puit2 = {"Puit de Bonaugure", "Vieux puit aux diverses croyances, tout y est paisible", 4, {1, 3}};
	defL grotte3 = {"Grotte", "Grotte mystique, personne ne s'y est encore aventure", 8, {2}};

void deplac(lieuActuel){
	char deplacement[20]="vide";
	scanf("%s", &deplacement);
	if (strcmp(deplacement, "puit")==0 || strcmp(deplacement, "puit de Bonaugure")==0 || strcmp(deplacement, "Puit")==0 || strcmp(deplacement, "Puit de Bonaugure")==0){
		printf("%s\n",puit2.description);
		printf("Vous vous rendez au puit du village\n");
	}
	if (strcmp(deplacement, "grotte")==0 || strcmp(deplacement, "Grotte")==0){		
		printf("%s\n",grotte3.description);
		printf("Vous vous retrouvez face a la grotte\n");
	}
	if (strcmp(deplacement, "village")==0 || strcmp(deplacement, "Village")==0){
		printf("%s\n",village1.description);
		printf("Vous voici sur la place du village\n");
	}
}



int main(void){

	int lieuActuel = 1 ;

	
	
	deplac(lieuActuel);

	return 0;
}
