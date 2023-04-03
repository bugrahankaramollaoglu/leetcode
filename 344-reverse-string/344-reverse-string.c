void reverseString(char* s, int sSize){
    int sSize2 = sSize;
    char t;
    for (int i=0; i<sSize/2; i++) {
        t = s[sSize2-1];
        s[sSize2-1] = s[i];
        s[i] = t;
        sSize2--;
    }
}