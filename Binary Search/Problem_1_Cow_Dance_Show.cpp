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

void ok(ll k, vll cows, ll tmax){
  ll time = 0;
  deque<ll> currcows;
  deque<ll> otcows(cows.begin() + k, cows.end());
  for (ll i = 0; i < k; i++){
    currcows.pb(cows[i]);
  }
  while (true){
    if (otcows.empty()){
      bool isdone;
      for (auto cow: currcows){
        
        cow--;
        if (cow == 0){

        }
      }
    }
    else{
      for (auto cow: currcows){
        cow--;
        if (cow == 0){
          currcows.pop_front();
          currcows.pb(otcows.front());
          otcows.pop_front();
        }
      }
    }
    for (auto cow: currcows){
      cow--;
      if (cow == 0){
        currcows.pop_front();
        currcows.pb(otcows.front());
        otcows.pop_front();
      }
    }
    time++;
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  //freopen("file.in", "r", stdin); // USACO
  //freopen("file.out", "w", stdout);
  ll n, tmax; cin >> n >> tmax;
  vll di(n); for (ll i = 0; i < n; i++){cin >> di[i];}

}
