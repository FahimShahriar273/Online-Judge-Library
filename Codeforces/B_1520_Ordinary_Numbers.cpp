#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,cnt=0;
        cin>>n;


        if (n<10)
        {
            cnt=n;

        }
        else if (n<100)//2
        {
            cnt=(n/11)+9;
        }
        else if (n<1000)//3
        {
            cnt=(n/111)+18;
        }
        else if (n<10000)//4
        {
            cnt=(n/1111)+27;
        }
        else if (n<100000)//5
        {
            cnt=(n/11111)+36;
        }
        else if (n<1000000)//6
        {
            cnt=(n/111111)+45;
        }
        else if (n<10000000)//7
        {
            cnt=(n/1111111)+54;
        }
        else if (n<100000000)//8
        {
            cnt=(n/11111111)+63;
        }
        else if (n<1000000000)//9
        {
            cnt=(n/111111111)+72;
        }
        else if (n<10000000000)//9
        {
            cnt=(n/1111111111)+81;
        }





        cout<<cnt<<endl;



    }




}
