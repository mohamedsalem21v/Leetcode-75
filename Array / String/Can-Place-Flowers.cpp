class Solution {
public:
    int canPlaceFlowers(vector<int>& flowerbed, int n) {
    
    int cnt = 0;
    if(flowerbed.size() == 1 and flowerbed[0] == 0 and n == 1)
        return true;
    if(flowerbed.size() > 1 and flowerbed[0] == 0 and flowerbed[1] == 0)
    {
        cnt++;
        flowerbed[0] = 1;
    }
    for(int i = 1; i< flowerbed.size(); i++)
    {
        if(i == flowerbed.size()-1 and flowerbed[i-1] == 0 and flowerbed[i] == 0)
        {
            cnt++;
            break;
        }
        if(flowerbed[i] == 0 and flowerbed[i-1] == 0 and flowerbed[i+1] == 0)
        {
            cnt++;
            flowerbed[i] = 1;
        }
            
    }
    return (cnt >= n ? true : false);
    }
};