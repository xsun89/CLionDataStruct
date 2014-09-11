#ifndef _MAX_HEAP_
#define _MAX_HEAP_

template <class T>
class MaxHeap
{
public:
    MaxHeap(int mx = 10);
    virtual ~MaxHeap();
    bool IsEmpty();
    void Push(const T&);
    void Pop();
    const T& Top() const ;
private:
    T* heapArray;
    int maxSize;
    int currentSize;

    void trickleUp(int index);
    void trickleDown(int index);
};

template <class T>
MaxHeap<T>::MaxHeap(int mx)
{
    if(mx < 1)
        throw "max size must be >= 1";
    maxSize = mx;

    heapArray = new T[maxSize];
    currentSize = 0;
}

template <class T>
MaxHeap<T>::~MaxHeap()
{
    delete[] heapArray;
}

template <class T>
bool MaxHeap<T>::IsEmpty()
{
    return currentSize==0;
}

template <class T>
void MaxHeap<T>::Push(const T& e)
{
    if(currentSize == maxSize)
        throw "MaxHeap id full";

    heapArray[currentSize] = e;
    trickleUp(currentSize++);
}

template <class T>
void MaxHeap<T>::trickleUp(int index)
{
    int parent = (index -1)/2;
    T bottom = heapArray[index];
    while(index > 0 && heapArray[parent] < bottom)
    {
        heapArray[index] = heapArray[parent];
        index = parent;
        parent = (parent-1)/2;
    }
    heapArray[index] = bottom;
}

template <class T>
const T& MaxHeap<T>::Top() const
{
    return heapArray[0];
}

template <class T>
void MaxHeap<T>::trickleDown(int index)
{
}

#endif