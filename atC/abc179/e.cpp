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
  ll n,x,m;
  cin>>n>>x>>m;
  set<int> s;
  for(int i=0;i<1e5;i++){
    s.insert(x);
    x = (x*x)%m;
  }
  vi elems;
  ll sum = 0;
  for(set<int>::iterator it = s.begin();it!=s.end();it++){
    if(*it == 0) continue;
    elems.PB(*it);
    sum += *it;
  }

  ll qtd = n/(ll)elems.size();
  int rest = n%(int)elems.size();
  ll ans = qtd*sum;
  for(int i=0;i<rest;i++)
    ans += elems[i];

  cout<<ans<<endl;
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
