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
  const double EPS = 1e-9;
  double h,c,t;
  cin>>h>>c>>t;
  pair<double,int> ans = MP(0, 0);
  pair<double,int> curr = MP(h, 1);
  bool turn = false;
  int cc = 0;
  while (true){
    if(ans.S == 0) ans = curr;
    double currRatio = curr.F/curr.S;
    double ansRatio = ans.F/ans.S;
    if(abs(t - currRatio)+EPS < abs(t - ansRatio))
      ans = curr;
    else
      cc++;

    if(abs((ans.F/ans.S)-t) <= EPS){
      break;
    }
    if(cc > 800){
      //cout<<ans.F<<" "<<t<<endl;
      break;
    }

    curr.F += turn ? h : c;
    curr.S++;
    turn = !turn;
  }
  cout<<ans.S<<endl;
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
