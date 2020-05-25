#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int st=1,spaces=2*n-3;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((j <= n/2 || j==n-1) && i==0)
                cout<<"*\t";
            else if(i == n/2)
                cout<<"*\t";
            else if((j >= n/2 || j==0) && i==n-1)
                cout<<"*\t";
            else if((i < n/2) && (j == n/2 || j==n-1))
                cout<<"*\t";
            else if((i > n/2) && (j == n/2 || j==0))
                cout<<"*\t";
            else
                cout<<"\t";

        }
        cout<<"\n";
    }

  return 0;
}
