// Last updated: 9/3/2025, 9:06:14 AM
class Solution {
public:
    int reverse(int x) {
      long long revNum = 0;  
        while (x != 0) {
            int ld = x % 10;
            revNum = revNum * 10 + ld;
            x /= 10;
        }
        
        if (revNum < INT_MIN || revNum > INT_MAX) {
            return 0;
        }
        return (int)revNum;
        }
        
    }
    
;