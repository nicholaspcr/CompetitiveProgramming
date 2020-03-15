#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair


using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef pair<int,pi> ppi;
typedef long long ll;

int getTotal(ppi n){
    return n.F + n.S.F + n.S.S;
}

ppi minKnap(int a, int b, int c, int origA, int origB, int origC){
    pi opB, opC;
    opB.F = (b/a) * a;    opB.S = (b%a) ? ((b/a)+1)*a : b/a;
    opC.F = (c/b) * b;    opC.S = (c%b) ? ((c/b)+1)*b : c/b;

    ppi ans;
    ans.F = abs(origA - a);
    ans.S.F = (abs(origB - opB.F) < abs(origB - opB.S)) ? opB.F : opB.S;
    ans.S.S = (abs(origC - opC.F) < abs(origC - opC.S)) ? opC.F : opC.S;
    
    int total = getTotal(ans);
    if(a == 1000)
        return ans;
    else{
        ppi op = minKnap(a+1, b, c, origA, origB, origC);
        int totalOP = getTotal(op);
        if( total < totalOP)
            return ans;
        else
            return op;
    }
}

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    ppi op1 = minKnap(1, b, c, a, b, c);
    ppi op2 = minKnap(1, a, c, b, a, c);
    ppi op3 = minKnap(1, a, b, c, a, b);

    ppi ans;
    int Top1 = getTotal(op1);
    int Top2 = getTotal(op2);
    int Top3 = getTotal(op3);
    if(Top1 < Top2 && Top1 < Top3) ans = op1;
    else if(Top2 < Top1 && Top2 < Top3) ans = op2;
    else ans = op3;
    cout << ans.F << " " << ans.S.F << " " << ans.S.S << endl;
    cout << op1.F << " " << op1.S.F << " " << op1.S.S << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    //solve()
    return 0;
}
