#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> precompute_min_values(int maxX) {
    vector<int> minValue(maxX + 1, 0);

    for (int x = 1; x <= maxX; ++x) {
        vector<bool> visited(101, false);
        queue<int> q;
        q.push(x);
        visited[x] = true;

        int minReached = x;

        while (!q.empty()) {
            int current = q.front();
            q.pop();
            minReached = min(minReached, current);

            if (current > 3 && !visited[current - 3]) {
                visited[current - 3] = true;
                q.push(current - 3);
            }

            if (current % 2 == 0 && !visited[current / 2]) {
                visited[current / 2] = true;
                q.push(current / 2);
            }
        }

        minValue[x] = minReached;
    }

    return minValue;
}

int main() {
    int T;
    cin >> T;

    vector<int> minValues = precompute_min_values(100);

    while (T--) {
        int X;
        cin >> X;
        cout << minValues[X] << endl;
    }

    return 0;
}