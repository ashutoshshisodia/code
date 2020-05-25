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
    int inner_spaces = 1,outer_spaces = (n/2)-1;
    for(int i=0;i<n;i++)
    {
        if(i == 0 || i == n-1)
        {
            for(int j=0;j<n/2;j++)
                cout<<"\t";
            cout<<"*\t";
        }
        else
        {
            for(int j=0;j<outer_spaces;j++)
                cout<<"\t";
            cout<<"*\t";
            for(int j=0;j<inner_spaces;j++)
                cout<<"\t";
            cout<<"*\t";
            if(i >= n/2)
            {
                inner_spaces-=2;
                outer_spaces++;
            }
            else
            {
                inner_spaces+=2;
                outer_spaces--;
            }
        }
        cout<<"\n";
    }

  return 0;
}
