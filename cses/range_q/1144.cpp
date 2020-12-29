#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;

const int MAXN = 2e7+2;
vi tree(MAXN); // each node represents 100*i+1 to 100*(i+1)+1
int n,q;
int bucket_no(int x){
    // 1-100 in block 0 but 100/100 = 1
    if(x % 100 == 0)  x--;
    return (x / 100);
}
void add_tree(int k){
  k+=n;
  tree[k]++;
  for(k/=2 ;k >= 1; k/=2)
    tree[k] = tree[2*k] + tree[2*k+1];
}
void sub_tree(int k){
  k+=n;
  tree[k]--;
  for(k/=2; k>= 1; k/=2)
    tree[k] = tree[2*k] + tree[2*k+1];
}
int sum_tree(int a,int b){
  a+=n; b+=n;
  int s = 0;
  while(a<=b){
    if(a&1)     s+=tree[a++];
    if((~b)&1)  s+=tree[b--];
    a/=2; b/=2;
  }
  return s;
}

void solve(){	
  cin>>n>>q;
  vi empls(n);
  for(int &e : empls) cin>>e;
  for(int e : empls){
    add_tree(bucket_no(e));
  }
  while(q--){
    char ch; cin>>ch;
    if(ch == '!'){
      int ind; cin>>ind; ind--;
      int x; cin>>x;
      sub_tree(bucket_no(empls[ind]));
      add_tree(bucket_no(x));
      empls[ind] = x;
    }else{
      int a, b;
      cin>>a>>b;
      int ans = sum_tree(bucket_no(a)+1, bucket_no(b)-1);

      for(int e: empls){
        for(int i=a;i<=(bucket_no(a))*100;i++)
          if(i == e) ans++;
        for(int i=(bucket_no(b)-1)*100;i<=b;i++)
          if(i == e)
            ans++;

      }
      cout<<ans<<endl;
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
