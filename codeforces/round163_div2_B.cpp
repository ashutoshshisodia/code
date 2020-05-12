//created by Ashutosh Shisodia on 12-05-20
/*
        Queue at the School
*/
#include<bits/stdc++.h>
typedef long long ll;
#define moot 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,t;
    // t-> time, n -> no. of students in row
    cin>>n>>t;
    string queueOfStudents;
    cin>>queueOfStudents;
    while(t--)
    {
        for(int i=0;i<n-1;i++)
        {
            if(queueOfStudents[i] == 'B' && queueOfStudents[i+1] == 'G')
            {
               // char s = queueOfStudents[i];
               // queueOfStudents[i] = queueOfStudents[i+1];
               // queueOfStudents[i+1] = s;
               // above code works too.
               swap(queueOfStudents[i],queueOfStudents[i+1]);
                i++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<queueOfStudents[i];
    }

  return 0;
}
