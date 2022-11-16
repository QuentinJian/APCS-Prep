#include <bits/stdc++.h>

#define NUM 9

using namespace std;

int main() {
    fstream file;
    file.open("data2.txt");
    vector<int> strike(100);
    int base[3] = {0};
    int hit_count;
    for (int i=0;i<NUM;i++) {
        cin >> hit_count;
        for (int j=0;j<hit_count;j++) {
            string result;
            cin >> result;
            if (result.compare("FO") || result.compare("GO") || result.compare("SO") == 0) {
                strike[j*9 + i] = 0;
            }else if (result.compare("1B") == 0) {
                strike[j*9 + i] = 1;
            }else if (result.compare("2B") == 0) {
                strike[j*9 + i] = 2;
            }else if (result.compare("3B")) {
                strike[j*9 + i] = 3;
            }else {
                strike[j*9 + i] = 4;
            }
        }
    }

    int out = 0;
    int point = 0;
    int index = 0;
    int b=0;
    int count = 0;
    while (count < b) {
        switch (strike[index]) {
        case 4:
            for (int k=0;k<3;k++) {
                if (base[k] == 1) {
                    point += 1;
                    base[k] = 0;
                }
            }
            break;
        
        default:
            break;
        }
    }
}