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
  int a, b; 
  cin>>a>>b;
  string str;
  cin>>str;
    
  ll ans = 0;
  int qtdSeg = 0;
  int qtdZero = 0;
  int prev = -1;
  bool flag = false;
  for(int i=0;i<(int)str.size();i++){
		if(str[i] == '1'){			
			flag = true;
			if( prev != -1 && i > prev+1){
				//cout<<qtdZero<<endl;
				//cout<<i<<" "<<prev<<endl;
				if( (qtdZero)*b < 2*a ){
					ans += (qtdZero)*b;
				}else{					
					qtdSeg++;
				}
			}
			prev = i;
			qtdZero = 0;
		}else{
			qtdZero++;
		}
	}
	if(flag) qtdSeg++;	
	ans += qtdSeg*a;
	cout<<ans<<endl;
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
