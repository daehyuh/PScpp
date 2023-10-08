#include <iostream>
using namespace std;
int main(){
    int t, a;
    cin >> t >> a;
    
    if (t < a){
        cout << a-t;
    } else{
        cout << 24-t+a;
    }
}