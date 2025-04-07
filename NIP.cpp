#include <iostream>
#include "NIP_package_headers.h"
using namespace std;
// обработчик команд NIP
void NIP(string command){
    if (command == "Brain"){
        print_brain();
    }
    else if (command == "Hello"){
        print_hello();
    }
    else if (command == "Numix"){
        print_hello();
    }
    else{
        cout << "No such command in NIP!" << endl;
    }
}