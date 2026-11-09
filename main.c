#include <stdio.h>
int produit(int a,int b){
	printf("entrer les deux entiers\n");
	scanf("%d %d",&a,&b);
	return a*b;
}
int	main()
{
	int a,b;
	printf(" Projet Collaboratif \n");
    printf("le produit est %d \n",produit(a,b));
	return 0;
}

