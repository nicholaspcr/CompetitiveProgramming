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
    int n;cin>>n;
    vi a(n), b(n);
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){cin>>b[i];}	
	if(a[0] != b[0]){
		cout<<"No\n";
		return;
	}
	vector<pair<bool,bool>> vpb(n);
	pi op = MP(0,0);
	for(int i=0;i<n-1;i++){
		if(a[i] > 0){
			if((op.F == 0 && op.S == 0) && a[i]!=b[i]){
				cout <<"No\n";
				return;
			}else
				op.F++;
		}
		if(a[i] < 0){
			if((op.F == 0 && op.S == 0) && a[i]!=b[i]){
				cout <<"No\n";
				return;
			}else
				op.S++;			
		}
	}
	
	for(int i=n-1;i>=0;i--){
		if(b[i] > a[i]){
			if(op.F <= 0){
				cout <<"No\n";
				return;
			}else
				op.F--;
		}else if(b[i] < a[i]){
			if(op.S <= 0){
				cout <<"No\n";
				return;
			}else
				op.S--;
		}
	}
	cout<<"Yes\n";
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
