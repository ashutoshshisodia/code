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
    int spaces = 1,stars = n/2 + 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i == j)
                cout<<"*\t";
            else
                cout<<"\t";
        }
        cout<<"\n";
    }

  return 0;
}
