#include<iostream>
#include<cstring>
#include<string>

using namespace std;
int main(){

string a;
cin>>a;
int n,u=0,l=0;
 n= a.size();
for ( int i =0; i<n ; i++){
    if(a[i]>='A' && a[i]>='Z')
        u++;
    else
        l++;
    }
if(u>l){
    for ( int i =0; i<n ; i++)
     putchar(toupper(a[i]));
     cout<<a<<endl;}
else{
    for ( int i =0; i<n ; i++)
    putchar ( tolower(a[i]));
    cout<<a<<endl;}

}

