
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
      int  m=n-1;
       string s;
       cin>>s;
       for(int i=0;i<1;i++)
       {
          int a=0;
    test: if((s[a]=='0'&&s[m-a]=='1')||(s[a]=='1'&&s[m-a]=='0'))
          {
              a++;
              goto test;
          }
          else{
                if((n-(2*a))>0)
                {
                     cout<<n-(2*a)<<endl;

                }
                else
                cout<<"0"<<endl;
          }

       }


   }



}
