#include <string>
#include <iostream>

using namespace std;

int main() {
    int k;
    string test_case;
    cin >> k;
    cin >> test_case;
    cout << Solution(test_case, k);
    return 0;
}

int Solution(string str, int k) {
    int curSect = 0, prevSect = 0, subSectLen = 0;
    int cur; //1 = lower, 2 = upper
    int len = 0;
    int maxLen;
    for (int i=0;i<str.size();i++) {
        if (islower(str[i]) && prevSect == 1){
            curSect = 1;
            subSectLen += 1;
            if (curSect == k) {
                len += k;
                if (len >= maxLen)
                    maxLen = len;
            }
        }
        if (islower(str[i]) && prevSect != 1) {
            prevSect = subSectLen;
            curSect = 1;
            if (curSect == k) {
                len += k;
                if (len >= maxLen)
                    maxLen = len;
            }
        }
        if (isupper(str[i]) && prevSect == 2) {
            curSect = 2;
            subSectLen += 1;
        }
        if (isupper(str[i]) && prevSect != 2) {
            curSect = 2;
            subSectLen = 1;
        }
        if (subSectLen >= maxLen)
            maxLen = subSectLen;
        prevSect = curSect;
    }
}
