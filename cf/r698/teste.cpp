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
    x/=10;
  }
  return false;
}

void solve(){	
 for( int i= 5000; i < 10000;i++){
    if(isSpecial(i, 7) && (i+7)%7 != 0){
      cout<<i<<endl;
      break;
    }
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
