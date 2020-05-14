//created by "Ashutosh Shisodia" on 09-05-2020
#include<bits/stdc++.h>
#define moot 1000000007

using namespace std;

bool binarySearch(int arr[],int n,int x)
{
    int i=0,j=n,mid;
    while(i < j)
    {
        mid = (i+j)/2; //index of middle element
        if(arr[mid] == x)
        {
            return true;
        }
        if(x < arr[mid])
            j = mid-1;
        else
            i=mid+1;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int arr[] = {4,6,8,76,545,35,74};
    int n = sizeof(arr) / sizeof(arr[0]);

    //STL function for sorting the array
    sort(arr, arr + n);

    cout<<"Number "<<76<<" is found: "<<binarySearch(arr,n,76);
    return 0;
}
