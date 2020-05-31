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
  int n,m,p1,p2;
  cin>>n>>m>>p1>>p2;
  vector<string> mat(n);
  for(int i=0;i<n;i++)
    cin>>mat[i];

  bool flag = (p2/2 < p1) ? true :  false;
  ll cost = 0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(mat[i][j] == '.'){
        if(j+1 < m && mat[i][j+1] == '.' && flag){
          j++;
          cost+=p2;
        }else{
          cost+=p1;
        }
      }
    }
  }
  cout<<cost<<endl;
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
