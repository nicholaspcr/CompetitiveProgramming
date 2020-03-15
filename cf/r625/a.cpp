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
    int n; cin >> n;
    vi r(n), b(n);
    for(int i = 0; i < n; i++) cin >> r[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    int adv = 0;
    int enemP = 0;
    for(int i = 0; i < n; i++){
        if(r[i] && !b[i]) adv++;
        if(!r[i] && b[i]) enemP++;
    }
    if(adv == 0) cout << "-1" << endl;
    else cout << (enemP/adv)+1 << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
