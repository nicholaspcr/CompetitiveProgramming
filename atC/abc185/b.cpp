#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef long long ll;

void solve(){	
  int n,m,t;
  cin>>n>>m>>t;
  int currN = n;
  int pos = 0;
  while(m--){
    int a, b;
    cin>>a>>b;
    currN -= a-pos;
    if(currN <= 0){
      cout<<"No\n";
      return;
    }
    currN += b-a;
    currN = min(currN, n);
    pos = b;
  }
  currN -= t - pos;
  if(currN <= 0 ){
    cout<<"No\n";
  }else{
    cout<<"Yes\n";
  }
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
