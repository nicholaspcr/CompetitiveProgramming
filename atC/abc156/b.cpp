#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;


void solve(){
    int n, k;
    cin >> n >> k;
    int ans = 0;
    while(n){
        ans++;
        n /= k;
    }
    cout << ans << endl;
}

int main(){
    /*
    int t; cin >> t;
    while(t--) solve();
    */
    solve();
    return 0;
}
