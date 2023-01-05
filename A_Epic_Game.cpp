#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,n;
    cin>>a>>b>>n;
    int num = a;
    int k =0;
    while(__gcd(num,n)<=n){
       n-=num;
       if(k%2==0){
        num = b;
       }
       else{
        num = a;
       }
       k++;
    }
    // cout<<k<<endl;
    if(k%2){
        cout<<"0";
    }
    else{
        cout<<"1";
    }
    cout<<endl;
}