#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
int time;

class DFS {
    public:
        void DepthFirstSearch(vector<vector<int>> &graph, int s) {
            if (visited[s] == true)
                return;
            for (auto edge:graph) {

            }
        }
    private:
        vector<bool> visited;
};

int main() {
    graph.resize(10); 
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(3);

}