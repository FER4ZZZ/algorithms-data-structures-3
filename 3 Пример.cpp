// Файловый способ

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n;
    in >> n;

    int tens = (n / 10) % 10;

    out << tens;

    in.close();
    out.close();
    return 0;
}

// Процедурный способ

#include <iostream>
using namespace std;

int readNumber() {
    int n;
    cout << "Введите неотрицательное целое число: ";
    cin >> n;
    return n;
}

int getTens(int n) {
    return (n / 10) % 10;
}

void printResult(int t) {
    cout << "Число десятков = " << t << endl;
}

int main() {
    int n = readNumber();
    int t = getTens(n);
    printResult(t);
    return 0;
}

// ООП-способ

#include <iostream>
#include <stdexcept>
using namespace std;

class NumberAnalyzer {
private:
    int n;
public:
    NumberAnalyzer(int n_) : n(n_) {
        if (n < 0)
            throw invalid_argument("Число должно быть неотрицательным");
    }

    int tens() const {
        return (n / 10) % 10;
    }
};

class ConsoleApp {
public:
    void run() {
        int n;
        cout << "Введите неотрицательное целое число: ";
        cin >> n;

        try {
            NumberAnalyzer analyzer(n);
            cout << "Число десятков = " << analyzer.tens() << endl;
        } catch (const exception &e) {
            cerr << "Ошибка: " << e.what() << endl;
        }
    }
};

int main() {
    ConsoleApp app;
    app.run();
    return 0;
}
