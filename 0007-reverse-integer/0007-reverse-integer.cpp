class Solution {
public:
    int reverse(int x) {
         long  rn = 0 ;
         int dl = x;
         while ( x != 0){
            dl = x % 10;
            rn = (rn*10)+dl;
            x = x / 10 ;
         }
          if (rn > INT_MAX || rn < INT_MIN) return 0;
    return rn;
    }
};