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

bool isSpecial(int x, int d){
  while(x){
    if(x%10 == d) return true;
    x /= 10;
  }
  return false;
}

void solve(){	
  int q, d;
  cin>>q>>d;
  vi v(q);
  for(auto &x : v) cin>>x;
  vi specials;
  for(int i=1;i<=1000;i++){
    if(isSpecial(i,d))
      specials.PB(i);
  }
  
  for(auto x : v){
    if(isSpecial(x,d)){
      cout<<"YES\n";
      continue;
    }
    
    bool flag = false;
    for(int i=0;i<specials.size();i++){
      int op = x - specials[i];
      if( op < 0 ) break;
      if(op %d == 0){
        cout<<op<<" "<<specials[i]<<endl;
        flag = true;
        break;
      }
    }
    if(flag){
      cout<<"YES\n";
      continue;
    }
    cout<<"NO\n";
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
