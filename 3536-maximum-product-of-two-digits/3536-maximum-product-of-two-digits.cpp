class Solution {
public:
    int maxProduct(int n) {
        int i = 0;
        int j = 0;
        while(n){
            int ld = n%10;
            if(ld>=i){
                j = i;
                i = ld;
            }
            else if (ld>j){
                j = ld;
            }
            n/=10;
        }
        return i*j;
    }
};