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
	bool posA = false, negA = false;
	bool posB = false, negB = false;
    for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i] > 0) posA = true;
		if(a[i] < 0) negA = true;
	}
    for(int i=0;i<n;i++){
		cin>>b[i];
		if(b[i] > 0) posB = true;
		if(b[i] < 0) negB = true;
	}
	bool condi = false;
	for(int i = 0; i < n; i++){
		if(a[i] != 0 && a[i] == b[i]){
			condi = true;
		}
	}
	if(a[0] != b[0]){
		cout<<"No\n";
		return;
	}
	if(condi){
		if(posB){
			if(!posA){
				cout <<"No\n";
				return;
			}
		}
		if(negB){
			if(!negA){
				cout <<"No\n";
				return;
			}
		}
	}else{
		cout << "No\n";
		return;
	}
	cout << "Yes\n";
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
