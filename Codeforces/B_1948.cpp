#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int s,a,b,cnt=0;
    cin>>s;
    int arr[s];
    int temp;
    for (int i =0; i<s;i++){
        cin>>arr[i];}

     for (int i =0; i<s;i++){ //
        if(arr[i]>=10){
            a=arr[i]/10;
            temp=a;
            b=arr[i]%10;
           if(temp<b){
              cnt++;
           temp=b;

           }




    }}







}




}
