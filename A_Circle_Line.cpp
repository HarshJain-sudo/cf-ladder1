#include <bits/stdc++.h>
using namespace std;
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
int dx[]={1,0,0,-1,1,-1,1,-1}; 
int dy[]={0,-1,1,0,1,-1,-1,1};  
void solve() {
 int n;
 cin>>n;
 int arr[n];
 for(int i =0;i<n;i++)cin>>arr[i];
 int start ,end;
 cin>>start>>end;
 int a[n+1];
 a[0]=0;
 cout<<"0"<<" ";
 for(int i =1;i<=n;i++){
    a[i] = a[i-1]+arr[i-1];
    cout<<a[i]<<" ";
 }
 cout<<endl;
 int form_start = abs(a[end-1]-a[start-1]);
 int from_end =  abs(a[start-1]-a[n]) + a[end-1];
 cout<<from_end<<endl;
 cout<<min(from_end,form_start)<<endl;
    
}
// 2 3 4 9
// 1 3
// 0 2 5 9 18
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}