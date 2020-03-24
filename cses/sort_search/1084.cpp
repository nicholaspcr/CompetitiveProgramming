#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define all(v) v.begin(), v.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<pi> vpi;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vi apt(n), peop(m);
    FOR(i, 0, n) cin >> apt[i];
    FOR(i, 0, m) cin >> peop[i];
    sort(all(apt));
    sort(all(peop));
    /*
    FOR(i, 0, n) cout << apt[i] << " ";
    cout << endl;
    FOR(i, 0, m) cout << peop[i] << " ";
    cout << endl;
    */
    int pos = m-1;
    int ans = 0;
    for(int i = n-1; i >= 0; i--){
        while(pos >= 0 && apt[i] < peop[pos] - k) pos--;
        if(pos >= 0 && abs(apt[i]-peop[pos]) <= k){
            ans++;
            pos--;
        }
    }
    cout << ans << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
