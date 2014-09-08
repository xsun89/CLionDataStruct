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

#endif