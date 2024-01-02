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
    ll h, t; cin >> h >> t;
    multiset<ll> tickets;
	for (ll i = 0; i < h; i++){
		ll ticket; cin >> ticket; tickets.insert(ticket);
	}
	vll customers(t);
	for (ll i = 0; i < t; i++){cin >> customers[i];}
	for (auto aa: customers){
		auto it = tickets.find(aa);
		if (it == tickets.end()){
			auto otit = tickets.upper_bound(aa);
			if (otit == tickets.begin()){
				cout << -1 << "\n";
			}
			else {
				otit--;
				cout << *otit << "\n";
				tickets.erase(tickets.find(*otit));
			}
		}
		else {
			cout << aa << "\n";
			tickets.erase(tickets.find(aa));
		}
	}
}