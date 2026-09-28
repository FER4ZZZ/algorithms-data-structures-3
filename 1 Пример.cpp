// Файловый способ


#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    double a, b;
    in >> a >> b;

    double c = sqrt(a*a + b*b);

    out << fixed << setprecision(4) << c;

    in.close();
    out.close();
    return 0;
}


// Процедурный способ


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void readData(double &a, double &b) {
    cout << "Введите катеты a b: ";
    cin >> a >> b;
}

double hypotenuse(double a, double b) {
    return sqrt(a*a + b*b);
}

void printResult(double c) {
    cout << fixed << setprecision(4)
         << "Гипотенуза = " << c << endl;
}

int main() {
    double a, b;
    readData(a, b);
    double c = hypotenuse(a, b);
    printResult(c);
    return 0;
}


// ООП-способ


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class RightTriangle {
private:
    double a, b;
public:
    RightTriangle(double a_, double b_) : a(a_), b(b_) {}

    double hypotenuse() const {
        return sqrt(a*a + b*b);
    }
};

class ConsoleApp {
public:
    void run() {
        double a, b;
        cout << "Введите катеты a b: ";
        cin >> a >> b;

        RightTriangle t(a, b);
        cout << fixed << setprecision(4)
             << "Гипотенуза = " << t.hypotenuse() << endl;
    }
};

int main() {
    ConsoleApp app;
    app.run();
    return 0;
}



