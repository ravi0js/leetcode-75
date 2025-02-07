class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        
        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0 &&
                (i == 0 || flowerbed[i - 1] == 0) &&
                (i == size - 1 || flowerbed[i + 1] == 0)) {
                
                flowerbed[i] = 1; // Plant a flower
                n--; // Reduce the count of flowers needed
                
                if (n == 0) return true; // If we placed enough flowers, return true
            }
        }
        
        return n <= 0; // Check if we could place all required flowers
    }
};
