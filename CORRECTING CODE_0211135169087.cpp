#include <iostream>
#include <iomanip>

using namespace std;

const int NUM_EXPERIMENTS = 3;
const int NUM_READINGS = 3;

int main() {
    double readingValue, total, average;

    for (int i = 1; i <= NUM_EXPERIMENTS; i++) {
        total = 0;
        cout << "\nEXPERIMENT " << i << endl;

        for (int j = 1; j <= NUM_READINGS; j++) {
            cout << "Enter reading " << j << " value: ";
            cin >> readingValue;
            total += readingValue;
        }

        average = total / NUM_READINGS;
        cout << "Experiment " << i << " average: " << fixed << setprecision(2) << average;

        if (average < 100) {
            cout << " - Below acceptable range\n";
        } else if (average <= 300) {
            cout << " - Within acceptable range\n";
        } else {
            cout << " - Above acceptable range\n";
        }
    }

    return 0;
}
