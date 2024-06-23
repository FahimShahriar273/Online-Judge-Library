#include<bits/stdc++.h>
using namespace std;




int main()
{

    int t;
    cin >>t;
    while(t--)
    {
        int n,i=0;
        cin>>n;
        int ar[n];
        for (int i =0; i<n; i++)
        {

            cin>>ar[i];

        }
        sort(ar,ar+n);
        //int p=0;
test:
        int c=1;
        for(i; i<n; i++)
        {
            if( ar[i]==ar[i+1])
                c++;
            else
            {
                i++;
                break;
            }




        }

        // p=p+c;
        if(i<n+1)
        {

            {
                if(c>2)
                {
                    cout<<ar[i-1]<<endl;

                }
                else
                    // cout<<"goto function:"<<endl;
                    goto test;
            }
        }


        // cout<<p<<endl;


    }



}
