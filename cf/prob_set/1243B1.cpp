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
	string a, b;
	cin >> a >> b;

	for(int i = 0; i < n; i++){
		bool c = false;
		if(a[i] != b[i]){
			for(int j = i+1; j < n; j++){
				if(a[j] != b[j]){
					if(b[j] == b[i] && a[j] == a[i]){
						c = true;						
					}
					break;
				}
			}
			if(c){
				cout << "Yes\n";
			}else{
				cout << "No\n";
			}
			return;
		}
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

