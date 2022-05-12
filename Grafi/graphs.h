#ifndef _GRAPHS_H_
#define _GRAPHS_H_

#include <stdio.h>
#include <stdlib.h>

/* ----------------------- DATA TYPES -------------------------- */
typedef struct list
{
	int key;
	struct list *next;
}
Edge;

//typedef int Edge;

typedef struct graph
{
	int n;
	Edge** adj;
}
Graph;


/* ----------------------- FUNCTIONS -------------------------- */
// verificare se un grafo è aciclico
// inserimento in un grafo
// trasposto di un grafo
Graph* createGraph(int n);
Graph* addVertice(Graph* G);
void addEdge(Graph* G, int v1, int v2);
Graph* removeVertice(Graph* G);
void removeEdge(Graph* G);
void freeGraph(Graph* G);
int numVertices(Graph* G);
int numEdges(Graph* G);
void endVertices(Graph* G, int* v1, int* v2);
int verticeGrade(Graph* G, int v);
int complete(Graph* G);
int stronglyConnected(Graph* G);
void printGraph(Graph* G);

#endif
