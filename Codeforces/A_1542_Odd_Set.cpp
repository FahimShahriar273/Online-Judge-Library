#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,Ecnt=0,Ocnt=0;
        cin>>n;
        int arr[n*2];
        for (int i =0; i<n*2; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
                Ecnt++;
            else
                Ocnt++;
        }


        if(Ecnt==Ocnt)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }

}
