class Solution {
public:
bool isfre(int fre1[], int fre2[]){
    for(int i=0;i<26;i++){
        if(fre1[i]!=fre2[i]){
        return false;
        }
    }
    return true;

}
    bool checkInclusion(string s1, string s2) {
        int fre[26]={0};
        for(int i =0;i<s1.length();i++){
            fre[s1[i]-'a']++;
        }
        int windsize=s1.length();
        for(int i=0;i<s2.length();i++){
            int windidx=0,idx=i;
            int windfre[26]= {0};
           while(windidx < windsize && idx<s2.length()){
            windfre[s2[idx]-'a']++;
            windidx++;idx++;
           }
           if(isfre(fre,windfre)){
            return true;
           }
            }
            return false;
        
    }
};