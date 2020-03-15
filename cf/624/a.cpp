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
    int a, b; cin >> a >> b;
    int t = (a-b);
    int ans = 0;
    if( t < 0 ){
        if(abs(t) & 1)
            ans = 1;
        else
            ans = 2;
    }else if( t > 0 ){
        if(abs(t) & 1)
            ans = 2;
        else
            ans = 1;
    }
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    //solve()
    return 0;
}
