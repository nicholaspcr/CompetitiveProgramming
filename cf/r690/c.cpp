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
  int t = 0;
  for(int i=1;i<10;i++) t += i;
  if( t < n ){
    cout<<-1<<endl;
    return;
  }
  vi ans;
  int op = 9;
  while(n > 0){
    if(n <= op){
      ans.PB(n);
      n-=n;
    }else{
      ans.PB(op);
      n -= op;
      op--;
    }
    if(op < 0){
      cout<<-1<<endl;
      return;
    }
  }
  sort(all(ans));
  for(auto e:ans)
    cout<<e;
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
