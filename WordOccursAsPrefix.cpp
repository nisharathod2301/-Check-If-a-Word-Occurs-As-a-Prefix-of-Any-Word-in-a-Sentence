class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string words;
        int count = 0;
        int ans = -1;

        while(ss>>words){
            size_t found = words.find(searchWord);
            count++;
            if(found != string::npos){
                ans = count;
                break;
            }
        }
        return ans;
    }
};
