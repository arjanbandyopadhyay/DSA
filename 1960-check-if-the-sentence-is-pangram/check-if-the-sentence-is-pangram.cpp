class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>temp(26,0);
        int count=0;
        for(int i=0;i<sentence.size();i++){
           int idx=sentence[i]-'a';
           if(temp[idx]==0){
           temp[idx]++;
           count++;
           }
           
        }
        if(count==26)
           return true;


        return false;
        
    }
};