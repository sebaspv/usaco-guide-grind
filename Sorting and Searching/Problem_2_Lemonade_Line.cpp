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
    freopen("lemonade.in", "r", stdin); // USACO
	freopen("lemonade.out", "w", stdout);

    ll n; cin >> n;
    vll w(n); for (ll i = 0; i < n; i++){cin >> w[i];}
    vll setting;
    sort(w.begin(), w.end());
    reverse(w.begin(), w.end());
    for (auto aa: w){
        if (setting.size() > aa){
            continue;
        }
        else {
            setting.pb(aa);
        }
    }
    cout << setting.size();
    return 0;
}