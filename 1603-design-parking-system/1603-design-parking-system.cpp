class ParkingSystem {
public:
    vector<int>ans;
    ParkingSystem(int big, int medium, int small) {
        
        ans.push_back(small);
        ans.push_back(medium);
        ans.push_back(big);
        
    }
    
    bool addCar(int carType) {
        if(carType == 3)
        {
            if(ans[0] == 0)
            {
                return false;
            }
            else
            {
                ans[0]--;
                return true;
            }
        }
        else if(carType == 2)
        {
            if(ans[1] == 0)
            {
                return false;
            }
            else
            {
                ans[1]--;
                return true;
            }
        }
        else
        {
            if(ans[2] == 0)
            {
                return false;
            }
            else
            {
                ans[2]--;
                return true;
            }
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */