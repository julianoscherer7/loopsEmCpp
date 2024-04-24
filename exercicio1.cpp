#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Insira o primeiro numero:" << endl;
    cin >> num1;
    cout << "Insira o segundo numero:" << endl;
    cin >> num2;

    cout << num1 << " - " << num2 << endl;
    //return 0;
    for (int i = num1 ; i <= num2; i++) {
        if (i % 2 != 0)
        cout << "Os seus numeros impares entre os dois inseridos são: " << i << endl;
    }
    return 0;
}
