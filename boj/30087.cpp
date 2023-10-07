#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
// Algorithm	204
// DataAnalysis	207
// ArtificialIntelligence	302
// CyberSecurity	B101
// Network	303
// Startup	501
// TestStrategy	105
    for(int i = 0; i < n; i++){
        string t;
        cin >> t;
        if (t=="Algorithm"){
            cout << "204" << endl;
        }
                if (t=="DataAnalysis"){
            cout << "207"<< endl;
        }
                if (t=="ArtificialIntelligence"){
            cout << "302"<< endl;
        }
                if (t=="CyberSecurity"){
            cout << "B101"<< endl;
        }
                if (t=="Network"){
            cout << "303"<< endl;
        }
                if (t=="Startup"){
            cout << "501"<< endl;
        }
                if (t=="TestStrategy"){
            cout << "105"<< endl;
        }

    }
}