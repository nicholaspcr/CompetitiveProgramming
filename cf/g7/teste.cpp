#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define INF 0x3f3f3f3f


using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void solve(){
    ll sum = 0;
    for(int i = 1; i <= 200000; i++){
        sum += i;
    }
    cout << sum << endl;
    cout << 998244353 << endl;
}

int main() {
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
