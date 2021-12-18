//queuetp.h
#ifndef __QUEUETP_H__
#define __QUEUETP_H__
template<class T>

class QueueTp
{
	private:
		enum {Max = 10};//default limit
		int top;
		int size;
		int max;
		T* data;
	public:
		QueueTp(int n = Max);
		QueueTp(QueueTp<T>& p);
		~QueueTp();
		bool isempty() const;
		bool isfull();
		bool push(const T& t);
		bool pop(T& t);
		QueueTp<T>& operator=(QueueTp<T>& p);
};

template<class T>
QueueTp<T>::QueueTp(int n)
{
	top = 0;
	size = 0;
	max = n;
	data = new T[max];
}

template<class T>
QueueTp<T>::QueueTp(QueueTp<T>& p)
{
	top = p.top;
	size = p.size;
	max = p.max;
	data = new T[max];
	for (int i = 0; i < max; i++)
		data[i] = p.data[i];
}

template<class T>
QueueTp<T>::~QueueTp()
{
	delete[] data;
}

template<class T>
bool QueueTp<T>::isempty() const
{
	return size <= 0;
}
template<class T>
bool QueueTp<T>::isfull()
{
	return size >= max;
}
template<class T>
bool QueueTp<T>::push(const T& t)
{
	if (size >= max)
		return false;
	data[top++] = t;
	++size;
	return true;
}

template<class T>
bool QueueTp<T>::pop(T& t)
{
	if (size <= 0)
		return false;
	t = data[top--];
	--size;
	return true;
}

template<class T>
QueueTp<T>& QueueTp<T>::operator=(QueueTp<T>& t)
{
	if (this == &t)
		return *this;
	delete[] data;
	max = t.max;
	top = t.max;
	size = t.size;
	data = new T[max];
	for (int i = 0; i < max; i++)
		data[i] = t.data[i];
}
#endif
