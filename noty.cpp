#include <cstdlib>
#include <iostream>

void modeTranspose (){
    string notes, instrument;

    cout << "Insert key found in notes (ie. \"In C\")\n";
    cin >> notes;
}

int main (){
    char param;
    
    
    cout << "Note transposing software\nMade by: Adam Trn\n";
    cout << "Select mode:\nt - transpose\np - pentatonic\n";
    cin >> param;
    switch (param){
        case ('t'):
            modeTranspose();
            break;
        case ('p'):
            modePenta();
            break;
        default:
            cout << "Wrong mode, exiting...\n";
            return 0;
    }

}