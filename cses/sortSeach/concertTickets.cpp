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
    int n, m;
    cin >> n >> m;
    vi h(n), t(m);
    for(int i = 0; i < n; i++)
        cin >> h[i];
    for(int i = 0; i < m; i++)
        cin >> t[i];
    sort(h.begin(), h.end());
    sort(t.begin(), t.end());

    int op = 0;
    vi ans;
    for(int i = 0; i < m; i++){
        int num = -1;
        for(int j = 0; j < (int)t.size() - 1; j++){
            if(h[j+1] > t[i]){
                num = t[j];
                t.erase(t.begin() + j);
            }
        }
        if(num == -1 && h.size() > 0 && h[h.size()-1] <= t[i]){
            num = h[h.size()-1];
            t.erase(t.begin() + t.size() - 1);
        }
        ans.PB(num);
    }
    for(int i = 0; i < m; i++)
        cout << ans[i] << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
