class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        
        vector<double>v(2,0);
        int i;
        double f = double(celsius * 9 / 5) + 32;
        double k = double(celsius + 273.15);
        v[1] = f;
        v[0] = k;
        return v;
    }
};