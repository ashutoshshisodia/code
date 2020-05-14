//created by Ashutosh Shisodia on May 12th.
/*
                MAXIMUM SUBARRAY SUM in 3 different
                        time complexities
*/
#include<bits/stdc++.h>

using namespace std;

// time complexity : O(n³)
int maxSubArraySum_1(int arr[],int n)
{
    int sum,maxSum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i ; j < n; j++)
        {
            sum = 0;
            for(int k = i ; k <= j ; k++)
            {
                sum += arr[k];
            }
            maxSum = max(sum,maxSum);
        }
    }
    return maxSum;
}

// time complexity : O(n²)
int maxSubArraySum_2(int arr[],int n)
{
    int maxSum = 0,sum;
    for(int i = 0 ; i < n ; i++)
    {
        sum = 0;
        for(int j = i ; j < n ; j++)
        {
            sum += arr[j];
            maxSum = max(maxSum,sum);
        }
    }
    return maxSum;
}

// time complexity : O(n)
int maxSubArraySum_3(int arr[],int n)
{
    int maxSum = 0,sum=0;
    for(int i = 0 ; i < n ; i++)
    {
        sum = max(arr[i] , arr[i] + sum);
        maxSum = max(maxSum,sum);
    }
    return maxSum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int arr[] = {-1,3,4,-2,-3,6,-1,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum sub-array sum using algo-1 is: "
    <<maxSubArraySum_1(arr,size);
    cout<<endl; //slower than "\n"
    cout<<"Maximum sub-array sum using algo-2 is: "
    <<maxSubArraySum_2(arr,size);
    cout<<endl;
    cout<<"Maximum sub-array sum using algo-3 is: "
    <<maxSubArraySum_3(arr,size);
    return 0;
}
