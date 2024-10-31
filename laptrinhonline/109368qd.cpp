#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int L, l; inFile >> L >> l;
	inFile.close();
	if (L%l == 0) cout << (L/l-1)*(l+1);
	else cout << (L/l-1)*(l+1)+(L%l+1);
}
