#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        char a[n];
        cin>>a;
        int i=0;
        while(i<n)
        {
            if(a[i]=='U')
            {
                if(n>2)
                {
                    if(a[i+1]=='U')
                        a[i+1]='D';
                    else
                        a[i+1]='U';
                    if(a[n-1]=='U')
                        a[n-1]='D';
                    else
                        a[n-1]='U';
                }
                i++;

            }


        }





    }




}
