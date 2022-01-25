#include <bits/stdc++.h>
using namespace std;

class PRNG
{
private:
    int seed;
    int modulus;
    int multiplier;
    int increment;

public:
    PRNG()
    {
        seed = 0;
        modulus = 0;
        multiplier = 0;
        increment = 0;
    }
    PRNG(int seed)
    {
        this->seed = seed;
        modulus = 0;
        multiplier = 0;
        increment = 0;
    }
    PRNG(int seed, int modulus, int multiplier, int increment)
    {
        this->seed = seed;
        this->modulus = modulus;
        this->multiplier = multiplier;
        this->increment = increment;
    }
    void solve(int seed, int modulus, int multiplier, int increment, vector<int> &randomNo, int numberOfRandomNumbers)
    {
        randomNo[0] = seed;

        for (int i = 1; i < numberOfRandomNumbers; i++)
        {
            randomNo[i] = ((randomNo[i - 1] * multiplier) + increment) % modulus;
        }
    }
};

int main()
{
    int seed = 1;
    int modulus = 729;
    int multiplier = 40;
    int increment = 3641;

    int numberOfRandomNumbers = 6;

    vector<int> randomNo(numberOfRandomNumbers);
    PRNG obj;

    obj.solve(seed, modulus, multiplier, increment, randomNo, numberOfRandomNumbers);

    for (int i = 0; i < numberOfRandomNumbers; i++)
    {
        cout << randomNo[i] << " ";
    }
    return 0;
}