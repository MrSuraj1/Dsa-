//CHECL IF TWO ANAGRAM

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    cout << "Check if two strings are anagrams\n";

    string s1, s2;
    cin >> s1 >> s2;

    if(s1.length() != s2.length()) {
        cout << "Strings are not of equal length, so not anagrams." << endl;
        return 0;
    }

    unordered_map<char, int> freq1;
    unordered_map<char, int> freq2;

    for(char ch : s1) {
        freq1[ch]++;
    }

    for(char ch : s2) {
        freq2[ch]++;
    }

    if(freq1 == freq2) {
        cout << "Yes, the strings are anagrams!" << endl;
    } else {
        cout << "No, the strings are not anagrams." << endl;
    }

    return 0;
}
