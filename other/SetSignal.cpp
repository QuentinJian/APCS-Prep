#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, k;
    int total_distance;
    int coverage_range;
    cin >> n >> k;
    vector<int> service_points(n);
    for (int i=0;i<n;i++) {
        cin >> service_points[i];
    }
    sort(service_points.begin(), service_points.begin()+n);
    total_distance = service_points[n-1] - service_points[0];
    coverage_range = total_distance / k;
    cout << coverage_range;
    return 0;
}