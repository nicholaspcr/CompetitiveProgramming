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
  vi a(n);
  for(int i=0;i<n;++i)cin>>a[i];
  sort(all(a));
  int negNum = 0;
  for(int i=0;i<n;i++){
    if(a[i] >= 0) break;
    negNum++;
  }
  if(negNum&1) negNum--;
  vi ans;
  for(int i=0;i<negNum && i < k;i++){
    ans.PB(a[i]);
  }
  k -= negNum;
  if(ans.size() &1)
    ans.erase(ans.begin() + ans.size() - 1);

  for(int i=n-1;ans.size()<k; i--)
    ans.PB(a[i]);

  ll r = 1;
  const int MOD = 1e9+7;
  for(int i=0;i<ans.size();i++){
    r*= ans[i];
    r%=MOD;
  }
  cout<<r<<endl;
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
