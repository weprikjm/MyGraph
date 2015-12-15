#ifndef __MYSTACK_H__
#define __MYSACK_H__

#include "Defs.h"


template <class TYPE>
class MyStack
{
public:

	TYPE* data = NULL;
	int numElements = 0;
	int capacity = BLOCK;

	MyStack()
	{
		data = new TYPE[capacity];
	}
		
	MyStack(uint size) 
	{
		capacity = BLOCK * ((size / BLOCK) + 1);
		data = new TYPE[capacity];
	}

	bool empty()
	{
		return numElements == 0;
	}

	uint size()
	{
		return numElements;
	}

	const TYPE* back()
	{
		return data[(numElements - 1)];
	}

	void push_back(const TYPE& element)
	{
		if (numElements == capacity)
		{
			uint newSize = capacity += BLOCK;
			TYPE* tmp = new TYPE[newSize];

			memcpy(tmp, data, numElements * sizeof(TYPE));
			delete[] data;
			data = tmp;
		}
		data[numElements++] = element;
			
	}

	bool pop_back(TYPE& buffer)
	{
		bool ret = false;

		if (numElements > 0)
		{
			buffer = data[--numElements];
			ret = true;
		}
		return ret;
	}
	

	void CleanUp()
	{
	
	}



};
#endif


