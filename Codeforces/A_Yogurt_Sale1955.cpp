#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int a,b,c,p;
        cin>>a>>b>>c;
        float d=c/2;
        if(d<b*1.0)
        {
            int x=a/2;
            if(a%2==1)
                p=(x*c)+b;
            else p=x*c;

        }
        else
            p=b*a;

        cout<<p<<endl;
    }



}
