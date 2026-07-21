class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        vector<string>ans;
        for (const string &word : words){
            string temp = word;
            for(char &c :temp){
                c = tolower(c);
            }
            string row;
            if (row1.find(temp[0]) != string::npos)
                row = row1;
            else if (row2.find(temp[0]) != string::npos)
                row = row2;
            else
                row = row3;
            
            bool ok = true;
            for (char c : temp) {
            if (row.find(c) == string::npos) {
                ok = false;
                break;
            }
        }

        if (ok)
            ans.push_back(word);
        }
    return ans;
    }
};