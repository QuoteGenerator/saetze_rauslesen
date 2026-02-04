#include <iostream>
#include <string>
using namespace std;


int main(){

    string sentence;
    int anzahlZeichen = 0;
    int anzahlWoerter = 0;
    int anzahlVokale = 0;
    bool vorherigesIstLeerzeichen = true;

    cout << "Geben Sie einen Satz ein: ";
    getline(cin, sentence);

    anzahlZeichen = sentence.length();
    
    for(char c : sentence){
        if(c != ' ' && vorherigesIstLeerzeichen == true){
            anzahlWoerter++;
        }
        vorherigesIstLeerzeichen = (c == ' ');
    }    

    for(char c : sentence){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'
        ){
            anzahlVokale++;
        }
    }


    cout 
    << anzahlZeichen << endl 
    << anzahlWoerter << endl 
    << anzahlVokale << endl;

    return 0;
}
