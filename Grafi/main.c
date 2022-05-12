#include <stdio.h>
#include <stdlib.h>
#include "graphs.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Graph* G = createGraph(5);
	int k1, k2;
	
	do
	{
		printf("Inserire il 1^ nodo dell'arco: ");
		fflush(stdin);
		scanf("%d", &k1);
		
		printf("Inserire il 2^ nodo dell'arco: ");
		fflush(stdin);
		scanf("%d", &k2);
		
		addEdge(G, k1, k2);
	}
	while(k1 < 0 || k1 >= G->n  ||  k2 < 0 || k2 >= G->n);
	
	printGraph(G);
	
	return 0;
}
