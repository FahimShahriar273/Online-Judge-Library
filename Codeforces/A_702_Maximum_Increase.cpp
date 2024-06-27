#include<iostream>
using namespace std;
int main()
{
    int n,cnt=1,result=0;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
        cin>> arr[i];

    for (int i=0; i<n; i++)
    {
        if(i<n-1)
        {
            if(arr[i]<arr[i+1])
                cnt++;
            else
            {
                if(cnt>result)
                    result=cnt;

                cnt=1;

            }

        }

    }
    if (result<cnt)
    cout<<cnt<<endl;
    else
    cout<<result<<endl;


}

