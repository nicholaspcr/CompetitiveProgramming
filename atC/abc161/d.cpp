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
    int n; cin>>n;
    vi v;
    vi numD;
    for(int i = 1; i <= 6; i++){
		int op = 9;
		for(int j = 1; j < i; j++){
			op *= 3;
		}
		numD.PB(op);
	}
	int op = 1;
	for(int i = 0;i < 6;i++){
		if(numD[i] > n){
			for(int j = 0; j < i; j++) op *= 3;
			break;
		}
		n -= numD[i];
	}
	int t = n/op;
	cout<<t<<endl;
	
	// ERRADO
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
