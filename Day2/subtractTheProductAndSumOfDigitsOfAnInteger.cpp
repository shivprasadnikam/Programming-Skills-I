



                                                            //  Subtract the Product and Sum of Digits of an Integer  //

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1;
        while(n>0)
        {
            int rem=n%10;
            sum+=rem;
            product*=rem;
            n/=10;
        }
        return product-sum;
    }
};
