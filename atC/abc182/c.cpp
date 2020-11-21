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

bool comp(pi a, pi b){
	return a.S > b.S;
}

void solve(){	
  ll n; cin>>n;
  vpi digs;  
  while(n){
		digs.PB({n%10, (n%10)%3});
		n/=10;
	}	
	sort(all(digs), comp);
	
	int sum = 0;
	for(int i=0;i<(int)digs.size();i++){
		sum = (sum + digs[i].S)%3;
	}
	if(sum == 0)
		cout<<0<<endl;
	else{
		for(int i=0;i<(int)digs.size();i++){
			bool flag = false;
			for(int j=i;j<(int)digs.size();j++){
				if( ( 3 + sum - digs[j].S)%3 == 0) {
					flag = true;
					break;
				}
			}
			if(i == (int)digs.size()-1){
					cout<<-1<<endl;
					return;
			}
			if(!flag){
				sum = (3 + sum - digs[i].S)%3;				
			}else{
				cout<<i+1<<endl;
				return;
			}
		}
	}
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
