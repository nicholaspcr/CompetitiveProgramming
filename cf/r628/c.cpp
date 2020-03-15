#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAXN 100001

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

vi g[MAXN];


bool comp(vi a, vi b){
    return a.size() > b.size();
}

void solve(){
    int n; cin >> n;
    vector<pi> vpi;
    for(int i = 0; i < n-1; i++){
        int a, b;
        cin >> a >> b;
        g[a].PB(b);
        g[b].PB(a);

        vpi.PB(MP(a,b));
    }

    sort(g, g+MAXN, comp);
    
    map<pi, int> m;
    vi vis(n+1,0);
    int c = 0;
    for(int i = 1; i <= n; i++){
        vis[i] = 1;
        for(int j = 0; j < g[i].size(); j++){
            cout << g[i][j] << endl;
            if(!vis[g[i][j]]){
                //if(!m[MP(i,g[i][j])]){
                    m[MP(i,g[i][j])] = c;
                    m[MP(g[i][j],i)] = c;
                //}
                c++;
            }
        }
    }
    for(int i = 0; i < vpi.size(); i++){
        cout << vpi[i].F << " " << vpi[i].S << endl;
        cout << m[vpi[i]] << endl;
    }
}

int main() {
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
