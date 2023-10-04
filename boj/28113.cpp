#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if (b < c){
        cout << "Bus";
    } else if (b > c){
        cout << "Subway";
    } else {
        cout << "Anything";
    }
}

