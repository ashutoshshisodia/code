//created by Ashutosh Shisodia on 14-05-20
/*
    Nearly Lucky Number
*/
#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,count = 0;
    cin>>n;
    while(n > 0)
    {
        if(n % 10 == 4 || n % 10 == 7)
            count++;
        n /= 10;
    }

    int flag = 0;
    while(count > 0)
    {
        if(count % 10 == 4 || count % 10 == 7)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
        count /= 10;
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";

  return 0;
}
