#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long int n,sum=0;
    cin>>n;
    long long int ar[n];
    for (int i=0;i<n;i++){
        cin>>ar[i];
        sum=sum+ar[i];
    }
    long long int sr=sqrt(sum);
    if(sr*sr==sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



}




}
