class ParkingSystem
{
public:
    int big;
    int medium;
    int small;
    ParkingSystem(int big, int medium, int small)
    {
        this->big = big;
        this->small = small;
        this->medium = medium;
    }

    bool addCar(int carType)
    {
        if (carType == 1 && big == 0 || carType == 2 && medium == 0 || carType == 3 && small == 0)
            return false;

        if (carType == 1)
            big--;
        if (carType == 2)
            medium--;
        if (carType == 3)
            small--;

        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */