// Last updated: 10/2/2025, 8:58:38 AM
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles; 
        int empty = numBottles;

        while (empty >= numExchange) {
            
            empty -= numExchange;
            numExchange++;  
            ans++;          
            empty++;         
        }


        return ans;
        
    }
};
