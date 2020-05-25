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
    for(int i=n;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }

  return 0;
}
