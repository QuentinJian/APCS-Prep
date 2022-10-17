#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main() {
    char num[1000];
    // char a = '1';
    // int b = a;
    int odd = 0;
    int even = 0;
    // cout << b;
    cin >> num;
    if (strlen(num) % 2 == 0) {
        for (int i=0;i<strlen(num);i++) {
            if (i % 2 == 0) {
                even += num[i] - 48;
            }else {
                odd += num[i] - 48;
            }
        }
    }else {
        for (int i=0;i<strlen(num);i++) {
            if (i % 2 == 0) {
                even += num[i] - 48;
            }else {
                odd += num[i] - 48;
            }
        }
    }
    cout << abs(even - odd) << endl;
    return 0;
}