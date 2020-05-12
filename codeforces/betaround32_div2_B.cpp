//created by Ashutosh Shisodia on 12-05-20
/*
        BORZE
*/
#include<bits/stdc++.h>
typedef long long ll;
#define moot 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string code;
    cin>>code;
    int n = code.size();
    vector <int> decoded;
    for(int i=0;i<n;i++)
    {
        if(code[i] == '-' && code[i+1] == '.')
            {
                decoded.push_back(1);
                i++;
            }
        else if(code[i] == '-' && code[i+1] == '-')
            {
                decoded.push_back(2);
                i++;
            }
        else
            decoded.push_back(0);
    }
    for(int i=0;i<decoded.size();i++)
        cout<<decoded[i];

  return 0;
}
