
// C Program for Iterative Tower of Hanoi 
#include <bits/stdc++.h> 
using namespace std;
typedef  long long ll;

map<int, stack<int>> mp;

void moveDisk(char fromPeg, char toPeg, int disk) 
{ 
    printf("%c %c\n", fromPeg, toPeg); 
}
 
void movePoles(stack<int> &src, stack<int> &dst, int s, int d){ 
    // When pole 1 is empty 
    if (src.empty()){
      src.push(dst.top()); dst.pop();
      cout<<d<<" "<<s<<endl;
    } 
    // When pole2 pole is empty 
    else if (dst.empty()){ 
      dst.push(src.top()); src.pop();
      cout<<s<<" "<<d<<endl;
    } 
    // When top disk of pole1 > top disk of pole2 
    else if(src.top() > dst.top()) 
    { 
      src.push(dst.top()); dst.pop(); 
      cout<<d<<" "<<s<<endl;
    } 
    // When top disk of pole1 < top disk of pole2 
    else
    { 
      dst.push(src.top()); src.pop(); 
      cout<<s<<" "<<d<<endl;
    } 
} 

int main() 
{ 
  int n; cin>>n; 
  int s = 1, d = 3, a = 2;
  if(~n&1){
    int tmp = d;
    d = a;
    a = tmp;
  }
  for(int i=n;i>=1;i--) mp[s].push(i);
  int tN = pow(2, n) - 1;
  cout<<tN<<endl;
  for(int i=1;i<=tN;i++){
    if(i % 3 == 1)
      movePoles(mp[s],mp[d],s,d);
    if(i % 3 == 2)
      movePoles(mp[s],mp[a],s,a);
    if(i % 3 == 0)
      movePoles(mp[a],mp[d],a,d);
  }
  return 0; 
} 

