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
  int n, k;
  cin>>n>>k;
  string str; cin>> str;
  map<int,int> m;
  for(int i=0;i<n;i++){
    if(str[i] == '1'){
      m[i%k]++;
    }
  }
  pi best = MP(INT_MAX, 0);
  for(auto it:m){
    if(it.S > best.S)
      best = it;
    else if(it.S == best.S){
      if(it.F > best.F)
        best= it;
    }
  }
  int lastOne = 0;
  for(int i=0;i<n;i++)
    if(str[i] == '1') lastOne = i;
  int op = best.F;
  int ans = 0;
  for(int i=0;i<n;i++){
    if(i%k == op && str[i] == '0') ans++;
    if(i%k != op && str[i] == '1')
        ans++;
      
  }
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
