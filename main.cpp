#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class user{
    public:
        string user_id;
        string password;
};


void register_user(){
    string filename;
    user data;
    cout << "Digite o ID de usuario \n" << endl;
    cin >> data.user_id;
    cout << "\n" << endl;
    cout << "Digite a Senha de usuario \n" << endl;
    cin >> data.password;
    cout << "\n" << endl;

    filename = "usuarios/" + data.user_id + ".txt";

    ofstream myfile (filename);
    if (myfile.is_open())
      {
        myfile << data.user_id;
        myfile << "\n";
        myfile << data.password;
        myfile.close();
      }

}


int log_in(string id){
      string filename;
      string password;
      user data;
      string line;
      filename = "usuarios/" + id + ".txt";
      ifstream myfile (filename);
      if (myfile.is_open())
      {
        getline (myfile,line);
        data.user_id = line;
        getline (myfile,line);
        data.password = line;
        myfile.close();
        cout << "Digite a Senha de usuario para Login \n" << endl;
        cin >> password;
        if (password == data.password ){
             cout << "Usuario Logado \n" << endl;
             return 1;

        }else{
            cout << "Senha Errada, por gentiliza tente novamente \n" << endl;
            return 0;


        }
      }

      else{
        cout << "Unable to open file";
        return 0;
      }
}



int main()
{
    string id;
    ofstream myfile ("database.txt");
    int state;
    while(1){
        cout << "Digite 1 para Registro \nDigite 2 para Log in \n" << endl;
        cin >> state;

        switch(state){
        case 1:
            register_user();
            break;
        case 2:

            cout << "Por gentileza, digite o id de usuario.  \n" << endl;
            cin >> id;
            if (log_in(id) == 1){

                cout << "....." << endl;
                return 0;
            }else {


            }
            break;

        }

    }


    return 0;
}
