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

inline ll amountOfCards(int h){
  return (2*h*(h+1))/2 + ((h-1)*h)/2;
}

void solve(){	
  int n;cin>>n;
  int ans = 0;
  ll value = 0;
  while(n >= 2){
    for(int i = 2; i < sqrt(1e9); ++i){
       value = amountOfCards(i);
       if( value > n ){
          n -= amountOfCards(i-1);
          break;
       }
    }
    ans++;
  }
  cout<<ans<<endl;
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
