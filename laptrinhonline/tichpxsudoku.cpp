//#include <bits/stdc++.h>
//using namespace std;
//int Sudoku[9][9];
//bool MarkR[9][10];
//bool MarkC[9][10];
//bool MarkS[3][3][10];
//void Try(int y, int x) {
//	if (y <= 8) {
//		if (Sudoku[y][x] != 0) {
//			if (x == 8) Try(y+1,0);
//			else Try(y,x+1);
//		} else {
//			for (int i = 1; i <= 9; i++) {
//				if (MarkR[y][i] == true and MarkC[x][i] == true and MarkS[y/3][x/3][i] == true) {
//					MarkR[y][i] = false;
//					MarkC[x][i] = false;
//					MarkS[y/3][x/3][i] = false;
//					Sudoku[y][x] = i;
//					if (x == 8) Try(y+1,0);
//					else Try(y,x+1);
//					MarkR[y][i] = true;
//					MarkC[x][i] = true;
//					MarkS[y/3][x/3][i] = true;
//					Sudoku[y][x] = 0;
//				}
//			}
//		}
//	}
//}
//int main() {
//	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
//	memset(MarkR,true,sizeof(MarkR));
//	memset(MarkC,true,sizeof(MarkC));
//	memset(MarkS,true,sizeof(MarkS));
//	for (int i = 0; i <= 8; i++) {
//		for (int j = 0; j <= 8; j++) {
//			inFile >> Sudoku[i][j];
//			if (Sudoku[i][j] != 0) {
//				MarkR[i][Sudoku[i][j]] = false;
//				MarkC[j][Sudoku[i][j]] = false;
//				MarkS[i/3][j/3][Sudoku[i][j]] = false;
//			}
//		}
//	}
//	inFile.close();
//	Try(0,0);
//	for (int i = 0; i <= 8; i++) {
//		for (int j = 0; j <= 8; j++) {
//			cout << Sudoku[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
#include <bits/stdc++.h>
using namespace std;
int Sudoku[9][9];     
bool MarkR[9][10];        
bool MarkC[9][10];       
bool MarkS[3][3][10];      
void Try(int y, int x) {
    if (y == 9) return;
    if (Sudoku[y][x] != 0) { 
        if (x == 8) Try(y + 1, 0); 
        else Try(y, x + 1);      
		return;  
    }
    for (int i = 1; i <= 9; i++) {
        if (MarkR[y][i] && MarkC[x][i] && MarkS[y / 3][x / 3][i]) {
            MarkR[y][i] = false;
            MarkC[x][i] = false;
            MarkS[y / 3][x / 3][i] = false;
            Sudoku[y][x] = i;
            if (x == 8) Try(y + 1, 0);
			else Try(y, x + 1);
            MarkR[y][i] = true;
            MarkC[x][i] = true;
            MarkS[y / 3][x / 3][i] = true;
            Sudoku[y][x] = 0;
        }
    }
}

int main() {
    ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
    memset(MarkR, true, sizeof(MarkR));  
    memset(MarkC, true, sizeof(MarkC)); 
    memset(MarkS, true, sizeof(MarkS));  
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            inFile >> Sudoku[i][j];
            if (Sudoku[i][j] != 0) {
                MarkR[i][Sudoku[i][j]] = false;
                MarkC[j][Sudoku[i][j]] = false;
                MarkS[i / 3][j / 3][Sudoku[i][j]] = false;
            }
        }
    }
    inFile.close();
    Try(0, 0);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << Sudoku[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


