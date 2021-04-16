

#include <iostream>
#include <string>
using namespace std;

class Rot13{
    private:
        int key=13;
    public:
        string alphabeth="abcdefghijklmnopqrstuvwxyz";
        Rot13(){};
        ~Rot13(){};

        string cipher(string plaintext){
            string ciphertext;

            for(int i=0;i<plaintext.size();i++){
                int index=alphabeth.find(plaintext[i]);
                int new_key= index+key;
                ciphertext+= alphabeth.at(new_key % alphabeth.size());
            }
            return ciphertext;
        }

        string decipher(string ciphertext){
            string plaintext;

            for(int i=0;i<ciphertext.size();i++){
                int index=alphabeth.find(ciphertext[i]);
                int new_key= (index < key)? key+index: index-key;
                plaintext+= alphabeth.at(new_key);
            }
            return plaintext;
        }

};

int main(){
    Rot13 emisor,receptor;
    string msj;
    cout<<"Input your message: ";
    getline(cin,msj);

    cout<<"Encrypted message: "<<emisor.cipher(msj)<<"\n";
    cout<<"decrypted message: "<<receptor.decipher(emisor.cipher(msj))<<"\n";


}
