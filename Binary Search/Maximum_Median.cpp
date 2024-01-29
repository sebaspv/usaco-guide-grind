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

bool can(vll tocheck, ll n, ll x, ll k){
    ll mid = (n-1)/2;
    ll ops = 0;
    for (ll i = mid; i < n; i++){
        ops += max(0LL, x - tocheck[i]);
    }
    return ops <= k;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  //freopen("file.in", "r", stdin); // USACO
  //freopen("file.out", "w", stdout);
  ll n, k; cin >> n >> k;
  vll a(n); for (ll i = 0; i < n; i++){cin >> a[i];}
  ll lo = 1;
  ll hi = 2e9;
  lo--;
  sort(begin(a), end(a));
  while (lo < hi){
    ll mid = lo + (hi - lo + 1)/2;
    if (can(a, n, mid, k)){
        lo = mid;
    }
    else {
        hi = mid - 1;
    }
  }
  cout << lo << endl;
}