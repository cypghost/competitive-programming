class Solution {
public:
    int maxArea(vector<int>& height) {
// Initializing the first and last element of the array as starting points(left and right)
        int left = 0, right = height.size() - 1;
// Initialize maxArea as the smallest possible unit in order to find the max amount
        int maxArea = 0;
        while(left < right)
        {
// Height and Width multiplied to find the currArea
        int h = min(height[left], height[right]), w = right - left;
// currArea calculated 
        int currArea = h * w;
// Compare maxArea with currArea inorder to overwrite maxArea
        maxArea  = max(maxArea , currArea);
// Moving conditions
            if(height[left] <= height[right])
        {
            left += 1;
        }
        else
        {
            right -= 1;
        }
        }
// Returning condition
        return maxArea; 
    }
};
