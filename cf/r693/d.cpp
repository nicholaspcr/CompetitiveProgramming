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

void solve(){	
  int n; cin>>n;
  vi v(n);
  for(int &it : v)cin>>it;
  ll a = 0,b = 0; // alice and bob
  bool flag = false; // false == alice turn
  sort(all(v));
  while(v.size()){
    int x = v.back();
    if(!flag && ~x&1)
      a+=x;
    if(flag && x&1)
      b+=x;
    v.pop_back();
    flag = !flag;
  }
  if(a > b)
    cout<<"Alice\n";
  else if (a == b)
    cout<<"Tie\n";
  else
    cout<<"Bob\n";
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
