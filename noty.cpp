#include <cstdlib>
#include <iostream>
using namespace std;

void modeTranspose (){
    string notes, instrument;
    bool correct;
    int notesDec, instrumentDec;

    while (!correct)
    {
        cout << "Insert key found in notes (ie. \"Trumpet in C\")\n";
        cin >> notes;
        notesDec = convert
    }

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