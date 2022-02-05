class Solution {
public:
    string removeDuplicates(string s) {
   int size = s.size();
    int i = 0;
	while(i < size-1) {
        if(s[i] == s[i+1] && i==0) {
            s.erase(i,2);
			size -= 2;
            i -= 1;
        } else if(s[i] == s[i+1]) {
            s.erase(i,2);
			size -= 2;
			i -= 2;
        }
		i++;
	}
	return s;
    }
};
