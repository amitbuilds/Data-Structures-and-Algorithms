#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;

        for (int i = 0; i < operations.size(); i++) {
            string op = operations[i];

            if (op == "C") {
                s.pop();
            }
            else if (op == "D") {
                s.push(2 * s.top());
            }
            else if (op == "+") {
                int top1 = s.top(); s.pop();
                int top2 = s.top();
                s.push(top1); // restore
                s.push(top1 + top2);
            }
            else {
                // number case
                s.push(stoi(op));
            }
        }

        int sum = 0;
        while (!s.empty()) {
            sum += s.top();
            s.pop();
        }

        return sum;
    }
};