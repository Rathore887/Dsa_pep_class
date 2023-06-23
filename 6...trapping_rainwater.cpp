
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lMax(n),rMax(n);

        lMax[0] = height[0];
        rMax[n - 1]= height[n-1];

        for(int i=1; i<n;i++){
            lMax[i]= max(height[i], lMax[i-1]);
            rMax[n-i-1] = max(height[n-i-1], rMax[n-1]);
        }

        for(int i=n-2; i>=0; i--){
            rMax[i]= max(height[i], rMax[i+1]);
        }

        int water = 0;
        for(int i=1; i<n; i++)
        {
            water += (min(lMax[i], rMax[i])- height[i]);
        }
        return water;

        
    }
};
