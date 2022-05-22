#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

int prov(string s) {
    
    
    int c = 0;
    int a = 0;
    while (s[c]) {
        if (s[c] >= 'A' && s[c] <= 'Z') {
            
        }
        else {
            a++;
            break; 
        }
        c++;

    }
    return a;
}

void Atbash(string s) {
    int posit;
    
    string str = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i <= s.size(); i++)
        if (str.find(s[i]) != string::npos) {
            posit = str.find(s[i]);
            s[i] = str[27 - posit];
        }
    cout << s << "\n";
    s.clear();

}
void vvod() {
    int var;
    int as=0;
    string ss; 
    
    
    cout << "Enter string: \n";
    getline(cin, ss);

    as = prov(ss);
    if (as > 0) {
        cout << "\nText is not correct, use CAPS English\n";
        exit(0);
    }
    cout << "\nDo you want to encrypt or decrypt a string? (1-encrypt, 2-descrypt)\n";
    cin >> var;
    if (var == 1) {
        cout << "Encrypt:\n";
        Atbash(ss);
    }
    else if (var == 2) {
        cout << "Descrypt:\n";
        Atbash(ss);
    }
    else if (var != 1 && var != 2)
        cout << "Error\n";
}
int main()
{
    bool p = true;
    char q = 'y';
    char qq;
    string s;
    int var;
    int as=0;

    cout << "Enter string: \n";
    getline(cin, s);

    as = prov(s);
    if (as > 0) {
        cout << "\nText is not correct, use CAPS English\n";
        exit(0);
    }
    cout << "\nDo you want to encrypt or decrypt a string? (1-encrypt, 2-descrypt)\n";
    cin >> var;
    if (var == 1) {
        cout << "Encrypt:\n";
        Atbash(s);
    }
    else if (var == 2) {
        cout << "Descrypt:\n";
        Atbash(s);
    }
    else if (var != 1 && var != 2)
        cout << "Error\n";

    while (p = true) {

        cout << "Do you want exit? (y or n)" << endl;
        cin >> qq;

        if (qq != q) 
            vvod();
        else {
            p = false;
            break;
        }
    }
    system("pause");
}

