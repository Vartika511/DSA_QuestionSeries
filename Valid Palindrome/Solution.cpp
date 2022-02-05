char lower(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 0 && ch <= 9)) return ch;
    else{
        ch = ch - 'A' + 'a';
        return ch;
    }
}
class Solution {
public:
    bool isPalindrome(string s) {
        
          int st=0; 
    int e= s.size()-1;
    while(st<=e){
        if(!isalnum(s[st])){
            st++;
        }
        else if(!isalnum(s[e])){
            e--;
        }
        else if(lower(s[st])==lower(s[e])){
            st++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;       

    }
};
