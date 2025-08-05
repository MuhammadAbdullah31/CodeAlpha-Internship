//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//void registerUser()
//{
//    string username, password;
//    cout << "Enter new username: ";
//    cin >> username;
//    cout << "Enter new password: ";
//    cin >> password;
//    ifstream infile("users.txt");
//    string line;
//    while (getline(infile, line)) 
//    {
//        size_t pos = line.find(':');
//        string storedUsername = line.substr(0, pos);
//        if (storedUsername == username)
//        {
//            cout << "Username already exists. Try a different one.\n";
//            return;
//        }
//    }
//    infile.close();
//    ofstream outfile("users.txt", ios::app);
//    outfile << username << ":" << password << endl;
//    outfile.close();
//    cout << "Registration successful.\n";
//}
//void loginUser()
//{
//    string username, password;
//    cout << "Enter username: ";
//    cin >> username;
//    cout << "Enter password: ";
//    cin >> password;
//    ifstream infile("users.txt");
//    string line;
//    bool found = false;
//    while (getline(infile, line))
//    {
//        size_t pos = line.find(':');
//        string storedUsername = line.substr(0, pos);
//        string storedPassword = line.substr(pos + 1);
//        if (storedUsername == username && storedPassword == password)
//        {
//            found = true;
//            break;
//        }
//    }
//    infile.close();
//    if (found)
//    {
//        cout << "Login successful. Welcome, " << username << ".\n";
//    }
//    else 
//    {
//        cout << "Invalid username or password.\n";
//    }
//}
//int main() {
//    int choice;
//    while (true) 
//    {
//        cout << "\n--- Menu ---\n";
//        cout << "1. Register\n";
//        cout << "2. Login\n";
//        cout << "3. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        if (choice == 1)
//            registerUser();
//        else if (choice == 2)
//            loginUser();
//        else if (choice == 3)
//            break;
//        else
//            cout << "Invalid choice.\n";
//    }
//    return 0;
//}