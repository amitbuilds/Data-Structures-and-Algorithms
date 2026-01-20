class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();

    int i = 0 ;
    while(i<n && s[i]== ' '){
        i++;
    }
    int sign = 1;
    if(i<n &&(s[i]=='+' || s[i]=='-')){
        if(s[i]=='-'){
            sign = -1;
        }
        i++;
    }
    long long num = 0;
    while (i < n && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');

            // 4. Handle overflow
            if (num > INT_MAX) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            i++;
        }
    return sign*num;

//         string ans = "";
//         if(n==0){
//             return 0;
//         }
//         for(int i=0;i<n ;i++){
//             if
//             (   s[i]=='1' ||
//                 s[i]=='2' ||
//                 s[i]=='3' ||
//                 s[i]=='4' ||
//                 s[i]=='5' ||
//                 s[i]=='6' ||
//                 s[i]=='7' ||
//                 s[i]=='8' ||
//                 s[i]=='9'         
//             ){
//                 ans.push(s[i]);
//             }else{
//                 break;
//             }
//         }
// int x = stoi(ans);
//     return x;

    }
};