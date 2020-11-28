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

void solve(){	
  int n;cin>>n;
  if(n == 2)
		cout<<2<<endl;
	else if (n == 3)
		cout<<3<<endl;
	else{
		vi ans;		
		for(int i=2;i<=sqrt(n);i++){
			vi op;
			ll opR = 1;
			if(n%i == 0){
					op.PB(i);
					opR *= i;					
					ll cpyN = (ll)n/i;
					while(opR <= n){
						if(cpyN%opR){
							opR *= i;
						}else{
							op.PB(opR);
							cpyN/=opR;
						}
					}
					if(op.size() > ans.size())
						ans = op;
			}
		}
		cout<<ans.size()<<endl;
		for(auto e:ans)
			cout<<e<<" ";
		cout<<endl;
	}
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
