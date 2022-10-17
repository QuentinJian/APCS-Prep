#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

template<std::size_t SIZE>
void solution(array<int, SIZE> scores, int n);

int main() {
    int num_of_data;
    array<int, 21> scores;
    cin >> num_of_data;
    for (int i=0;i<num_of_data;i++) {
        cin >> scores[i];
    }
    solution(scores, num_of_data);
    return 0;
}

template<std::size_t SIZE>
void solution(array<int, SIZE> scores, int n) {
    int pass_bar = -1;
    int unlucky = -1;
    sort(scores.begin(), scores.begin()+n);
    for (int i=0;i<n;i++) {
        if (scores[i] < 60)
            unlucky = scores[i];
        if ((i >= 1) && scores[i] > 60 && scores[i-1] < 60)
            pass_bar = scores[i];
    }
    if (unlucky == -1){
        for (int i=0;i<n;i++) {
            cout << scores[i] << " ";
        }
        cout << endl;
        cout << "best case" << endl;
        cout << scores[0];
        return;
    }else if (pass_bar == -1) {
        for (int i=0;i<n;i++) {
            cout << scores[i] << " ";
        }
        cout << endl;
        cout << unlucky << endl;
        cout << "worst case";
        return;
    }
    for (int i=0;i<n;i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
    cout << unlucky << " " << endl;
    cout << pass_bar;
}