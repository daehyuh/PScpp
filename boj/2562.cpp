#include <iostream>
using namespace std;

int main(){
    int maxNum = -1, idx = 0, cnt = 0;
    while (!cin.eof()){
        cnt++;
        int temp;
        cin >> temp;
        if(maxNum < temp){
            maxNum = temp;
            idx = cnt;
        }
    }
    cout << maxNum << endl;
    cout << idx << endl;
}