//created by Ashutosh Shisodia on 12-05-20
/*
    YOUNG PHYSICIST
*/
#include<bits/stdc++.h>
typedef long long ll;
#define moot 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,sumx=0,sumy=0,sumz=0;
    cin>>n;
    while(n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        sumx += x;
        sumy += y;
        sumz += z;
    }
    if(sumx == sumy && sumy == sumz && sumz == 0)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";

  return 0;
}
