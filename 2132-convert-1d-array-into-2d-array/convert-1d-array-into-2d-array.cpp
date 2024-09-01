class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& arr1D, int rows, int cols) {
      
        if (rows * cols != arr1D.size()) {
            return {};  // Return an empty vector if the dimensions don't match
        }

        // Initialize the 2D array and fill it in one pass
        vector<vector<int>> arr2D(rows, vector<int>(cols));
        for (int i = 0; i < rows * cols; i++) {
            arr2D[i / cols][i % cols] = arr1D[i];
        }

        return arr2D;
    }
};