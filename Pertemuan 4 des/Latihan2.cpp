#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "One" << endl;
            break;
        case 2:
            cout << "Two" << endl;
            break;
        default:
            cout << "Other number" << endl;
    }

    return 0;/* Pada bagian ini lebih tepatnya pada kolom 20 kurang tanda ";" di akhir dari "return 0" menjadi "return 0;" */

}
