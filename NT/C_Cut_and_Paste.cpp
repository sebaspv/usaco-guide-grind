#include <bits/stdc++.h>
#define mod 10e9+7

typedef long long ll;
using namespace std;

ll modsum(ll a, ll b, ll m){
    return ((a % m) + (b % m)) % m;
}

ll modres(ll a, ll b, ll m){
    return ((a % m) - (b % m)) % m;
}

ll modmult(ll a, ll b, ll m){
    return ((a % m) * (b % m)) % m;
}

int main(){
    ll t; cin >> t;
    while (t--){
        ll x; cin >> x;
        string s; cin >> s;
        ll si = s.size();
        for (ll i = 1; i <= x; i++){
            string pre(s.begin(), s.begin() + i);
            if (si >= x){
                ll left = i;
                ll right = modres(si, left, mod);
                ll paste = pre[left - 1] - '0';
                if (paste == 1){
                    continue;
                }
                else{
                    ll top = modmult(right, paste-1, 1e9+7);
                    si = modsum(si, top, 1e9+7);
                }
            }
            else{
                string subs(s.begin() + i, s.end());
                ll paste = pre[i - 1] - '0';
                s = pre;
                for (ll k = 0; k < paste; k++){
                    s += subs;
                    si = s.size();
                }
            }
        }
        cout << si << "\n";
    }
}