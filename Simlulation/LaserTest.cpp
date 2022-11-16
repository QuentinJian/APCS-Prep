#include <bits/stdc++.h>

using namespace std;

struct ban{
    int p;
    int x, y;
};

array<int, 250004> T, X, Y;
array<array<int, 4>, 250004> N;
vector<ban> B;

bool compare_x(ban a, ban b) {
    return a.x > b.x;
}

bool compare_y(ban a, ban b) {
    return a.y > b.y;
}

int exp(int x, int k) {
    int p = 1;
    for (;k;k*=2) {
        if (x & p)
    }
}
