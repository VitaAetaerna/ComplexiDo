#include "iostream"
#include "fstream"
using  namespace std;


// gcc main.cpp -lstdc++

void ToDo(string username, string password){
    cout << username << endl << password << endl;
}

int Login(){
    string username;
    string password;
    // get Password and Username
    cout << "Please enter your Username: " << endl;
    cin >> username;
    cout << "Please enter your Password" << endl;
    cin >> password;
    return 0;
}



int Register()
{
    string username;
    string password;
    // get Password and Username
    cout << "Please enter your Username: " << endl;
    cin >> username;
    cout << "Please enter your Password" << endl;
    cin >> password;


    //Check for non viable Name and password
    if (sizeof(username) < 2){
        cout << "Username is not viable, Please enter a name with the length of 2-8 characters" << endl;
        system("cls");
        Register();
    }

    if (sizeof(password) < 5){
        cout << "Password is not viable, Please enter a password with the length of 2-8 characters" << endl;
        system("cls");
        Register();
    }
    ifstream file;
    file.open("infos.txt");

    if (file){
        string deleteFile;
        cout << "There is a info File already existing? Do you want to DELETE it and create a new account? yes/no" << endl;
        cin >> deleteFile;
        if (deleteFile == "yes"){
            remove("infos.h");
            system("cls");
        }else {system("cls"); main();}
    }


    if (!file){
        ofstream filecreate("infos.txt");
        filecreate << username << endl;
        filecreate << password << endl;        
    }


    ToDo(username, password);

    return 0;
}

// Check for Login Method
int main(){
    string LoginMethod;

    cout << "Welcome to ComplexiDo" << endl;
    cout << "Do you want to login or Register? login/register" << endl; 
    cin >> LoginMethod;

    // Check if user wants to register or login
    if (LoginMethod == "login"){
        Login();
    }
    if (LoginMethod == "register"){
        Register();
    }
    return 0;
}
