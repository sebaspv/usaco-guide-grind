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
  //freopen("file.in", "r", stdin); // USACO
  //freopen("file.out", "w", stdout);
  ll n; cin >> n;
  vll a(n); for (ll i = 0; i < n; i++){cin >> a[i];}
  vll b(n); for (ll i = 0; i < n; i++){cin >> b[i];}
  vll c(n);
  for (ll i = 0; i < n; i++){
    c[i] = a[i] - b[i];
  }
  sort(c.begin(), c.end());
  ll ans = 0;
  for (ll i = 0; i < n; i++){
    if (c[i] <= 0){
        continue;
    }
    else if (c[i] > 0){
        ll j = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
        ans+=(i - j);
    }
  }
  cout << ans << endl;
}