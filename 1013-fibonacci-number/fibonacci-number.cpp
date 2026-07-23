class Solution {
public:
int nums(int n){
    if(n==0 || n==1){
        return n;
    }
    return nums(n-1)+nums(n-2);
}
    int fib(int n) {
        return nums(n);
        
    }
};