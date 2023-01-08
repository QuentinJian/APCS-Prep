#include <iostream>
#include <string>
#include <math.h>

int main() {
    using namespace std;
    int n, m;
    int sum;
    int ans = 0;
    cin >> n >> m;
    for (int i=n;i<m;i++) {
        sum = 0;
        string s = to_string(i);
        for (int j=0;j<s.size();j++) {
            sum += pow(s[j] - '0', s.size());
        }
        if (sum == i){
            cout << i << " ";
            ans += 1;
        }
    }
    if (ans == 0)
        cout << "none";
    return 0;
}