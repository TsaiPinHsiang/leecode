#include<iostream>
#include<string>
#include<set>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.length()-1;
        set<char> vowel = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        while(i < j){
            if(!vowel.count(s[i]))
                i++;
            if(!vowel.count(s[j]))
                j--;
            if(vowel.count(s[i]) && vowel.count(s[j])){
                char tem = s[i];
                s[i] = s[j];
                s[j] = tem;
                i++;
                j--; 
            }
        }
        return s;
    }
};