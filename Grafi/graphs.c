#include "graphs.h"

Graph* createGraph(int n)
{
	Graph* G;
	int i;
	
	G = (Graph*) malloc(sizeof(Graph));
	if(!G)			exit(-1);
	
	G->adj = (Edge**) malloc(n * sizeof(Edge*));
	
	if(!G->adj)
	{
		free(G);
		exit(-1);
	}
	
	G->n = n;
	
	for(i = 0; i < n; i++)		G->adj[i] = NULL;
	
	return G;
}

void printGraph(Graph* G)
{
	int i, edges;
	Edge* e;
	
	if(G)
	{
		printf("Il grafo ha %d nodi!\n", G->n);
		
		for(i = 0; i < G->n; i++)
		{
			printf("\nNodi adiacenti al nodo %d -> ", i);
			
			e = G->adj[i];
			
			while(e)
			{
				printf("%d, ", e->key);
				ne++;
				e = e->next;
			}
			
			printf("\n");
		}
		
		printf("\n\nIl grafo ha %d archi\n", ne);
	}
}

void addEdge(Graph* G, int v1, int v2)
{
	Edge* newEdge;
	Edge* e;
	
	if(!G)	return;
	if(v1 >= 0 && v1 < G->n  &&  v2 >= 0 && v2 < G->n)
	{
		e = G->adj[v1];
		
		while(e->next)
		{
			if(e->key == v2)	return;
			e = e->next;
		}
		
		if(e->key != v2)
		{
			newEdge = (Edge*) malloc(sizeof(Edge));
			if(!newEdge)	return;
			
			newEdge->key = v2;
			newEdge->next = NULL;
			
			e->next = newEdge;
		}
	}
}
