//stack.cpp
#include <iostream>
#include "stack.h"

Stack::Stack(int n)
{
	pitems = new Item[n];
	size_max = n;
	size = 0;
	top = -1;
}

Stack::Stack(const Stack& st)
{
	pitems = new Item[st.size_max];
	for(int i = 0; i < st.size_max; i++)
		pitems[i] = st.pitems[i];
	size_max = st.size_max;
	size = st.size;
	top = st.top;
}

Stack::~Stack()
{
	delete[] pitems;
	pitems = nullptr;
}

bool Stack::isempty() const
{
	return size <= 0;
}

bool Stack::isfull() const
{
	return size >= size_max;
}

bool Stack::push(const Item& item)
{
	if(size >= size_max)
		return false;	
	pitems[++top] = item;
	++size;
	return true;
}

bool Stack::pop(Item& item)
{
	if(size <= 0)
		return false;
	item = pitems[top--];
	--size;
	return true;
}

Stack& Stack::operator=(const Stack& st)
{
	if(this == &st)
		return *this;
	delete[] pitems;
	pitems = new Item[st.size_max];
	for(int i = 0; i < st.size_max; i++)
		pitems[i] = st.pitems[i];
	size_max = st.size_max;
	size = st.size;
	top = st.top;
	return *this;

	//or
	//return Stack(st);
}
