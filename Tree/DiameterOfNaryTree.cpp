#include <vector>
#include <fstream>
#include <iostream>
#include <map>

using namespace std;

struct Node {
    int data;
    vector<Node*> child;
};

Node *newNode(int key) {
    Node *temp = new Node;
    temp->data = key;
    return temp;
}

int depthOfTree(Node *root) {
    if (root == NULL)
        return 0;
    int max_depth = 0;
    for (vector<Node*>::iterator it=root->child.begin();it!=root->child.end();it++) {

    }
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    fstream input_file;
    input_file.open("text.txt");
    map<int, Node*> node_helper;
    map<int, bool> is_child;
    int n;
    int a, b;
    int top;
    Node *temp;
    Node *root;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a >> b;
        if (node_helper.find(a) != node_helper.end()) {
            temp = newNode(b);
            node_helper[a]->child.push_back(b);
            is_child[b] = true;
            node_helper[b]= temp;
        }else {
            temp = newNode(a);
            node_helper[a] = temp;
            node_helper[a]->child.push_back(newNode(b));
        }
    }
    for (auto const& x:is_child) {
        if (is_child[it]) {
            root = node_helper[it];
        }
    }
    cout << "The longest path is " << depthOfTree(root);
    return 0;
}
