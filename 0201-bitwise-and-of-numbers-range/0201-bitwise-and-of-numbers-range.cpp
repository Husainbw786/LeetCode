class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
        int count = 0;
        while(left != right)
        {
            left = left >> 1;
          //  cout << left << " ";
            right = right >> 1;
            //cout << right << endl;
            count++;
        }
        while(count--)
        {
             left = left << 1;   
        }
       return left;
    }
};