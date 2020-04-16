#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef long long ll;

template <typename T> void max_self(T& a, T b){
	a = max(a,b);
}

bool check(vi v){
	sort(all(v));
	for(int i = 0; i < (int)v.size(); i++){
		if(v[i] != i+1){
			//cout << v[i] << " "<< i+1 << endl;
			return false;			
		}
	}
	return true;
}

void solve(){	
    int n; cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    set<int> s;
    vi l, r;
    bool t = false;
    pi best;
    for(int i = 0; i < n; i++){
		auto it = s.lower_bound(v[i]);
		if(it != s.end() && *it == v[i])
			t = true;
		
		if(t)
			r.PB(v[i]);
		else{
			l.PB(v[i]);
			s.insert(v[i]);
		}
	}
	vpi ans;	
	if(check(l) && check(r)){		
		ans.PB(MP(l.size(), r.size()));
	}else{
		while(l.size() > 1){
			r.PB(l[l.size()-1]);
			l.erase(l.begin() + l.size() -1);
			if(check(l) && check(r)){
				ans.PB(MP(l.size(), r.size()));				
			}
		}
	}
	
	for(int i = 0; i < (int)ans.size(); i++){
		vi t1,t2;
		for(int j = 0; j < (int)ans[i].S; j++)
			t1.PB(v[j]);
		for(int j = (int)ans[i].S; j < n; j++)
			t2.PB(v[j]);
		if(check(t1) && check(t2))
			ans.PB(MP(t1.size(), t2.size()));
	}
		
	cout << ans.size() << endl;
	for(auto e : ans)
		cout << e.F << " " << e.S << endl;
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
