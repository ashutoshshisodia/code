//created by Ashutosh Shisodia on 14-05-20
/*
     Panoramix's Prediction
*/
#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;

vector <int> result;

void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }


    for (int p=2; p<=n; p++)
       {
           if (prime[p])
           result.push_back(p);
       }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    SieveOfEratosthenes(50);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<result.size();i++)
    {
        if(result[i] == n)
        {
            if(result[i+1] == m)
                cout<<"YES";
            else
                cout<<"NO";
            break;
        }
    }

  return 0;
}
