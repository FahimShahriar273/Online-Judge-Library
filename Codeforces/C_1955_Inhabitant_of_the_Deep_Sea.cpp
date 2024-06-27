#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i=0,cnt=0;
        cin>>n>>k;
        int ar[n];
        int a=n/2;
        int b=a+1;
        int j=n-1;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        if(n%2==1)
        {

            while(b--)
            {
                if(ar[i]!=0)
                    ar[i]=ar[i]-1;
                else
                {
                    i++;
                    ar[i]=ar[i]-1;
                }
            }

        }
        else
        {
            while(a--)
            {
                if(ar[i]!=0)
                    ar[i]=ar[i]-1;
                else
                {
                    i++;
                    ar[i]=ar[i]-1;
                }
            }

        }

        while(a--)
        {
            if(ar[j]!=0)
                ar[j]=ar[j]-1;
            else
            {
                j--;
                ar[j]=ar[j]-1;
            }
        }
        for(int i=0;i<n;i++)
            if(ar[i]==0)
            cnt++;
        cout<<cnt<<endl;




    }


}
