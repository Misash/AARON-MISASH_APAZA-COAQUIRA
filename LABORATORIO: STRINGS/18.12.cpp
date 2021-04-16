
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const string word_list[]={"auto","libro","persona","amor","heterogeneo",
                          "hijo","dinero","barcelona","paz","futuro",
                          "agua","computadora","oso","caleidoscopio"};






void play_Ahorcado() {

    srand(time(0));
    string word = word_list[rand() % 14];
    int len = word.size();
    string unknown_word(len, 'X');
    string letter;

    string stickman(12, ' ');
    char s = 92;




    int points=0;
    int errors = 0;

    while (errors != 7 && points <len) {

        //grafico de stickman
        for (int i = 0; i < stickman.size(); i += 3) {
            cout << stickman.at(i) << stickman.at(i + 1) << stickman.at(i + 2) << endl;
        }


        cout << "\n\nAdivine la palabra:   " << unknown_word;
        cout << "\n\nIngrese su letra:";
        cin >> letter;

        //reemplazamos en la palabra si hay coincidencias

        int first_index = word.find(letter);

        if (first_index != string::npos) {

            while (first_index != string::npos) {
                unknown_word.replace(first_index, 1, letter);
                first_index = word.find(letter, first_index + 1);
            }
            points++;
        }

        else {

            switch (errors) {
                case 0:stickman[11] = s;break;
                case 1:stickman[9]='/';break;
                case 2: stickman[7]='|';break;
                case 3: stickman[5]=s;break;
                case 4: stickman[4]='|';break;
                case 5: stickman[3]='/';break;
                case 6: stickman[1]='O';break;
            }

                    errors++;
            }


            cout << unknown_word << "\n----------------------------------------------\n";

        }
        if(points == len ){
            string ans;
            cout<<"\nFelicidades!!! Adivino mi palabra. Desea jugar otra vez? s/n: ";cin>>ans;
            if(ans=="s"){
                play_Ahorcado();
            }
        }
}




int main(){

    play_Ahorcado();

}
