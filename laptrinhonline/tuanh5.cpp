#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while (t--) {
    	int res = 0;
    	int a, b; cin >> a >> b;
    	while ((a&1) == (b&1)) {
    		res++;
    		a>>=1; b>>=1;
		}
		cout << (1<<res) << '\n';
	}
}
