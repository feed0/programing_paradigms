// 5 - Check if a string is a palindrome: isPalindrome(char s[])
bool isPalindrome(string s) {
    for(int i = 0; i < s.length(); i++){
        if(s[i] != s[s.length() - 1 - i]){
            return false;
        }
    
    }return true;
}
