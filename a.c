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

void deplac(int * lieuActuel, defL* lieux){
	char deplacement[20]="vide";
	int i = 0;
	int i2 = 0;
	printf("Vous etes au/a la %s\nOu souhaitez vous aller ?\n", &lieux[*lieuActuel].nom);
	scanf("%s", &deplacement);
	while (strcmp(deplacement, lieux[i].nom)!=0 && i<4){
		i++;
	}
	if (i<4)
	{
		while (lieux[*lieuActuel].acces[i2]!=i && i2<4)
		{
			i2++;
		}
		if (i2<4 ){
			*lieuActuel=i;
			printf("%s\n",lieux[*lieuActuel].description);
		}
		else {
			printf("Vous n'avez pas acces a ce lieu depuis la ou vous etes\n");
			deplac(lieuActuel, lieux);
		}
	}else{
		printf("Ce lieu n'existe pas\n");
		deplac(lieuActuel, lieux);
	}



int main(void){

	int lieuActuel = 0 ;

	defL village0 = {"Village", "Village de bonvivre, vous y connaissez tous les habitants", 1, {1}};
	defL puit1 = {"Puit", "Vieux puit aux diverses croyances, tout y est paisible", 4, {0, 2}};
	defL grotte2 = {"Grotte", "Grotte mystique, personne ne s'y est encore aventure", 8, {0, 1}};

	defL lieux[3] = {village0, puit1, grotte2};
	
	while(1){
	deplac(&lieuActuel, lieux);
	}

	return 0;
}
