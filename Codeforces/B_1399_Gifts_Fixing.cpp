#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        long long int n,mina=999999999999,minb=999999999999,cnt=0;
        cin>>n;
        long long int a[n];
        long long int b[n];
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<mina)
                mina = a[i];
        }

        for (int i=0; i<n; i++)
        {
            cin>>b[i];
            if(b[i]<minb)
                minb = b[i];

        }
        for( int i=0 ; i<n; i++)
        {
            if(mina<a[i] && minb<b[i])
            {
               a[i]=a[i]-mina;
              b[i]= b[i]-minb;
             int x= min(a[i],b[i]);

                cnt=x;
            }
            if(mina<a[i] )
            {
                a[i]=a[i]-mina;
                cnt=cnt+a[i];
            }
            if( minb<b[i])
            {
                b[i]=b[i]-minb;
                cnt=cnt+b[i];
            }

        }


        cout<<cnt<<endl;



    }




}
