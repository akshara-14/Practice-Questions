#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,2,3,4,1};
    vector<int> v(100, -1);
    int n = sizeof(arr) / sizeof(int);
    for(int i = 0; i < n; i++){
        v[arr[i]]++;
        if(v[arr[i]] == true) {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"No repeating number found"<<endl;
    return 0;
}