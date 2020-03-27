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


void solve(){
	int n, x; cin >> n >> x;
	vpi a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i].F;
		a[i].S = i;
	}
	sort(all(a));
	int l = 0;
	int r = n-1;
	
	while(l < r){
		if(a[l].F + a[r].F == x){
			cout << a[l].S+1 << " " << a[r].S+1 << endl;
			return;
		}
		
		if(a[l].F + a[r].F < x)
			l++;
		else
			r--;
	}
	cout << "IMPOSSIBLE\n";
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
