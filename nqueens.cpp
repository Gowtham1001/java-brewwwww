#include<iostream>
using namespace std;

int main() {
    string str1, str2;
    
    cin >> str1 >> str2;
    int n = str1.length();
    int m = str2.length();
    int index = -1;
    int end = -1;

    for (int i = 0; i <= n - m; i++) { 
        bool found = true;
        for (int j = 0; j < m; j++) {
            if (str1[i + j] != str2[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            index = i;
            end = i + m - 1;
            break; 
        }
    }
    cout << index << " " << end;
    return 0;
}
