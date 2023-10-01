#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n/5; i++)
    {
        cout << "V";
    }
    for(int j = 0; j < n%5; j++){
        cout << "I";
    }
    return 0;
}