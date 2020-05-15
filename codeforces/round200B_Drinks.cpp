//created by Ashutosh Shisodia on 14-05-20
/*
     Beautiful Year
*/
    //created by Ashutosh Shisodia on 15-05-2020
    #include<bits/stdc++.h>
    typedef long long ll;
    #define moot 1000000007

    using namespace std;

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int n;
        cin>>n;
        int x,totalPercentage = 0,den = n;
        while(n--)
        {
            cin>>x;
            totalPercentage += x;
        }
        // cout<<(float)totalPercentage / 3;
        cout<<fixed<<setprecision(6)<<(float)totalPercentage / den;
      return 0;
    }
