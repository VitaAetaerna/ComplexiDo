#include "iostream"


using namespace std;

int Login(){}

int Register(){}

// Check for Login Method
int main(){
    string LoginMethod;
    bool hasAccount;
    string username;
    string password;
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

}
