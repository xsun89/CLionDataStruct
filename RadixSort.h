#include <iostream>
#include <list>
using namespace std;

int getMaxDigit(int *t, int n)
{
    int digit = 1;
    int i;
    int factor = 10;
    int divided = 1;
    for(i=0; i<n; i++)
    {
        divided = t[i] / factor;
        while(divided > 0) {
            if (t[i] / factor > 0) {
                digit++;
            }
            factor = factor * 10;
            divided = t[i] / factor;
        }
    }

    return digit;
};

void RadixSort(int *t, int n)
{
    int i, j;
    int d=1;
    int k=0;
    int maxDigit = getMaxDigit(t, n);
    int* temp = new int[n];
    list<int> *myList = new list<int>[n];
    for(i=0; i<n;i++)
    {
        temp[i] = t[i];
    }
    for(j=1; j<=maxDigit; j++) {
        for (i = 0; i < n; i++) {
            myList[(temp[i]/d)%10].push_back(temp[i]);
        }
        i=0;
        for(k=0; k<n; k++) {
            while (!myList[k].empty()) {
                temp[i++] = myList[k].front();
                myList[k].pop_front();
            }
        }
        cout << "print results" << endl;
        for(i = 0; i<n; i++) {
            cout << temp[i] << " ";
        }
        cout << endl;
        d = d * 10;
    }
};
