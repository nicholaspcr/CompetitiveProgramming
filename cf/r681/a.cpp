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

template <typename T> void min_self(T& a, T b){
  a = min(a,b);
}

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

void solve(){		
  int n; cin>>n;
	vi ans;
	int op = 4*n;
  while(ans.size() < n){
		bool flag = true;
		for(int i=0;i<ans.size();i++){
			if(gcd(op,ans[i]) == 1){
				flag = false;
				break;
			}
			if(ans[i] % op == 0 || op % ans[i] == 0){
				flag = false;
				break;
			}
		}
		if(flag){
			ans.PB(op);
		}
		op--;
		//cout<<ans.size()<<endl;
	}	
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	cout<<endl;
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
