bool isPalindrome(int x) {
   long int tmp=x;
    if(x<0)
    {
        return false;
    }
   long int rev=0;
    while(x!=0)
    {
        rev=rev*10 + x%10;
        x=x/10;
    }
    if(tmp==rev){   // tmp consits number
        return true;
    }
    return false; 
    
}