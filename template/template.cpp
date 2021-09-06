#include <bits/stdc++.h>
using namespace std;

#define ALL(x) begin(x), end(x)
#define SZ(x) (int)(x).size()
#define REP(i, a, b) for (int i = a; i <= b; ++i)
#define REPP(i, a, b) for (int i = a; i >= b; --i)
typedef long long LL;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define MULTICASE
#define STREAMIO
#define CCPC

void solve() {
    // code here
}

int main() {
#ifdef STREAMIO  // optimization for stream I/O
    ios::sync_with_stdio(0), cin.tie(0);
#endif

#ifndef ONLINE_JUDGE  // run locally - redirect I/O
    freopen("hack.txt", "r", stdin);
    freopen("hack.out", "w", stdout);
#endif

#ifdef MULTICASE  // multicase
    int cases;
    cin >> cases;
    REP(k, 1, cases) {
#ifdef CCPC  // CCPC output mode
        cout << "Case #" << k << ": ";
#endif
        solve();
    }
#else
    solve();
#endif

#ifndef ONLINE_JUDGE  // run locally - print runtime at terminal (stderr)
    double RTIME = 1.0 * clock() / CLOCKS_PER_SEC;
    cerr << "\nRuntime: " << RTIME << " s.\n";
#endif
}