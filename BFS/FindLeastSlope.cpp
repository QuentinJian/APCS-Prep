#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> node_cost;
vector<vector<int>> searched;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    node_cost.resize(n, vector<int>(n));
    searched.resize(n, vector<int>(n));
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin >> matrix[i][j];
        }
    }
    deque<int> q;
    while(!q.empty()) {
        
    }
}

void dijkstra(vector<vector<int>> &matrix) {
    int row = 0, col = 0;
    queue<pair<int, int>> q;
    while (q.empty()) {
        
    } 
}

pair<int, int> findLowestCost(vector<pair<int, int>> nodes, vector<vector<int>> matrix) {
    pair<int, int> minNode = make_pair(-1, -1);
    int min;
    for (int i=0;i<nodes.size();i++) {
        if (matrix[nodes[i].first][nodes[i].second] < min) {
            minNode = nodes[i];
            min = matrix[nodes[i].first][nodes[i].second];
        }
    }
    return minNode;
}