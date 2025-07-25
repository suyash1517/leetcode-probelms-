int reverse(int x){
    long int rev=0; 
    long int rem;
    while(x!=0)
    {
        rem= x%10;
        rev = rev*10 + rem;
        x=x/10;      
    }
    if(rev>INT32_MAX || rev<INT32_MIN) // 32bit integer range from -2^31 to 2^31-1
    {
        return 0;
    }
    return rev;

}