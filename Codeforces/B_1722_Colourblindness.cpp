#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        string a;
        string b;
        cin>>a;
        cin>>b;
        for (int i =0; i<n; i++)
        {
            if(a[i]=='R')
            {
                if(b[i]=='R')
                    cnt++;
            }
            else
                if(b[i]!='R')
                    cnt++;



        }
    if (cnt==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    }

}
