//Rotate a string in clockwise or anticlockwise direction by n places
string rotate(string s, int n, char direction) {
    if(direction=='L') {
        reverse(s.begin(), s.begin()+n);
        reverse(s.begin()+n, s.end());
        reverse(s.begin(), s.end());
    } else {
        reverse(s.end()-n, s.end());
        reverse(s.begin(), s.end()-n);
        reverse(s.begin(), s.end());
    }
    
    return s;
}
