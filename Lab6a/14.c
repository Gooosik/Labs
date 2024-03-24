#include <iostream>
#include <cmath>

using namespace std;


void sound(int frequency) {
    cout << "\a"; 
}

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

    cout << "Периметр трикутника: ";
    cout << perimeter << endl;
    cout << "Площа трикутника: ";
    cout << area << endl;
    cout << "Радіус вписаного кола: ";
    cout << radius << endl;

    
    cout << "Натисніть будь-яку клавішу і Enter для завершення програми зі звуковим сигналом: ";
    getchar(); 
    sound(1000); 

    return 0;
}
