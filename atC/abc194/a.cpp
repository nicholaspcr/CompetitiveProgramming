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
typedef vector<ll> vll;

void solve(){	
  int a,b;
  cin>>a>>b;
  int op = a+b;
  if(op >= 15 && b >=8 )
    cout<<1<<endl;
  else if(op >= 10 && b >= 3)
    cout<<2<<endl;
  else if(op>=3)
    cout<<3<<endl;
  else
    cout<<4<<endl;
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
