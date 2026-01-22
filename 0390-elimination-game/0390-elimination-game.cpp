class Solution {
public:
    int lastRemaining(int n) {
         int head = 1;
        int step = 1;
        int remaining = n;
        bool left = true;

        while (remaining > 1) {
            if (left || remaining % 2 == 1) {
                head += step;
            }
            remaining /= 2;
            step *= 2;
            left = !left;
        }
        return head;
        // if(n==0 || n==1){
        //     return n;
        // }
        // if(n==5 ||n==2 || n==3||n==4){
        //     return 2;
        // }
        // if(n==6||n==7){
        //     return 4;
        // }
        // if(n==8||n==9){
        //     return 6;
        // }
        // return 8;
    }
};