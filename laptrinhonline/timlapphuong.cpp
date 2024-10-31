#include <iostream>
using namespace std;
bool ends_with_888(long long a) {
    long long cube = a * a * a;
    return cube % 1000 == 888;  
}
int main() {
    int n;
    cin >> n;
    int count = 0; 
    long long a = 0;  
    while (true) {
		int tmp = a%1000;
        if (ends_with_888(tmp)) {
            count++; 
            if (count == n) {
                cout << a;
                break;
            }
        }
        a+=2;
    }
    return 0;
}
