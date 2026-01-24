class Solution {
public:
    int longestPalindrome(string s) {
        // if(s.length()==0){
        //     return 0;
        // }
        // if(s.length()==1){
        //     return 1;
        // }
        // vector<char> arr(s.begin(), s.end());
        // map<char, bool> state;
        // for (char c : arr) {
        //     state[c] = true;
        // }
        // int yes = 0;
        // int no = 0;

        // for(int i =0 ; i<s.length();i++){
        //     if(arr[i]==false){
        //         continue;
        //     }
        //     char ch = arr[i];
        //     for(int j = i+1;j<s.length();j++){
        //         if(arr[i]==arr[j] && arr[j]!=false){
        //             yes++;
        //             arr[j]=false;
        //         }else{
        //             no++;
        //         }
        //     }
        // }
        // return (sum+1);
          map<char, int> freq;

        // count frequency
        for (char c : s) {
            freq[c]++;
        }

        int length = 0;
        bool hasOdd = false;

        for (auto it : freq) {
            if (it.second % 2 == 0) {
                length += it.second;
            } else {
                length += it.second - 1;
                hasOdd = true;
            }
        }

        // one odd char allowed in center
        if (hasOdd) length++;

        return length;
    }
};