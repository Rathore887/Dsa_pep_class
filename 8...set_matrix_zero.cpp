
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {

        vector<int> arr1(matrix.size(), -1);
        vector<int> arr2(matrix[0].size(), -1);

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    arr1[i] = 0;
                    arr2[j] = 0;
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (arr1[i] == 0 || arr2[j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main()
{
    return 0;
}
