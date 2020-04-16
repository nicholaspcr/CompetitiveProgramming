#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define MAXN 105

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef long long ll;

template <typename T> void max_self(T& a, T b){
	a = max(a,b);
}

void solve(){	
    int n, x; cin >> n >> x;
    set<int> v;
    set<int> op;
    for(int i = 0; i < n; i++){
		int ent; cin >> ent;		
		v.insert(ent);
	}
	int pos = 1;
	
	set<int> ans;
	while(1){
		if(!x) break;
		auto it = v.lower_bound(pos);
		if(it == v.end() || *it != pos){
			v.insert(pos);
			x--;
		}
		pos++;
	}
	while(1){
		auto it = v.upper_bound(pos);
		if(it == v.end()) break;
		else v.erase(it);
	}
	cout << v.size() << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    //
    //solve();
    return 0;
}
