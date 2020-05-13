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
  int a,b,c,k;
  cin>>a>>b>>c>>k;

  ll sum;
  if(a < k){
    sum = a;
    k-=a;
    if(b < k){
      k-=b;
      sum -= min(c,k);
    }
  }else{
    sum = k;
  }
  cout<<sum<<endl;
  
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
