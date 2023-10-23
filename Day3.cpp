#include<iostream>
#include<vector>
using namespace std;


int partition(vector<int> &a, int start, int end)
{
    int pivot = start;
    while(1==1)
    {
        while(start <= end && a[start] <= a[pivot])
            start ++;
        while(start <= end && a[end] > a[pivot])
            end--;
        if(start < end)
            swap(a[start], a[end]);
        else    
            break;
    }
    swap(a[pivot], a[end]);
    return end;
}

void quickSort(vector<int> &arr, int start, int end)
{
    if(start < end)
    {
        int p =partition(arr,start,end);
        quickSort(arr, start, p-1);
        quickSort(arr, p+1, end);
    }
    
}


int main()
{


    vector<int> a = {2,0,2,1,1,0};
    quickSort(a, 0, 5);
    for(int x:a)
        cout << x << " ";
    cout << endl; 
    return 0;
}