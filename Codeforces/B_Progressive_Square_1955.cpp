#include<bits/stdc++.h>
using namespace std;
int main(){
int n,c,b;
cin>>n>>c>>b;

int arr[n][n];
arr[0][0]=3;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    arr[i+1][j]=arr[i][j]+c;
    arr[i][j+1]=arr[i][j]+b;
    cout<<arr[i][j]<<" ";

}}




}
