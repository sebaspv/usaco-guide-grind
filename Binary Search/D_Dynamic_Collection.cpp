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

void operation1(vll& tos, ll k){
    if (k > tos[tos.size() - 1]){
        tos.pb(k);
        return;
    }
    else if (k < tos[0]){
        tos[0] = k;
        return;
    }

    ll toind = lower_bound(tos.begin(), tos.end(), k) - tos.begin();
    if (tos[toind] > k){
        tos[toind] = k;
        return;
    }
    else if (tos[toind] == k){
        return;
    }
}

ll operation2(vll &tos, ll a, ll b){
    if (a <= tos[0] && b >= tos[tos.size()-1]){
        return tos.size();
    }
    auto otb = upper_bound(tos.begin(), tos.end(), b);
    auto ota = lower_bound(tos.begin(), tos.end(), a);
    if (a < tos[0]){
        return otb - tos.begin();
    }
    else if (b >= tos[tos.size() - 1]){
        return (tos.size() - (ota - tos.begin()));
    }
    return otb - ota;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n, q; cin >> n >> q;
  vll collection(n);
  for (ll i = 0; i < n; i++){
    cin >> collection[i];
  }
  sort(collection.begin(), collection.end());
  while (q--){
    ll op; cin >> op;
    if (op == 1){
        ll k; cin >> k;
        operation1(collection, k);
    }
    else{
        ll a, b; cin >> a >> b;
        cout << operation2(collection, a, b) << "\n";
    }
  }
}
