#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define vll vector<ll>
#define pb push_back
#define popb pop_back
#define pp pair
#define pll pp<ll, ll>
#define vpll vector<pll>
#define plll pp<pll, ll>
#define vplll vector<plll>
#define ff first
#define ss second
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
    ll n, m; cin >> n >> m;
    ll res = 0;
    vll b(n); for (ll i = 0; i < n; i++){cin >> b[i]; res+=b[i];};
    vll g(m); for (ll i = 0; i < m; i++){cin >> g[i];};
    sort(b.begin(), b.end());
    sort(g.begin(), g.end());
    res*=m;
   if (b[n-1] > g[0]){
        cout << "-1\n";
    }
    else{
        for (int i = 1; i < m; i++){
            res += g[i] - b[n-1];
        }
        
        if (g[0] != b[n-1]){
            res+=g[0]-b[n-2];
        }
        cout << res << "\n";
    }
    return 0;
}