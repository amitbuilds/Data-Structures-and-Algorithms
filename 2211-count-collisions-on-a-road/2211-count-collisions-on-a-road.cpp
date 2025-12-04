class Solution {
public:
    int countCollisions(string s) {
        int n = s.size();

        // Remove all leading L's
        int left = 0;
        while (left < n && s[left] == 'L') left++;

        // Remove all trailing R's
        int right = n - 1;
        while (right >= 0 && s[right] == 'R') right--;

        int collisions = 0;

        // Every R or L inside this trimmed region will collide
        for (int i = left; i <= right; i++) {
            if (s[i] == 'L' || s[i] == 'R')
                collisions++;
        }

        return collisions;
    }
};
