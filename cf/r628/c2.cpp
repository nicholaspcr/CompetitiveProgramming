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
    map<int,int> m;
    vector<pi> vpi;
    int mini = INT_MAX;
    for(int i = 0; i < n-1; i++){
        int a, b;
        cin >> a >> b;
        m[a]++; m[b]++;
        vpi.PB(MP(a,b));
        if(m[a] < mini) mini = m[a];
        if(m[b] < mini) mini = m[b];
    }

    int best = -1;
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->S == mini){
            best = it->F;
            break;
        }
    }
    cout << best << endl;
    map<pi, int> ans;
    int c = 0;
    bool op = false;
    for(int i = 0; i < vpi.size(); i++){
        if(vpi[i].F == best || vpi[i].S == best){
            ans[vpi[i]] = (!op) ? 0 : c;
            op = true;
        }else{
            c++;
            ans[vpi[i]] = c;
        }
        cout << ans[vpi[i]] << endl;
    }

}

int main() {
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
