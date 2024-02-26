#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Please input numbers to find average." << endl;
        return 1;
    }

    int n = argc - 1;
    double sum = 0.0;


    cout << "---------------------------------" << endl;
    cout << "Average of " << n << " numbers = ";
    for (int i = 1; i < argc; i++) {
        double num = atof(argv[i]);
        sum += num;
    }

    double average = sum / n;
    cout << average << endl;
    cout << "---------------------------------" << endl;

    return 0;
}