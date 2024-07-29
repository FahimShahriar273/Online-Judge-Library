#include<iostream>
using namespace std;
int main()
{
    int t,k,cnt=0;;
    cin>>t>>k;
    int arr[t];
    for ( int i=0; i<t; i++)
    {
        cin>>arr[i];

    }

    for ( int i=0; i<t; i++)
    {

        if(arr[i]>0 && arr[i]>=arr[k-1] )
        {
            cnt++;

        }
    }

    cout<<cnt<<endl;




}
