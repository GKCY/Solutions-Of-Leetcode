/*
Given a string which consists of lowercase or uppercase letters, find the length of the longest palindromes that can be built with those letters.

This is case sensitive, for example "Aa" is not considered a palindrome here.

Note:
Assume the length of given string will not exceed 1,010.

Example:

Input:
"abccccdd"

Output:
7

Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.
*/


class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> map(256,0);
        int res = 0;
        bool odd = false;
        for(auto& c : s)
            map[c - '\0']++;
        for(auto& i : map)
        {
            if(i % 2 == 0)
                res += i;
            else
            {
                odd = true;
                res += i - 1;
            }
        }
        if(odd)
            res++;
        return res;
    }
};
