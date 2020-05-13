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
    vi ans;
    if(n <= 3){
      cout<<"-1\n";
      return;
    }
    int op = (n&1) ? n : n-1;
    while(op > 0){
      ans.PB(op); op -= 2;
    }
    if(n >= 4){
      ans.PB(4);
      for(int i=2;i<=n;i+=2){
        if(i == 4) continue;
        ans.PB(i);
      }
    }
    
    for(int i=0;i<ans.size();i++)
      cout<<ans[i]<<" ";
    cout<<endl;
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
