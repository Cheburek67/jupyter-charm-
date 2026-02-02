#include <iostream>
#include <cstdlib>
using namespace std;

void banner();
void choise();
void editor();
void enterpter();  
void pip();

int main() {  
    banner();
    choise();
    return 0;
}

void banner() {
    system("python3 banner.py");  
}

void choise() {
    cout << "Try: \n";
    cout << " \n";
    cout << " \n";
    cout << " 1. Editor \n";
    cout << " ";
    cout << " ";
    cout << " 2. Enterpter \n";
    cout << " ";
    cout << " ";
    cout << " 3. Pip installer \n";
    cout << "  \n";
    cout << "  \n";
    cout << "  \n";
    cout << "  \n";

    int choise; 

    cout << "Number: " << endl;
    cin >> choise;

    if (choise == 1) {
        editor();
    } else if (choise == 2) {
        enterpter();  
    } else if (choise == 3) {
        pip();
    } else {
        cout << "Invalid." << endl;  
    }
}

void editor() {
    system("ruby editor.rb");
}

void enterpter() {  
    system("bash interepter.sh");   
}

void pip() {
    system("cd pip && lua pip.lua"); 
}
