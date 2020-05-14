//created by Ashutosh Shisodia on 14-05-20
/*
     Beautiful Year
*/
#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;

bool distinct_digits(int x)
{

    int check[10] = {0};
    while(x > 0)
    {
        if(check[x % 10] == 1)
            return 1;
        check[x % 10] = 1;
        x = x / 10;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int year;
    cin>>year;
    int current_year = year + 1;
    while(distinct_digits(current_year))
    {
        current_year += 1;
    }
    cout<<current_year;

  return 0;
}
