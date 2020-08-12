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
  int r,g,b,w;
  vi v(4);
  for(int i=0;i<4;i++) cin>>v[i];
  int mini = min(v[0],min(v[1],v[2]));
  bool flag = false;
  for(int i=0;i<=min(mini,2);i++){
    int c = 0;
    for(int i=0;i<4;i++)
      if(v[i]&1)c++;
    
    if(c <= 1){
      flag = true;
      break;
    }
    v[0]--;
    v[1]--;
    v[2]--;
    v[3]++;
  }
  if(flag)
    cout<<"Yes\n";
  else
    cout<<"No\n";
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
