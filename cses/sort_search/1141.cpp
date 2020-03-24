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
    vi v(n);
    map<int,int> m;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        m[v[i]] = 1;
    }

    int ans = n;
    for(int i = 0; i < n; i++){
        if(m[v[i]] == 1){
            m[v[i]]--;
        }else{
            ans--;
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
