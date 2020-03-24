#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f
#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;


void solve(){
    int s; cin >> s;
    vi ans;
    map<int,int> m;
    vll v;
    v.PB(s);
    m[s]++;
    int i = 0;
    while(++i){
        int op = (v[i-1] & 1) ? (3*v[i-1] + 1) : (v[i-1]/2);
        if(m[op]){
            cout << i+1 << endl;
            return;
        }
        m[op]++;
        v.PB(op);
    }
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
