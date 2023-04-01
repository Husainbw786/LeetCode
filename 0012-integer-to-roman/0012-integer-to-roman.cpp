class Solution {
public:
    string intToRoman(int num) {
        
        string s = "";
        int i;
        
        while(num >= 1000)
        {
            num = num - 1000;
            s += "M";
        }
        while(num >= 900)
        {
            num = num - 900;
            s += "CM";
        }
        while(num >= 500)
        {
            num = num - 500;
            s += "D";
        }
        while(num >= 400)
        {
            num = num - 400;
            s += "CD";
        }
        while(num >= 100)
        {
            num = num - 100;
            s += "C";
        }
        while(num >= 90)
        {
            num = num - 90;
            s += "XC";
        }
        while(num >= 50)
        {
            num = num - 50 ;
            s += "L";
        }
        while(num >= 40)
        {
            num = num - 40;
            s += "XL";
        }
        while(num >= 10)
        {
            num = num - 10;
            s += "X";
        }
        while(num >= 9)
        {
            num = num - 9;
            s += "IX";
        }
        while(num >= 5)
        {
            num = num - 5;
            s += "V";
        }
        while(num >= 4)
        {
            num = num - 4;
            s += "IV";
        }
        while(num >= 1)
        {
            num = num - 1;
            s += "I";
        }
        return s;
    }
};
