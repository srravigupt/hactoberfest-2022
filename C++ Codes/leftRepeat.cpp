//Index of the left most character which repeats itself
int leftMostRepeat(string s) {
    unordered_set<char> st;
    int ind=-1;
    for(int i=s.size()-1;i>=0;i--) {
        if(st.count(s[i])==1) ind=i;
        else st.insert(s[i]);
    }

    return ind;
}
