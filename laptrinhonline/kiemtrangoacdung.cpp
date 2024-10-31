#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >>t;
	for (int i = 0; i < t; i++) {
		string xau; cin >> xau;
		stack<char> st;
		for (int j = 0; j < xau.length(); j++) {
			if (st.empty()){
				if (xau[j] == '(' || xau[j] == '[' || xau[j] == '{') st.push(xau[j]); 
				else {
					st.push(xau[j]);
					break;
				}
			} else {
				if (xau[j] == '(') st.push(xau[j]);
				if (xau[j] == '[') {
					if (st.top() != '(') st.push(xau[j]);
					else break;
				}
				if (xau[j] == '{') {
					if (st.top() == '{') st.push(xau[j]);
					else break;
				}
				if (xau[j] == ')'){
					if (st.top() == '(') st.pop();
					else break;
				}
				if (xau[j] == ']') {
					if (st.top() == '[') st.pop();
					else break;
				}
				if (xau[j] == '}') {
					if (st.top() == '{') st.pop();
					else break; 
				}
			}
		}
		if (st.empty()) cout << "Dung\n";
		else cout << "Sai\n";
	}
}

