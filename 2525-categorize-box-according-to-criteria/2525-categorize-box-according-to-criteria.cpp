class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        
        long long int volume = (long long)length* (long long)width*(long long)height;
        bool bulk = false;
        bool heavy = false;
        string temp = "";
        if(volume >= 1e9 || length >= 10000 || height >= 10000 || width >= 10000)
        {
            bulk = true;
        }
        if(mass >= 100)
        {
            heavy = true;
        }
        if(bulk && heavy)
        {
            temp = "Both";
            return temp;
        }
        if(bulk)
        {
            temp = "Bulky";
            return temp;
        }
        if(heavy)
        {
            temp = "Heavy";
            return temp;
        }
        temp = "Neither";
        return temp;
        
    }
};