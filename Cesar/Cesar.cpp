#include <iostream>
#include <cstring>

using namespace std;

void encriptada(char* ptr);
void desencriptada(char* ptr);

const int numPrimo = 3;

int main() {                                                   
    char cad[100];
    char* ptrc;
    ptrc = cad;
    cout << "Ingrese una cadena: ";
    cin.getline(cad, 100);
    cout << "Cadena original: " << cad << endl;
    encriptada(ptrc);
    cout << "Cadena encriptada: " << cad << endl;
    desencriptada(ptrc);
    cout << "Cadena desencriptada: " << cad << endl;
    return 0;
}

void encriptada(char* ptr) {                                   
    int len = strlen(ptr);                                    
    for (int i = 0; i < len; i++) {                             
        if (ptr[i] >= 'A' && ptr[i] <= 'Z') {                  
            if (isalpha(ptr[i])) {                               
                ptr[i] = ((ptr[i] - 'A' + numPrimo) % 26) + 'A';  
            }                                                        
        }else if (ptr[i] >= 'a' && ptr[i] <= 'z') {                
                if (isalpha(ptr[i])) {
                    ptr[i] = ((ptr[i] - 'a' + numPrimo) % 26) + 'a';
                }

            }
        }
}



void desencriptada(char* ptr) {                                       
    int len = strlen(ptr);                                           
    for (int i = 0; i < len; i++) {                                   
        if (ptr[i] >= 'A' && ptr[i] <= 'Z') {
            if (isalpha(ptr[i])) {
                ptr[i] = ((ptr[i] - 'A' + 26 - numPrimo) % 26) + 'A';
            }
        }else if (ptr[i] >= 'a' && ptr[i] <= 'z') {
                ptr[i] = ((ptr[i] - 'a' + 26 - numPrimo) % 26) + 'a';
            }
        }
    }
