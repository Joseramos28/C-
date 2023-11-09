#include <iostream>

using namespace std;

int main() {
     int option = 0;
     cout << "introduce una opcion ";
     cin >> option;
     switch(option) {
         case 1:
            cout << "option 1";
            break;
         case 2:
           cout << "option 2";
           break;
         default:
           cout << "esto no existe";     
     } 
     
}