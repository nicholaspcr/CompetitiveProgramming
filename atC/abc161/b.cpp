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

const double EPS = 1e-9;

void solve(){	
    int n, m;
    cin>>n>>m;
    vector<double> v(n);
    double tV = 0;
    for(int i = 0; i < n; ++i){
		cin>>v[i];
		tV += v[i];
	}
	double op = (1/(4.0*(double)m));	
	op *= tV;
	sort(v.rbegin(), v.rend());
	
	for(int i = 0; i < m; i++){
		if(v[i]+EPS < op){
			cout<<"No\n";
			return;
		}
	}
	cout<<"Yes\n";
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
