#include "MyLinkedList.h"

template<class TYPE>
class MyGraph
{
public:
	struct GraphNode
	{
		TYPE data;

		GraphNode(const TYPE& data) : data(data){ }
		MyLinkedList<TYPE*> links;

		void AddLink(GraphNode* n)
		{
			links.PushBack(&n->data);
		}
	};

	MyGraph(){ }
	MyGraph(const MyGraph&){}
	
	GraphNode* CreateNode(const TYPE data)
	{
		//ListNode<TYPE>* node = new ListNode<TYPE>(data);
		ListNode<GraphNode>* g = list.PushBack(data);
		
	
		return &g->data;
	}

	bool isReachable(ListNode<GraphNode>* nodeToStart, ListNode<GraphNode>* nodeToReach)
	{
		

		if (nodeToStart == nodeToReach)
			return true;

		ListNode<GraphNode>* g = NULL;

		g = nodeToStart;

		while (g)
		{
			if (g == nodeToReach)
			{
				return true;
			}

			g = g->next;
		}

		for (int i = 0; i < )
			if (g == nodeToReach)
				return true;
			else
			{
				isReachable();
			}


	}



	MyLinkedList<GraphNode> list;
};