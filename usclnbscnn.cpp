#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	vector<pair<int,int>> Nub;
	while (true) {
		int tmp1, tmp2;
		inFile >> tmp1 >> tmp2;
		if (tmp1 == 0 and tmp2 == 0) break;
		Nub.push_back({tmp1,tmp2});
	}
    inFile.close();
    for (pair<int,int> x : Nub) {
    	int a = x.first;
    	int b = x.second;
    	while (b != 0) {
    		int tmp = a%b;
    		a = b;
    		b = tmp;
		}
		cout << a << " " << x.first * x.second / a << endl;
	}
}
