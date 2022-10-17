#include <vector>
#include <iostream>

using namespace std;
struct node
{
    int data;
    int next;
};

int main() {
    int N, M, K;
    int exp_count = 0;
    int cur = 0;
    int now = 0;
    int prev;
    cin >> N >> M >> K;
    vector<node> players(N);
    for (int i=0;i<N-1;i++) {
        players[i].data = i;
        players[i].next = i+1;
    }
    players[N-1].next = 0;
    prev = N-1;
    while (exp_count < K) {
        if (now == M) {
            players[prev].next = players[now].next;
            now = 0;
            exp_count += 1;
            N = N - 1;
        }
        now += 1;
        prev = cur;
        cur = players[cur].next;
    }
    cout << players[cur].data << endl;
    return 0;
}