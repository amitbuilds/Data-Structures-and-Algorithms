class Solution {
public:
    string removeDigit(string number, char digit) {

        for(int i =0 ; i< number.length();i++){
            if(number[i]==digit && number[i]<number[i+1]){
                number.erase(i,1);
                return number;
            }
        }
        int pos = number.rfind(digit);
        number.erase(pos,1);
        return number;

        // string ans;
        // bool found = true;
        // for(char ch : number){
        //     if(ch == digit && found){
        //         found = false;
        //         continue;
        //     }
        //     ans.push_back(ch);
        // }
        // return ans;
    }
};