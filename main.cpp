#include <iostream>
#include "Heap.h"
#include "QuickSort.h"
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
    h.Pop();
    cout << h.Top() << endl;
    h.Pop();
    cout << h.Top() << endl;
    h.Pop();
    cout << h.Top() << endl;
    h.Pop();
    cout << h.Top() << endl;
    cout << "OK" << endl;
/****************************************************/
    int k[] = {8,6,4,2,0,1,3,5,7,9,99};
    QuickSort(k,0,9);
    for(int i=0; i<11; i++)
        cout << k[i] << endl;

    return 0;
}