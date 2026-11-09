#include <stdio.h>
int produit(int a,int b){
	printf("le produit est : %d \n",a*b);
	return(a * b);
}

int moyenne(int a, int b)
{
	printf("La moyenne est : %d \n", (a + b)/2);
	return ((a + b)/2);
}
int	main()
{
	int	a,b;
	printf(" Projet Collaboratif \n");
	printf("Entrer premier entier: ");
        scanf("%d", &a);
        printf("Entrer deuxieme entier: ");
        scanf("%d", &b);
    	produit(a,b);
	moyenne(a,b);
	return 0;
}

