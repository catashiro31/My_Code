#include <bits/stdc++.h>
using namespace std;
string n;
string kq = "";
bool check = false;
int cseven = 0;
int cfour = 0;
void Try(int i ) {
	if (i == n.length()) {
		if (kq > n && !check) {
			cout << kq;
			check = true;
		}
		return;
	}
	if (cfour < n.length()/2) {
		cfour++;
		kq+="4";
		Try(i+1);
		kq.pop_back();
		cfour--;
	}
	if (cseven < n.length()/2) {
		cseven++;
		kq+="7";
		Try(i+1);
		kq.pop_back();
		cseven--;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	int seven = 0;
	int four = 0;
	for (int i = 0; i < n.length(); i++) {
		if (n[i] == '4') four++;
		if (n[i] == '7') seven++;
	}
	if (four == seven && four+seven == n.length()) cout << n;
	else {
		if (n.length() % 2 == 1) {
			for (int i = 0; i < (n.length()+1)/2; i++) cout << "4";
			for (int i = 0; i < (n.length()+1)/2; i++) cout << "7";
		} else {
			Try(0);
			if (!check) {
				for (int i = 0; i < n.length()/2+1; i++) cout << "4";
				for (int i = 0; i < n.length()/2+1; i++) cout << "7";
			}
		}
	}
}
