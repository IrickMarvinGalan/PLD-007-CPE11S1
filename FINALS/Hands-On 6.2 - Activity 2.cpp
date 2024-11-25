#include <iostream>
#include <cmath>

using namespace std;

double solveHypotenuse (double a, double b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}

int main () {
    double a, b, hyp;
    
    while (true) {
        cout << "Hypotenuse Calculator (Enter -1 to exit)\n"
             << "Given Sides A and B\n"
             << "Side a = ";
        cin >> a;
        if (a == -1) break;
        cout << "Side b = ";
        cin >> b;
        if (b == -1) break;
        
        hyp = solveHypotenuse(a, b);
        
        cout << "\nThe Value of Hypotenuse: " << hyp << "\n\n";
    }
}
