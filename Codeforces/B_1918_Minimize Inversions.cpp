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
        int ar1[n];
        int ar2[n];
        for (int i =0; i<n; i++)
        {
            cin>>ar1[i];

        }
        for (int i =0; i<n; i++)
        {
            cin>>ar2[i];

        }

        for (int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(ar1[i]>ar1[j])
                {
                    int tmp=ar1[i];
                    ar1[i]=ar1[j];
                    ar1[j]=tmp;
                    int tmp2=ar2[i];
                    ar2[i]=ar2[j];
                    ar2[j]=tmp2;
                }
            }
        }

        for (int i =0; i<n; i++)
        {
            cout<<ar1[i]<<" ";

        }
        cout<<endl;
        for (int i =0; i<n; i++)
        {
            cout<<ar2[i]<<" ";

        }
        cout<<endl;





    }




}
