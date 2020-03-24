#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define INF 0x3f3f3f3f

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void solve(){
    int n; cin >> n;
    vi v[n];
    for(int i = 0; i < n; i++){
        int m; cin >> m;
        int ent;
        for(int j = 0; j < m; j++){
            cin >> ent;
            v[i].PB(ent-1);
        }
    }
    int vis[n+1];
    int married[n];
    memset(vis,0,sizeof(vis));
    memset(married,0,sizeof(married));
    int qtdMarried = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < v[i].size(); j++){
            if(!vis[v[i][j]]){
                vis[v[i][j]] = 1;
                married[i] = 1;
                qtdMarried++;
                break;
            }
        }
    }
    if(qtdMarried == n)
        cout << "OPTIMAL\n";
    else{
        cout << "IMPROVE\n";
        int l, r;
        for(int i = 0; i < n; i++){
            if(!married[i]){
                l = i;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                r = i;
                break;
            }
        }
        cout << l+1 << " " << r+1 << endl;
    }
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    //solve();
    return 0;
}
