void reverseString(char* s, int sSize) {
    char *rev = (char*)malloc(sSize*sizeof(char));
    
    int j=0;
    for(int i=sSize-1;i>=0;i--)
    {
        rev[j++]=s[i];
    }
    for(int i=0;i<j;i++)
    {
        s[i]=rev[i];
    }
}