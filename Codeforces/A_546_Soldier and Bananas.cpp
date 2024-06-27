#include<iostream>
using namespace std;

int main(){
long long int k,n,w,sum=0;

cin>>k>>n>>w;

for (int i=1;i<=w ; i++){
    sum=sum+(i*k);
}
if(sum<= n){
		cout <<0<<"\n";
	}
	else cout << sum - n << "\n";




}
