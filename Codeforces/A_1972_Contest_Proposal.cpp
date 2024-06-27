#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,c=0;
        cin>>n;
        m=n+n;
        long long int a[n+n];
        int b[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        for (int i=n;i<n+n;i++)
            a[i]= 99999999999;
        for (int i=0;i<n;i++)
            cin>>b[i];

        for (int i=0;i<n;i++){
            if(a[i]>b[i])
            {
                a[n+c]=b[i];
                sort (a,a+m);
                c++;

            }

        }
        cout<<c<<endl;
        //for (int i=0;i<n+n;i++)
            //cout<<a[i]<<" ";
    }



}
