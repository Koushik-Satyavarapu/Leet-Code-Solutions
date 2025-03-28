class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
    vector<int> result;

    for (int i = 0; i < m; i++) {
        // Find the minimum in the row
        int minVal = matrix[i][0], colIdx = 0;
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j];
                colIdx = j; // Store column index of min element
            }
        }

        // Check if it's the maximum in its column
        bool isLucky = true;
        for (int k = 0; k < m; k++) {
            if (matrix[k][colIdx] > minVal) {
                isLucky = false;
                break;
            }
        }

        if (isLucky) {
            result.push_back(minVal);
        }
    }

    return result;
    }
};