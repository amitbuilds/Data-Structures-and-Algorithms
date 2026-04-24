class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.length();
        int countL = 0;
        int countR = 0;
        int countS = 0;

        for (int i = 0; i < n; i++) {
            char x = moves[i];

            if (x == 'L') {
                countL++;
            } else if (x == 'R') {
                countR++;
            } else {
                countS++;
            }
        }

        int ans = 0;

        if (countR > countL) {
            ans = (countR + countS) - countL;
        } else {
            ans = (countL + countS) - countR;
        }

        return ans;
    }
};