#include <bits/stdc++.h>

using namespace std;

vector<string> split(const string& str);

int main() {
    string q_temp;
    getline(cin, q_temp);
    int q = stoi(q_temp);
    for (int i=0;i<q;i++) {
        string first_multiple_temp;
        getline(cin, first_multiple_temp);
        vector<string> first_multiple_temp_list = split(first_multiple_temp);
        int n = stoi(first_multiple_temp_list[0]);
        int m = stoi(first_multiple_temp_list[1]);
        int c_lib = stoi(first_multiple_temp_list[2]);
        int c_road = stoi(first_multiple_temp_list[3]);
        vector<vector<int>> cities;
        for (int i=0;i<m;i++) {
            cities[i].resize(2);
            string cities_road_temp_temp;
            vector<string> cities_road_temp = split(cities_road_temp_temp);
        }
    }
    return 0;
}

vector<string> split(const string& str) {
    vector<string> tokens;
    string::size_type start = 0;
    string::size_type end = 0;
    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end-start));
        start = end + 1;
    }
    tokens.push_back(str.substr(start));
    return tokens;
}
