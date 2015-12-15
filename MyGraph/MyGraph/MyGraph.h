#include "MyLinkedList.h"
#include "MyStack.h"

template<class TYPE>
class MyGraph
{
public:
	template<typename TYPE>
	struct GraphNode
	{
		TYPE data;

		GraphNode(const TYPE& data) : data(data){ }
		MyLinkedList<GraphNode<TYPE>*> links;

		void AddLink(GraphNode<TYPE>* n)
		{
			links.PushBack(n);
		}
	};

	MyGraph(){ }
	MyGraph(const MyGraph&){}
	
	GraphNode<TYPE>* CreateNode(const TYPE data)
	{
		//ListNode<TYPE>* node = new ListNode<TYPE>(data);
		ListNode<GraphNode<TYPE>>* g = list.PushBack(data);
		
	
		return &g->data;
	}

	bool isReachableIterative(GraphNode<TYPE>* nodeToStart, GraphNode<TYPE>* nodeToReach)
	{
		if (nodeToStart == nodeToReach)
			return true;
		
		MyStack<GraphNode<TYPE>*> openStack;
		MyLinkedList<GraphNode<TYPE>*> closedList;

		GraphNode<TYPE>* g = NULL;
		GraphNode<TYPE>* gTmp = NULL;

		openStack.push_back(nodeToStart);

		ListNode<GraphNode<TYPE>*>* tmp;

		if (nodeToStart->links.start != NULL)
			tmp = nodeToStart->links.start;
		else
			return false;

		g = tmp->data;

		do
		{
			while (!g->links.Empty())
			{
				tmp = g->links.start;
				while (tmp == closedList.FindNode(tmp))
				{
					tmp = tmp->next;
				}
				g = tmp->data;

				openStack.push_back(g);

				if (g == nodeToReach)
				{
					return true;
				}
			
			}

			
			closedList.PushBack(g);

		} while (openStack.pop_back(g));

		return false;
	}

	MyLinkedList<GraphNode<TYPE>> list;
};