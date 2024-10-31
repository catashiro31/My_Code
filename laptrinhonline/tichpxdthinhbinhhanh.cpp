#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double a, b;
	int tmp;
	cin >> a >> b >> tmp;
	const double pi = acos(-1);
	double goc = (double)min(tmp,180-tmp)/180*pi;
	cout << fixed << setprecision(3) << (double)a*b*sin(goc);
}
