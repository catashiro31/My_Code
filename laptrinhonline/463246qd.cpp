#include <bits/stdc++.h>
using namespace std;
map<string,int> min_act;
string new_board(string board, int i) {
	string old_board = board;
	old_board[i] = ('1'-old_board[i])+'0';
	if (0 <= i-4) old_board[i-4] = ('1'-old_board[i-4]) + '0';
	if (i+4 < 16) old_board[i+4] = ('1'-old_board[i+4]) + '0';
	if (i % 4 != 0) old_board[i-1] = ('1'-old_board[i-1]+'0');
	if (i % 4 != 3) old_board[i+1] = ('1'-old_board[i+1]+'0');
	return old_board;
}
int arr[16];
void Try(int i) {
	if (i == 16) {
		string board = "0000000000000000";
		int ccount = 0;
		for (int j = 0; j < 16; j++) {
			if (arr[j] == 1) {
				board = new_board(board,j);
				ccount++;
			}
		}
		if (min_act[board] == 0) min_act[board] = ccount;
		else min_act[board] = min(min_act[board],ccount);
		return;
	}
	for (int j = 0; j <= 1; j++) {
		arr[i] = j;
		Try(i+1);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	Try(0);
	while (t > 0) {
		vector<vector<int>> arr(4,vector<int> (4));
		for (int i = 0; i < 4; i++) {
			string x; cin >> x;
			for (int j = 0; j < 4; j++) {
				arr[i][j] = x[j]-'0';
			}
		}
		string bang = "";
		for (int i = 0; i < 4; i++) {
			string x; cin >> x;
			for (int j = 0; j < 4; j++) {
				arr[i][j] = arr[i][j] ^ (x[j]-'0');
				bang += to_string(arr[i][j]);
			}
		}
		if (bang == "0000000000000000") cout << 0 << '\n';
		else {
			if (min_act[bang] == 0) cout << -1 << '\n';
			else cout << min_act[bang] << '\n';
		}
		t--;
	}
}