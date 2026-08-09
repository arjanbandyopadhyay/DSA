class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>temp(26,0);
        for(int i=0;i<sentence.size();i++){
           int idx=sentence[i]-'a';
           temp[idx]++;
        }
        for(int i=0;i<temp.size();i++){
            if(temp[i]==0)
            return false;

        }
        return true;
    }
};