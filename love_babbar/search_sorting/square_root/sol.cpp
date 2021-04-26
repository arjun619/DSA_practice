class Solution {
  public:
    int countSquares(int N) {
        // code here
        int val=1;
        int tt=3,counts=0;
        while (true)
        {
            if (N>val)
            {
                counts++;
                val+=tt;
                tt+=2;
            }
            else
            return counts;
        }
        
    }
};
