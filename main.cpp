#include "iostream"
#include "fstream"
using  namespace std;

// gcc main.cpp -lstdc++

string ShowTasks(){
    // READ FILE AND PRINT IT CLEAR CMD AND RETURN TO TODO LIST
}


void ToDo(string username, string password){
    ofstream TaskFile;
    TaskFile.open("tasks.txt");
    if (!TaskFile){
        fstream TaskFileCreate("tasks.txt");
    }
    fstream TaskFileCreate("tasks.txt");

    int choice = 0;
    cout << "Welcome " << username << endl;
    cout << "                                           1. Show Tasks" << endl;
    cout << "                                           2. Add Task" << endl;
    cout << "                                           3. Delete Tasks" << endl;
    cout << "                                           4. Change Tasks" << endl;
    cout << "                                           5. Exit" << endl;
    cout << "                                           ";
    // Check Choice of User
    cin >> choice;
    switch (choice){
        case 1:
            cout << "Print all Tasks or none if none is existent" << endl;
            ShowTasks();
        case 2: 
            cout << "Adding Tasks" << endl;
        case 3:
            cout << "Delete Tasks" << endl;
        case 4:
            cout << "Change Tasks" << endl;
        case 5:
            cout << "Change Tasks" << endl;
    }

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
    if (sizeof(username) < 2 || sizeof(password) < 5){
        cout << "Username or Password is not viable, Please enter a name with the length of 2-8 characters and a Password of atleast 5 character" << endl;
        Register();
    }
    //Open File in Ifstream
    ifstream file;
    file.open("infos.txt");
    //If File exists warn user
    if (file){
        string deleteFile;
        cout << "There is a info File already existing? Do you want to DELETE it and create a new account? yes/no" << endl;
        cin >> deleteFile;
        if (deleteFile == "yes"){
            remove("infos.h");
            system("cls");
        }else {system("cls"); system("exit");}
    }

    //Write To new File
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
