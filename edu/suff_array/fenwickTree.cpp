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

int LSOne(int i){ return (i&(-i)); }

class FenwickTree {
  private: vi ft;
  public:
    FenwickTree(int n) { ft.assign(n+1, 0); }
    int rsq(int b){
      int sum = 0; for(; b; b -= LSOne(b)) sum += ft[b];
      return sum;
    }
    int rsq(int a, int b){
      return rsq(b) - (a==1 ? 0 : rsq(a-1)); 
    }
    void adjust(int k, int v) {
       for(; k< (int)ft.size(); k += LSOne(k)) ft[k] += v; 
    }
};

void solve(){	
  int f[] = { 2,4,5,5,6,6,6,7,7,8,9 };
  FenwickTree ft(10);
  for(int i=0;i<11;i++) ft.adjust(f[i],1);
  printf("%d\n", ft.rsq(1,1));
  printf("%d\n", ft.rsq(1,2));
  printf("%d\n", ft.rsq(1,6));
  printf("%d\n", ft.rsq(1,10));
  printf("%d\n", ft.rsq(3,6));
  ft.adjust(5,2);
  printf("%d\n", ft.rsq(1,10));
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
