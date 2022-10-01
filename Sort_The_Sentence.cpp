class Solution {
public:
    string sortSentence(string s) {
        string sentence;
        vector<string> order(10);
        for(int i=0; i<s.size();i++){
            if(s[i]>=48 && s[i]<=57){
                order[s[i]-48] = sentence + " ";
                sentence = "";
                i++;
            }
            else
                sentence += s[i];
        }
        string result;
        for(string x : order){
            result += x;
        }
        result.pop_back();
        return result;
      }
};
