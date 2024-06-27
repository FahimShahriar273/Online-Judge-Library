#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,f,tcnt=0,fcnt=0;
    cin>>t>>f;
    long long int arr [t];
    for (int i=0; i<t; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+t);
    for (int i=t-1; i>=0; i--)
    {
        if(fcnt<f)
        {
            fcnt+=arr[i];
            tcnt++;
        }



    }
    if(fcnt>=f)
        cout<<tcnt<<endl;
    else
        cout<<"Shombhob na"<<endl;


}


