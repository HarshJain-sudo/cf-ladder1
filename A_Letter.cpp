#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
vector<string>ans;


void solve(){
	int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i =0;i<n;i++){
       for(int j = 0;j<m;j++){
        cin>>arr[i][j];
       }
    }
    long long mn_i=n,mx_i=-1,mx_j=-1,mn_j=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='*'){
                        if(i<mn_i)mn_i=i;
                        if(i>mx_i)mx_i=i;
                        if(j<mn_j)mn_j=j;
                        if(j>mx_j)mx_j=j;
                }
            }
        }
    for(int i = mn_i;i<=mx_i;i++){
        for(int j = mn_j;j<=mx_j;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	// int T=1;
	// // cin >> T;
	// while (T--) {
	// 	solve();
	// }
	solve();
	return 0;
}