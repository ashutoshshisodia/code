//created by Ashutosh Shisodia on 14-05-2020
/*
    EFFECTIVE APPROACH
*/
#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,right = 0,left = 0;
    cin>>n,m;
    ll arr[n],freq[1000000]={0},freqleft[1000000] = {0},freqright[1000000]= {0};
    for(ll i =0;i < n; i++)
    {
        cin>>arr[i];
    }
    for(ll i =0;i < n; i++)
    {
        if(freqleft[arr[i]] == 0)
            freqleft[arr[i]] = i+1;
    }
    for(ll i =n-1;i >= 0; i--)
    {
        if(freqright[arr[i]] == 0)
            freqright[arr[i]] = n - i;
    }

    cin>>m;
    ll qq;
    set <int, greater <int> > query;
    for(ll i = 0;i < m;i++)
    {
        cin>>qq;
        freq[qq] = freq[qq] + 1;
        query.insert(qq);
    }
    set <int, greater <int> > :: iterator itr;
     for (itr = query.begin(); itr != query.end(); ++itr)
    {
        left += freqleft[*itr] * freq[*itr];
        right += freqright[*itr] * freq[*itr];
    }
    cout<<left<<" "<<right;

  return 0;
}
