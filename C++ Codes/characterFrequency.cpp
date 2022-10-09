//Print Frequency of each character in a string in alphabatical order
void frequency(string s) {
    vector<int> v(26, 0);
    for(char c:s) v[c-'a']++;
    
    for(int i=0;i<26;i++){
        if(v[i]!=0) {
            cout << (char)(i+'a') << " " <<v[i] << endl;
        }
    }
}
