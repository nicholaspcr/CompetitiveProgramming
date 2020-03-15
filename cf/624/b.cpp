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
    vi v(n+1), ref(n), p(m);
    int vis[n];
    memset(vis, 0, sizeof vis);
    for(int i = 0; i < n; i++){ cin >> v[i]; ref[i] = v[i];}
    sort(ref.begin(), ref.end());
    for(int i = 0; i < m; i++){
        cin >> p[i];    p[i]--;
        vis[p[i]]++;    vis[p[i]+1]++;
    }
    for(int i = 0; i < n; i++){
        vi op; int j = 0;
        vis[i]++; vis[i+1]++;
        while(i+j < n && vis[i+j] >= 2){
            op.PB(v[i+j]);
            j++;
        }
        vis[i]--; vis[i+1]--;
        if(j == 0){
            if(v[i] != ref[i]){
                cout << "NO" << endl;
               return;
            }
        }else{
            sort(op.begin(), op.end());
            for(int teste = 0; teste < j; teste++) cout << op[teste] << " ";
            cout << endl;
            for(int mov = i; mov < i+j; mov++){
                if(op[mov - i] != ref[mov]){
                    cout << "NO" << endl;
                    return;
                }
            }
            i = j;
        }
    }
    cout << "YES\n";
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    //solve()
    return 0;
}
