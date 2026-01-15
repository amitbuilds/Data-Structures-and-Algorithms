class Solution {
public:
    int maxArea(vector<int>& height) {
        int st = 0;
        int end = height.size()-1;
        int maxVol = 0;
        while(st<end){
            int h = min(height[st],height[end]);
            int width = end - st;
            maxVol = max(maxVol,h*width);

            if(height[st] < height[end]){
                st++;
            }
            else{
                end--;
            }
        }
    return maxVol;
    }
};