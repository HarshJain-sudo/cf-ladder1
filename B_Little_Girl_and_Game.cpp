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

vector<vector<int>>dp(3001,vector<int>(3001,-1));
// int solver(int i ,int j , string &s){
//     if(i>=j){
//         return 0;
//     }
//     if(dp[i][j]!=-1)return dp[i][j];
//     if(s[i]==s[j]){
//        return dp[i][j] =  solver(i+1,j-1,s);
//     }
//     else{
//         return  dp[i][j] =  1 + min(solver(i+1,j,s),solver(i,j-1,s));
//     }
   
// }  

int longestPalindromeSubseq(string s) {
         string t = s;
        int n = s.length();
        reverse(s.begin(),s.end());
        int dp[n+1][n+1];
        for(int i =0;i<=n;i++){
            for(int j =0;j<=n;j++){
                if(i==0 || j ==0)dp[i][j]=0;
                
            }
        }
        for(int i =1;i<=n;i++){
            for(int j =1;j<=n;j++){
                if(s[i-1]==t[j-1])dp[i][j] =  dp[i-1][j-1]+1;
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                
            }
        }
        return dp[n][n];
    }
void solve() {
    string s;
    cin>>s;
    int ans = s.length()-longestPalindromeSubseq(s);
    if(ans%2){
        cout<<"Second"<<endl;
    }
    else{
        cout<<"First"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}