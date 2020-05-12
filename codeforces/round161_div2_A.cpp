//created by Ashutosh Shisodia on 12-05-20
/*
    BEAUTIFUL MATRTIX
*/
#include<bits/stdc++.h>
typedef long long ll;
#define moot 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int arr[5][5],x,y,i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 1)
            {
                x = i+1;
                y = j+1;
            }
        }
    }
    int result = abs(x - 3) + abs(y - 3);
    cout<<result;

  return 0;
}
