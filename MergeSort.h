#include <iostream>
using namespace std;
template <class T>
void Merge(T a[], int left, int center, int right, int n)
{
    T *t = new T[n];//存放被排序的元素
    int i = left;
    int j = center + 1;
    int k = 0;
    //合并数组，用插入排序，如果左边大就插入左边的数，右边的计数器等待，与下一个左边的数比较；右边大就插入右边的数，左边的计数器等待，与下一个右边的数比较（这里指的插入是插入到新数组t[]）
    while (i<=center && j<=right)
    {
        if (a[i] <= a[j])
            t[k++] = a[i++];
        else
            t[k++] = a[j++];
    }
    //上面的步骤在执行完后，左或右边都有可能剩余若干个元素，而另一边的元素肯定已全部复制到新数组，这时需要特殊对待剩下的元素
    if (i == center+1)
    {
        while (j <= right)
            t[k++] = a[j++];
    }
    else
    {
        while (i <= center)
            t[k++] = a[i++];
    }
    //把t[]的元素复制回a[]中left到right段
    for (i=left,k=0; i<=right; i++,k++)
        a[i] = t[k];
    //释放内存
    delete []t;
}
template <class T>
void MSort(T a[], int left, int right)
{
    if (left < right)
    {
        int center = (left + right) / 2;//取得中点
        //将原来序列分为两段
        MSort(a, left, center);
        MSort(a, center+1, right);
        //合并刚才分开的两段，得到原来序列的有序序列
        Merge(a, left, center, right, right-left+1);
    }
}

template <class T>
void MergeSort(T a[], int n)
{
    //调用递归归并排序函数
    MSort(a, 0, n-1);
}


