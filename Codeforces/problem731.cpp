#include<iostream>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int n=0,initial=97,sum=0,cnt=0;
    for(int i =0; s[i]!='\0'; i++)
    {
        n++;
    }



    for(int i = 0; i<n; i++)
    {

        sum=abs((initial-s[i]));
        if (sum>13)
        {
            sum=26-sum;
            cnt+=sum;
            initial= s[i];
        }
        else
        {
            cnt+=sum;
            initial= s[i];

        }

    }
    cout<<cnt<<endl;



}
