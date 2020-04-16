#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define MAXN 200001

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef long long ll;

template <typename T> void max_self(T& a, T b){
	a = max(a,b);
}

void solve(){	
    int n; cin >> n;
    vpi v(n);
	set<pair<pi, int>> segs;
    for(int i = 0; i < n; i++){
		cin >> v[i].F >> v[i].S;
        segs.insert(MP(MP(v[i].F, v[i].S), i));
	}

    vi seatValue(MAXN);
    int ans = 0;
    auto op = segs.begin();
    for(set<pair<pi,int>>::iterator it = segs.begin(); it != segs.end(); it++){
        if(it->F.F <= op->F.S){
            seatValue[it->S] = ++ans;
        }else{
            seatValue[it->S] = ans;
            op = it;
        }
    }
    cout << ans << endl;
    for(int i = 0; i < n; i++)
        cout << seatValue[i] << " ";
    cout << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
