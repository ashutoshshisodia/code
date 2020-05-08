#include <iostream>
using namespace std;

// this function
// ->  moves the pivot element to
//     its right position where all the elements
//     to its right are smaller than it and
//     all the elements to its left are greater
//     than it.
// ->  return the index of correctly positioned pivot.
int partition(int arr[], int start, int end)
{
    // pivot element is taken as last element
    int pivot = arr[end];
    int low = start - 1;

    for(int i=start;i<end;i++)
    {
        if(arr[i] < pivot)
        {
            low++;
            int temp = arr[low];
            arr[low] = arr[i];
            arr[i] = temp;
        }
    }
    int temp = arr[low + 1];
    arr[low + 1] = arr[end];
    arr[end] = temp;
    return low+1;
}

// this function
// ->  sorts the left sub-array of pivot
// ->  sorts right sub-array ogf pivot
void quickSort(int arr[], int start, int end)
{
    if(start < end)
    {
        // array splits from "index" index in this step
        int index = partition(arr, start, end);
        cout<<index<<"\n";

        // sort elements before partition index
        quickSort(arr, start, index - 1);

        // sort elements after partition index
        quickSort(arr, index + 1, end);
    }
}

void arrOutput(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main() {
  int arr[] = {34,43,1,65,77,11,3,45};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<"Unsorted array is ->\n";
  arrOutput(arr,size);
  quickSort(arr, 0, size - 1);
  cout<<"\nSorted array is ->\n";
  arrOutput(arr,size);

  return 0;
}
