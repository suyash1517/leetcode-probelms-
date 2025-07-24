bool checkPerfectNumber(int num) {
    int sum=0;
    for(int i=1;i<=(num)/2;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){  // check sum is equal to num or not
        return true;
    }
    else{
        return false;
    }
}