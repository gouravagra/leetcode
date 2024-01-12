class Solution {
public:
    bool halvesAreAlike(string s) {
        int a=0,b=0;
        for(int i=0;i<s.size()/2;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='U'||s[i]=='I')a++;
        }
        for(int i=s.size()/2;i<s.size();i++){
             if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='U'||s[i]=='I')b++;
        }
        if(a==b)return true;
        return false;
    }
};