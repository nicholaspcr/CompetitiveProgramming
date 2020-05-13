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
  int v[n];
  int memo[n+1];
  memset(memo,0,sizeof(memo));
  for(int i=0;i<n;i++)cin>>v[i];
  
  if(n == 1){
    cout<<"0\n";
    return;
  }

  for(int k=0;k<n;k++){
    int sum = 0;
    int ptr = k;
    int qtdElem = 0;
    for(int i=k;i<n;i++){
      sum+=v[i]; qtdElem++;
      while(sum > n){
        sum -= v[ptr++];
        qtdElem--;
      }
      if(qtdElem >= 2)
        memo[sum] = 1;
    }
    while(qtdElem >= 2 && ptr < n){
      memo[sum] = 1;
      sum -= v[ptr++];
      qtdElem--;
    }
  }
  int ans = 0;
  for(int i = 0; i < n; i++){
    if(memo[v[i]]){
      ans++;
      //cout<<v[i]<<" ";
    }
  }
  //cout<<endl;
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
