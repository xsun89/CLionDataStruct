#include <iostream>
#include "Heap.h"
using namespace std;

int main()
{
    MaxHeap<int> h(100);
    cout <<h.IsEmpty() << endl;
    h.Push(20);
    h.Push(30);
    h.Push(15);
    cout << h.Top() << endl;
    h.Push(90);
    h.Push(35);
    cout << h.Top() << endl;

    return 0;
}