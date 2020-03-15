#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f

using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> pi;

void solve(){
    int a, b;
    cin >> a >> b;
    int maxi = max(a,b);
    int mini = min(a,b);
    
    if(mini == 1){
       cout << 1 << endl;
       return;
    }
    ll ans = (maxi/2) * (ll)mini;
    if(maxi & 1){
        if(mini & 1)
            ans += mini/2 + 1;
        else
            ans += mini/2;
    }
    cout << ans << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
