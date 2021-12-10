//stack.cpp
#include <iostream>
#include "stack.h"

Stack::Stack(int n)
{
	pitems = new Item[n];
	size = 0;
	top = 0;
}

Stack::Stack(const Stack& st)
{
	int temp = sizeof st.pitems / sizeof st.pitems[0];
	pitems = new Item[temp];
	for(int i = 0; i < temp; i++)
		pitems[i] = st.pitems[i];
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
	return size >= MAX;
}

bool Stack::push(const Item& item)
{
	if(size >= MAX)
		return false;
	pitems[top++] = item;
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
	int temp = sizeof st.pitems / sizeof st.pitems[0];
	pitems = new Item[temp];
	for(int i = 0; i < temp; i++)
		pitems[i] = st.pitems[i];
	size = st.size;
	top = st.top;
	return *this;

	//or
	//return Stack(st);
}
