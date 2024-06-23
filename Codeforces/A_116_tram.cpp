#include<iostream>
using namespace std;
int main()
{

int n,m=0,c=0;
cin>>n;
while(n--){
   // int c=0;
    int a,b;
    cin>>a>>b;
    c=c-a;
    c=c+b;
    cout<<"remainder: "<<c<<endl;
    if(m<c)
        m=c;

}
cout<<m<<endl;
}
