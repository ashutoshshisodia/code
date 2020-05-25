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
    int first=0,second=1;
    if(n==1)
        cout<<first;
    else if(n == 2)
    {
        cout<<first<<"\n";
        cout<<second<<"\t"<<first+second;
    }
    else{
        cout<<first<<"\n";
        cout<<second<<"\t"<<first+second<<"\n";
        int temp;
        temp = first+second;
        first = second;
        second = temp;

        for(int i=3;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                temp = first+second;
                cout<<temp<<"\t";
                first = second;
                second = temp;
            }
            cout<<"\n";
        }

    }


  return 0;
}
