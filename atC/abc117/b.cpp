#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f
#define all(x) x.begin(), x.end()
#define forn(i,n) for(int i = 0; i < n; i++)
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORR(i,a,b) for(int i = a; i >= b; i--)

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;


void solve(){
    int n; cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(all(v));

    int sum = 0;
    for(int i = 0 ; i < n-1; i++)
        sum += v[i];

    if( sum <= v[n-1] ) 
        cout << "No\n";
    else
        cout << "Yes\n";
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
