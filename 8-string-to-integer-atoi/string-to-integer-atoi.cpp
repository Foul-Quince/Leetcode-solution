class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long result = 0;

    while (i<s.length() && s[i]==' '){
        i++;
    } 

    if (s[i]=='+' || s[i]=='-'){ 
    if (s[i] == '-'){
        sign = -1;
    }
    else{
        sign = 1;
    }
    i++;
    }
    while (i<s.length() && isdigit(s[i])){
        int digit = s[i] - '0';

        if (result> (INT_MAX-digit)/10){
            return sign == 1? INT_MAX : INT_MIN;
        }
        result = result*10+digit;
        i++;
    }
    return result*sign;
    }
};