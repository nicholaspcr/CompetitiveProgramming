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
    int n, m; cin >> n >> m;
    string s; cin >> s;
    int op = m+1;
    vi pos(n+1);
    int ent;
    for(int i=0; i < m; i++){ cin >> ent; pos[ent]++; }
    //for(int i = 0; i < n; i++) cout << pos[i] << " ";
    //cout << endl;
    map<char,int> ans;
    for(int i = 0; i < n; i++){
        op -= pos[i];
        ans[s[i]] += op;
    }
    for(char i = 'a'; i <= 'z'; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    //solve()
    return 0;
}
