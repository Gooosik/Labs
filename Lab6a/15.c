#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double k;
    cout << "Введіть значення k: ";
    cin >> k;

  
    double xA = 1, yA = 1;
    double xB = 2 * k, yB = 2 * k - 1;
    double xC = -2 * k, yC = k + 2;

   
    double AB = 2 * sqrt(2) * (k - 1);
    double BC = sqrt(16 * k * k + pow(3 - k, 2));
    double CA = sqrt(5 * k * k + 6 * k + 5);


    double perimeter = AB + BC + CA;


    double p = perimeter / 2;
    double area = sqrt(p * (p - AB) * (p - BC) * (p - CA));

   
    double radius = area / p;

   
    cout << "Периметр трикутника: " << perimeter << endl;
    cout << "Площа трикутника: " << area << endl;
    cout << "Радіус вписаного кола: " << radius << endl;

    return 0;
}
 
