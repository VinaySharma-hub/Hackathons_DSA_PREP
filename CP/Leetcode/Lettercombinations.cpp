class Solution {
public:
    vector<string> result;
    vector<string> mapping = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    void backtrack(string& digits, string current, int index) {
        if(index == digits.size()) {
            result.push_back(current);
            return;
        }

        string letters = mapping[digits[index]-'2'];
        for(char c : letters) {
            backtrack(digits, current + c, index + 1);
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        backtrack(digits, "", 0);
        return result;
    }
};
