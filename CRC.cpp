#include <bits/stdc++.h>
using namespace std;

vector<bool> crc(const vector<bool> &data, const vector<bool> &generator) {
    
    vector<bool> remainder(generator.size() - 1);
    for (int i = 0; i < generator.size() - 1; i++) {
        remainder[i] = data[i];
    }
    for (int i = 0; i < data.size() - generator.size() + 1; i++) {
        if (remainder[0] == 1) {
            for (int j = 0; j < generator.size(); j++) {
                remainder[j] = remainder[j] ^ generator[j];
            }
        }
        for (int j = 0; j < generator.size() - 1; j++) {
            remainder[j] = remainder[j + 1];
        }
        if (i + generator.size() < data.size()) {
            remainder[generator.size() - 1] = data[i + generator.size()];
        } else {
            remainder[generator.size() - 1] = 0;
        }
    }
    return remainder;
}

int main() {
    
    vector<bool> data = {1, 0, 1, 0, 1, 0};
    
    vector<bool> generator = {1, 0, 1};
    
    vector<bool> remainder = crc(data, generator);
    
    cout << "Data: ";
    for (bool bit : data) {
        
        cout << bit << " ";
    }
    
    cout << "\nGenerator: ";
    for (bool bit : generator) {
        
        cout << bit << " ";
    }
    
    cout << "\nRemainder: ";
    for (bool bit : remainder) {
        
        cout << bit << " ";
    }
    
    cout << "\n";
    
    return 0;
}
