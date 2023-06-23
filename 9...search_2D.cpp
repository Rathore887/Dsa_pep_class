
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int index = 0;
        for (int i = 0; i < row; i++)
        {
            if (matrix[i][0] <= target && target <= matrix[i][col - 1])
            {
                index = i;
            }
        }
        for (int j = 0; j < col; j++)
        {
            if (matrix[index][j] == target)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    return 0;
}
