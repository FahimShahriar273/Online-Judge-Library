#include<iostream>
using namespace std;
int main(){

int n,k,t=240,cnt=0,sum=0;
cin>>n>>k;
t=t-k;
for(int i=1;i<=n;i++){
        sum=sum+(i*5);
        if(sum<=t)
            cnt++;
        else
            break;




}
cout<<cnt<<endl;



}
