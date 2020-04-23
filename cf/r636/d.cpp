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
  int n,k;cin>>n>>k;
  vi v(n);
  int ans = 0;
  for(int i=0;i<n;i++)cin>>v[i];
  map<int,int>m;
  for(int i=0;i<n/2;i++){
    int op = (v[i]+v[n-1-i])/2;
    m[op]++;
  }
  pi best = MP(0,0);
  for(auto it : m){
    if(it.S > best.S)
      best=MP(it.F,it.S);
  }
  int currAns = 0;
  for(int i=0;i<n/2;i++){
    int op = (v[i]+v[n-1-i])/2;
    if(op != (k+1)/2){
      ans++;
    }
    
    if(op < best.F){
      int qtd = best.F - op;
      qtd*=2;
      if(k - v[i] >= qtd || k - v[n-1-i] >= qtd)
        currAns++;
      else
        currAns+=2;
    }else if(op > best.F){
      int qtd = op - best.F;
      qtd*=2;
      if(v[i] >= qtd || v[n-1-i] >= qtd)
        currAns++;
      else 
        currAns+=2;
    }
  }
  cout<<currAns<<endl;
  /*
  ans = min(ans,currAns);
  cout<<ans<<endl;
  */
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
