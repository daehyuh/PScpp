#include <iostream>
using namespace std;

int main(){
    int n, status = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int number;
        cin >> number;
        if (number%2==0){
            status++;
        } else {
            status--;
        }
    }
    if (status > 0){
        cout << "Happy";
    } else {
        cout << "Sad";
    }
}