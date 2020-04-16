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
  ll memo[(int)1e6+1];
  memset(memo,0,sizeof memo);

  ll op = 0;
  for(int i=1;i<1e6+1;i++){
    memo[i] = op;
    if(i%3 == 0) continue;
    if(i%5 == 0) continue;
    op += i;
    memo[i] += i;
  }
  int n;cin>>n;
  cout << memo[n]<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //int t; cin >> t;
  //while(t--) solve();
  solve();
  return 0;
}
