#include<stfio.d>


int main(int argc, char const *argv[])
{
	int deplacement = 0

	printf("Voulez vous vous rendre au puit (1) ou la grotte (2)")
	scanf(%d, &deplacement)
	if (deplacement==1){
		printf("Vous vous rendez au puit du village\n");
	}
	if (deplacement==2){
		printf("Vous vous retrouvez face à la groo\n");
	}
	
	return 0;
}
