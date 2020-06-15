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
  int n; cin>>n;
  vi v(n);
  for(int i=0;i<n;++i) cin>>v[i];
  int big = n;

  while(v[0] == big || v[n-1] == big)
    big--;

  int l = n, r = n;
  bool flag = false;
  for(int i=0;i<n;++i){
    if(v[i] == big) flag = !flag;
    if(!flag)
      min_self(l,v[i]);
    else
      min_self(r,v[i]);
  }

  int ans = abs(big-l) + abs(big-r);
  if(big > 0 && ans > big-1){
    cout<<3<<endl;
    cout<<l<<" "<<big<<" "<<r<<endl;
  }else{
    cout<<2<<endl;
    bool t = false;
    for(int i=0;i<n;i++){
      if(v[i] == n) t = !t;
      if(v[i] == 1){
        if(t){
          cout<<n<<" "<<1<<endl;
        }else{
          cout<<1<<" "<<n<<endl;
        }
        break;
      }
    }
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
