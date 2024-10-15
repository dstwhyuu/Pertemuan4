#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1); /* pada bagian ini lebih tepatnya pada kolom 6 kurang tanda ";" di akhir*/
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "faktorial of " << num << " is " << factorial(num) << endl;

    return 0;
}
