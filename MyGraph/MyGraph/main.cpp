#include "MyLinkedList.h"
#include "MyGraph.h"
#include <iostream>

int main(int argc, char** argv)
{
	
	MyGraph<int> graph;

	MyGraph<int>::GraphNode<int>* node_a = graph.CreateNode(1);
	MyGraph<int>::GraphNode<int>* node_b = graph.CreateNode(2);
	MyGraph<int>::GraphNode<int>* node_c = graph.CreateNode(3);
	MyGraph<int>::GraphNode<int>* node_d = graph.CreateNode(4);
	MyGraph<int>::GraphNode<int>* node_e = graph.CreateNode(5);


	node_a->AddLink(node_c);
	node_a->AddLink(node_b);
	node_b->AddLink(node_d);



	bool check = graph.isReachableIterative(node_a, node_e);

	getchar();
	return 0;
}