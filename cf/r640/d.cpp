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
  vi v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  pi l = MP(0,0), r = MP(n-1, 0); // pos and qtd

  bool t = false; // false is alice
  int mov = 1;
  int rSum=0, lSum=0;
  while(l.F <= r.F){
    if(!t){
      lSum = 0;
      while(l.F <= r.F && lSum <= rSum){
        lSum += v[l.F++];
        //cout<<lSum<<" ";
      }
      l.S += lSum;
    }else{
      rSum = 0;
      while(r.F >= l.F && rSum <= lSum){
        rSum += v[r.F--];
      }
      r.S += rSum;
    }
    mov++;
    t=!t;
  }
  //cout<<endl;
  //if(t)r.S += v[r.F];
  //else l.S += v[l.F];
  if(mov > 1) mov--;
  cout<<mov<<" "<<l.S<<" "<<r.S<<endl;
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
