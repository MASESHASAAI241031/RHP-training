#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Direction arrays for 8 neighboring cells (King's moves)
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, 1, -1, -1, 0, 1};
    
    int rows, cols;
    cin >> rows >> cols;
    
    // Use vector for dynamic 2D array
    vector<vector<int>> grid(rows, vector<int>(cols));
    
    // Read the grid
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];
        }
    }
    
    int targetRow, targetCol;
    cin >> targetRow >> targetCol;
    
    // Calculate sum of all valid neighbors
    int neighborSum = 0;
    
    // Convert to 0-indexed
    int r = targetRow - 1;
    int c = targetCol - 1;
    
    // Check all 8 directions
    for (int k = 0; k < 8; k++) {
        int newRow = r + dx[k];
        int newCol = c + dy[k];
        
        // Validate bounds
        if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols) {
            cout << grid[newRow][newCol] << " ";
            neighborSum += grid[newRow][newCol];
        }
    }
    
    cout << neighborSum;
    
    return 0;
}