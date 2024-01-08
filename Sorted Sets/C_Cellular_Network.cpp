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
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    
    set<ll> cities;
    set<ll> towers;
    ll n, m; cin >> n >> m;
    for (ll i = 0; i < n; i++){
        ll city; cin >> city;
        cities.insert(city);
    }
    for (ll i = 0; i < m; i++){
        ll tower; cin >> tower;
        towers.insert(tower);
    }
    auto first = towers.begin();
    auto last = towers.end(); last--;
    ll maxdi = 0;
    for (auto aa: cities){ // find corresponding tower for each city
        auto it = towers.find(aa);
        if (it == towers.end()){
            if (aa > *last){
                maxdi = max(aa - *last, maxdi);
            }
            else if (*first > aa){
                maxdi = max(*first - aa, maxdi);
            }
            else {
                auto rightafter = towers.upper_bound(aa);
                auto before = rightafter--;
                ll findi = min(abs(aa - *before), abs(aa - *rightafter));
                maxdi = max(findi, maxdi);
            }
        }
        else {
            continue;
        }
    }
    cout << maxdi << "\n";
}