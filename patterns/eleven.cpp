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
    int val = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<val<<"\t";
            val++;
        }
        cout<<"\n";
    }

  return 0;
}
