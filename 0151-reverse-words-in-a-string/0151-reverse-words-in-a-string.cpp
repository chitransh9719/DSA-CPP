class Solution {
public:
    string reverseWords(string s) {

        string ans = "";
        int n = s.size();
        int i = n - 1;

        while (i >= 0) {

           
            while (i >= 0 && s[i] == ' ')
                i--;

            if (i < 0)
                break;

            int j = i;

          
            while (j >= 0 && s[j] != ' ')
                j--;

           
            if (ans != "")
                ans += " ";

            for (int k = j + 1; k <= i; k++)
                ans += s[k];

            i = j - 1;
        }
        // test leethub

        return ans;
    }
};