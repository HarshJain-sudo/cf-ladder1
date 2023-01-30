#include<bits/stdc++.h>
using namespace std;


void solver(){
    long long w,d,h,a,b,f,g;
    cin>>w>>d>>h>>a>>b>>f>>g;
    int ans1 = a + h + f + abs(b-g);
    int ans2 = abs(w-a) + h + abs(w-f) + abs(b-g);
    int ans3 = b + h + g + abs(a-f);
    int ans4 = abs(d-b) + h + abs(d-g) + abs(a-f);
    int smallans1 = min(ans1,ans2);
    int smallans2 = min(ans3,ans4);
    cout<<min(smallans1,smallans2)<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    } 
}

