#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,fsum,i,j,k;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++)
        cin>>arr1[i];
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++)
        cin>>arr2[i];
    int carry = 0,maxx = max(n1,n2);
    int sum[maxx + 1]={0};
    i=n1-1,j=n2-1,k=maxx;
    while(i >= 0 && j >= 0)
    {
        fsum = arr1[i] + arr2[j] + carry;
        sum[k] = (fsum) % 10;
        carry = fsum / 10;
       i--;
       j--;
       k--;
    }
    
    while(i>=0)
    {
        fsum = arr1[i] + carry;
        sum[k] = (fsum) % 10;
        carry = fsum / 10;
        i--;
        k--;
    }
     while(j>=0)
    {
        fsum = arr2[j] + carry;
        sum[k] = (fsum) % 10;
        carry = fsum / 10;
        j--;
        k--;
    }
    /*
    1 1 1 1 1 1
      3 1 0 7 5
    */
    if(sum[0] != 0)
        cout<<sum[0]<<"\n";
    for(int q=1;q<=maxx;q++)
        cout<<sum[q]<<"\n";
    return 0;
}