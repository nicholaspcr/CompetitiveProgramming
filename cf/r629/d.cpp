#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define INF 0x3f3f3f3f
#define MAXN 200005

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;

void solve2(){
	int n; cin >> n;
	vi v(n);	
	for(int i = 0; i < n; i++){
		 cin >> v[i];		 
	 }
	
	int k = 100;
	vi painted(n);
	for(int i = 0; i < 2*n; i++){
		int l = (i-1+n)%n;		
		
		if(v[i%n] != v[l]){
			for(int j = 1; j <= k; j++){
				if(painted[l] != j){
					painted[i%n] = j;
					break;
				}
			}
		}else{
			painted[i%n] = 1;
		}
	}
	for(int i = 0; i < n; i++){
		int l = (i-1+n)%n;
		int r = (i+1+n)%n;
		if(v[i%n] != v[l]){
				for(int j = 1; j <= k; j++){
					if(painted[l] != j && painted[r] != j){
						painted[i%n] = j;
						break;
					}
				}
			}
	}
	
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans = max(ans, painted[i]);
	}
	cout << ans << endl;
	for(int i = 0; i < n; i++){
		cout << painted[i] << " ";
	}
	cout << endl;
}

void solve(){
	int n; cin >> n;
	vi v(n);
	int maxV = 0;
	for(int i = 0; i < n; i++){
		 cin >> v[i];
		 maxV = max(maxV, v[i]);
	 }
	
	int k = 100;
	vi painted(n);
	for(int i = 0; i < n; i++){
		int l = (i-1+n)%n;
		int r = (i+1+n)%n;
		int opR = (i+2+n)%n;	
		int colorL = 0;
		int colorR = 0;
		if(v[l] != v[i]){
			if(painted[l])
				colorL = painted[l];
		}else{
			if(painted[l]){
				if(v[i] != v[r] && v[opR] != v[i]){
					for(int j = 2; j <= painted[l]+1; j++){
						j = j%maxV;
						if(j != painted[l]){
							painted[i] = j;
							break;
						}
					}
				}else
					painted[i] = painted[l];
				continue;
			}
		}
		if(v[r] != v[i]){
			if(painted[r])
				colorR = painted[r];
		}
		
		
		for(int j = 1; j <= k; j++){
			if(j != colorL && j != colorR){
				//cout << colorL << " " << colorR << endl;
				//cout << j << endl;
				painted[i] = j;
				break;
			}
		}
		if(v[l] == v[i])	painted[l] = painted[i];
		if(v[r] == v[i])	painted[r] = painted[i];
	}
		
	
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans = max(ans, painted[i]);
	}
	cout << ans << endl;
	for(int i = 0; i < n; i++){
		cout << painted[i] << " ";
	}
	cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve2();

    //solve();
    return 0;
}
