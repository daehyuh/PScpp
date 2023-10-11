#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    double res = n/4.0;

    cout.setf(ios::fixed); cout.precision(2);
    cout << res << "\n";
    return 0;
}