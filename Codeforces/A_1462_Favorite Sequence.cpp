#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int  m=n-1;
        int ar[n] ;
        for (int i=0; i<n; i++)
            cin>>ar[i];
        int res[n];


        int a=0;
        int j=0;

test:
        if(j<n)
        {
            res[j]=ar[a];
            j++;
            res[j]=ar[m-a];
            j++;
            a++;
            goto test;
        }
        else
            {
                 for (int i=0; i<n; i++)
            cout<<res[i]<<" ";
        cout<<endl;

        }




    }



}
