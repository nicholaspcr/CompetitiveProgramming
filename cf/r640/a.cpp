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
  vi v;
  int c = 0;
  while(n){
    if(n%10){
      if(c == 0)
        v.PB(n%10);
      else{
        int op = 1;
        for(int i=0;i<c;i++){
          op*=10;
        }
        v.PB((n%10)*op);
      }
    }
    n/=10;
    c++;
  }
  cout<<v.size()<<endl;
  for(int i=0;i<(int)v.size();i++){
    cout<<v[i]<<" ";
  }
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
