#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define vll vector<ll>
#define sll set<ll>
#define pb push_back
#define popb pop_back
#define pp pair
#define pll pp<ll, ll>
#define vpll vector<pll>
#define plll pp<pll, ll>
#define vplll vector<plll>
#define ff first
#define ss second

auto checkifthere(vll tocheck, ll val){
    auto ak = lower_bound(tocheck.begin(), tocheck.end(), val);
    if (*ak == val){
        return ak;
    }
    else{
        ak--;
        return ak;
    }
}

int main() {
    freopen("haybales.in", "r", stdin); // USACO
	freopen("haybales.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    ll n, q; cin >> n >> q;
    vll haybales(n); for (ll i = 0; i < n; i++){cin >> haybales[i];}
    sort(haybales.begin(), haybales.end());
    while (q--){
        ll a, b; cin >> a >> b;
        auto ak = lower_bound(begin(haybales), end(haybales), a);
        auto bk = upper_bound(begin(haybales), end(haybales), b);
        cout << bk - ak << endl;
    }
}
