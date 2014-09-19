#include <iostream>
#include "Heap.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "RadixSort.h"
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
    int intArray[5] = { 23 , 8 , 1 , 6 , 10};
    //MergeSort(intArray,5);//执行排序
    merge_sort(intArray, 5);
    for( int i = 0; i < 5; i++)
        cout << intArray[i] << endl;

    int digit[] = {23, 45, 568, 679, 235, 555, 123, 785, 467, 290};

    cout << "Radix sort" << endl;
    RadixSort(digit, 10);

    return 0;
}