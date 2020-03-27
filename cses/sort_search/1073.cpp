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

void solve(){	
    int n; cin >> n;
    int x;
    multiset<int> s;
    while(n--){
		cin >> x;
		auto it = s.lower_bound(x+1);
		if(it == s.end()) s.insert(x);
		else{
			s.erase(it);
			s.insert(x);
		}
	}
	cout << s.size() << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
