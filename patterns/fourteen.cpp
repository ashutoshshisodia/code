//created by Ashutosh Shisodia on 23-05-20
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
    int spaces = n/2,stars = 1,val,sub=2;
    for(int i=0;i<n;i++)
    {
        val = i+1;
        if(i > n/2)
            {
                val = val - sub;
                sub += 2;
            }
        for(int j=0;j<spaces;j++)
            cout<<"\t";

        for(int j=0;j<stars;j++)
        {
            cout<<val<<"\t";
            if(j >= stars/2)
                val--;
            else
                val++;
        }

        for(int j=0;j<spaces;j++)
        cout<<"\t";
        if(i >= n/2)
        {
            spaces++;
            stars -= 2;
        }
        else
        {
            spaces--;
            stars += 2;
        }
        cout<<"\n";

    }

 return 0;
}
