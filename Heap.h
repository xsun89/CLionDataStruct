#ifndef _MAX_HEAP_
#define _MAX_HEAP_

template <Type T>
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
    if(currentSize == maxSize)
        throw "alread reach max";
    maxSize = mx;
    heapArray = new T[maxSize];
}

template <class T>
MaxHeap<T>::~MaxHeap()
{
    delete[] heapArray;
}


#endif