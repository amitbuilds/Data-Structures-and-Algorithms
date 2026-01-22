class Solution {
public:
    int add(int num){
        if(num/10==0){
            return num;
        }
        int rem = num%10;
        int tens = num/10;
        int sum = rem + tens;
        return add(sum);
    }
    int addDigits(int num) {
        // stack<int> s;
        // s.push(num);
        // if(s.top()>10){
        //     int rem = num%10;
        //     int tens = num/10;
        //     int sum = rem + tens;
        //     s.push(sum);
        // }
        return add(num);
    }
}; 