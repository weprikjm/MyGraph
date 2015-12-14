#include "MyLinkedList.h"
#include "MyGraph.h"
#include <iostream>

int main(int argc, char** argv)
{
	
	MyGraph<int> graph;

	MyGraph<int>::GraphNode* node_a = graph.CreateNode(1);
	MyGraph<int>::GraphNode* node_b = graph.CreateNode(2);
	MyGraph<int>::GraphNode* node_c = graph.CreateNode(3);
	MyGraph<int>::GraphNode* node_d = graph.CreateNode(4);


	node_a->AddLink(node_b);
	node_b->AddLink(node_a);

	//graph.ReachNode();

	getchar();
	return 0;
}