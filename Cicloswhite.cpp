#include <iostream>

using namespace std;

int main() {
    do { 
    char respuesta;
    cout << "deseas terminar el programa?" << endl;
    cin >> respuesta;
    if (respuesta == 'y') {
        cout << "bye bye";
        break;
    }
 }   while (true);
}