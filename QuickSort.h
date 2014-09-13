#include <iostream>

using namespace std;

template<class T>
void QuickSort(T *a, const int left, const int right) {

        if(left > right)
            return;
        //选枢轴
        int i = left;
        int j = right+1; //为什么要加一?
        int pivot = a[left];

        //划分算法
        do{
            do j--; while(a[j]>pivot && i<j);
            do i++; while(a[i]<pivot && i<j);
            if(i<j) swap(a[i],a[j]);
        }while(i<j);
        swap(a[left],a[j]);

        //递归
        QuickSort(a,left,j-1);
        QuickSort(a,j+1,right);


};