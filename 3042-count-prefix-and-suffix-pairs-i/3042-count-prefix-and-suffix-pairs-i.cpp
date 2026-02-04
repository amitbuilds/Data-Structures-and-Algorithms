class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
         int n = words.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {  // i < j

                int len1 = words[i].size();
                int len2 = words[j].size();

                if (len1 <= len2 &&
                    words[j].substr(0, len1) == words[i] &&
                    words[j].substr(len2 - len1) == words[i]) {
                    count++;
                }
            }
        }
        return count;
        // int n = words.size();
        // int count = 0 ;
        // for(int i = 0;i<n;i++){
        //     for(int j = i;j<n;j++){//b.substr(b.size() - a.size()) == a
        //         if(words[j].substr(0,words[i].size()) == words[i] && words[j].substr(words[j].size()-words[i].size())==words[i]){
        //             count++;
        //         }
        //     }
        // }
        // return count;
    }
};