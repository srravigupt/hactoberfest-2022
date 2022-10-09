//Check if strings s1 and s2 are anagram of each other
bool isAnagram(string s1, string s2) {
    if(s1.size()!=s2.size()) return false;
    
    vector<int> v(26,0);
    for(char c:s1) v[c-'a']++;
    for(char c:s2) v[c-'a']--;
    
    for(int i=0;i<26;i++)
    if(v[i]!=0) return false;
    
    return true;
}
