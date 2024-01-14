#include<bits/stdc++.h>
using namespace std;

pair<int, int> findIdealPlacement(int L, int W, vector<vector<int>>& existingPots, int newPotHeight) {
    vector<vector<int>> room(L, vector<int>(W, 0));

    
    for (int row = 0; row < L; ++row) {
        for (int col = 0; col < W; ++col) {
            if (existingPots[row][col] <= newPotHeight) {
                room[row][col] = 1;
            }
        }
    }

    int maxDistance = 0;
    pair<int, int> idealPosition = {0, 0};

    
    for (int row = L - 1; row >= 0; --row) {
        for (int col = 0; col < W; ++col) {
            if (room[row][col] == 0) {
                int left = col - 1;
                while (left >= 0 && room[row][left] == 1) {
                    left--;
                }
                int right = col + 1;
                while (right < W && room[row][right] == 1) {
                    right++;
                }
                int distance = right - left - 1;
                if (distance > maxDistance) {
                    maxDistance = distance;
                    idealPosition = {row, col};
                }
            }
        }
    }

    return idealPosition;
}

int main() {
    int L, W, H;
    cin >> L >> W; // Room length and width
    vector<vector<int>> existingPots(L, vector<int>(W));
    for (int i = 0; i < L; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> existingPots[i][j]; // Read existing pot heights
        }
    }
    cin >> H; // New pot height

    pair<int, int> idealPlacement = findIdealPlacement(L, W, existingPots, H);
    cout << idealPlacement.first  << " " << idealPlacement.second << endl; // Adjust for 1-based indexing

    return 0;
}