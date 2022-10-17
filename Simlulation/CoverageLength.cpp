 #include <iostream>
 #include <vector>
 
using namespace std;

int solution();

struct Line{
    int begin_pos;
    int end_pos;
};

int main() {
    int total_lines;
    cin >> total_lines;
    vector<Line> lines(total_lines);
    for (int i=0;i<total_lines;i++) {
        cin >> lines[i].begin_pos >> lines[i].end_pos;
    }
    cout << solution(lines);
    return 0;
 }

int solution(vector<Line> A) {
    int length;
    bool original[10000] = {false};
    bool next_segment[10000] = {false};
    for (int j=A[0].begin_pos;j<A[0].end_pos;j++) original[j] = true;
    for (int i=1;i<A.size();i++)  {
        for (int j=0;j<=A[i].end_pos;i++) {
            if (original[j] == true || next_segment[j]==true){
                original[j] == true;
            }
        }
    }
    int index = 0;
    while (index < 9999)
    {
        if (original[index] == true)
            length += 1;
    }
    return length;
}