// 2 - Identify if two strings are anagrams: isAnagram(char s1[], char s2[])
bool isAnagram(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    string sorted_s1 = s1;
    string sorted_s2 = s2;
    sort(sorted_s1.begin(), sorted_s1.end());
    sort(sorted_s2.begin(), sorted_s2.end());
    return sorted_s1 == sorted_s2;
}
