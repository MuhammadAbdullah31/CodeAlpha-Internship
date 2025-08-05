//#include <iostream>
//#include <string>
//using namespace std;
////Customer Class
//class Customer {
//public:
//    int     Customer_ID;
//    string  Name;
//    string  Phone;
//};
////Transaction Class
//class Transaction {
//public:
//    int     Transaction_ID;
//    int     Account_No;
//    string  Type;
//    double  Amount;
//};
////Account Class
//class Account {
//public:
//    int     Account_No;
//    int     Customer_ID;
//    double  Balance;
//    Transaction History[100];
//    int     Trans_Count;
//    Account()
//    {
//        Balance = 0;
//        Trans_Count = 0;
//    }
//    void deposit(double amt, int tid)
//    {
//        Balance += amt;
//        History[Trans_Count].Transaction_ID = tid;
//        History[Trans_Count].Account_No = Account_No;
//        History[Trans_Count].Type = "deposit";
//        History[Trans_Count].Amount = amt;
//        Trans_Count++;
//        cout << "Deposit successful.\n";
//    }
//    void withdraw(double amt, int tid) 
//    {
//        if (amt > Balance) 
//        {
//            cout << "Insufficient balance!\n";
//            return;
//        }
//        Balance -= amt;
//        History[Trans_Count].Transaction_ID = tid;
//        History[Trans_Count].Account_No = Account_No;
//        History[Trans_Count].Type = "withdraw";
//        History[Trans_Count].Amount = amt;
//        Trans_Count++;
//        cout << "Withdrawal successful.\n";
//    }
//    void showHistory()
//    {
//        cout << "Transactions for Account " << Account_No << ":\n";
//        for (int i = 0; i < Trans_Count; i++) {
//            cout << History[i].Transaction_ID << " | "
//                << History[i].Type << " | "
//                << History[i].Amount << endl;
//        }
//    }
//};
////main
//int main()
//{
//
//    Customer customers[50];
//    Account  accounts[50];
//    int Cust_Count = 0, Acc_Count = 0, Trans_ID = 1;
//
//    while (true)
//    {
//        cout << "\n----- Banking System Menu -----\n";
//        cout << "1. Add customer\n2. Open account\n3. Deposit\n4. Withdraw\n5. Show account info\n6. Exit\nChoose: ";
//        int choice;
//        cin >> choice;
//        if (choice == 1)
//        {
//            cout << "Enter Customer ID: ";
//            cin >> customers[Cust_Count].Customer_ID;
//            cout << "Enter Name: ";
//            cin >> customers[Cust_Count].Name;
//            cout << "Enter Phone: ";
//            cin >> customers[Cust_Count].Phone;
//            Cust_Count++;
//            cout << "Customer Added Successfully.\n";
//        }
//        else if (choice == 2) 
//        {
//            cout << "Enter Account Number: ";
//            cin >> accounts[Acc_Count].Account_No;
//            cout << "Enter Customer ID: ";
//            cin >> accounts[Acc_Count].Customer_ID;
//            accounts[Acc_Count].Balance = 0;
//            accounts[Acc_Count].Trans_Count = 0;
//            Acc_Count++;
//            cout << "Account opened.\n";
//        }
//        else if (choice == 3)
//        {
//            int a; double amt;
//            cout << "Enter Account Number: ";
//            cin >> a;
//            cout << "Enter amount to deposit: ";
//            cin >> amt;
//            for (int i = 0; i < Acc_Count; i++)
//            {
//                if (accounts[i].Account_No == a)
//                {
//                    accounts[i].deposit(amt, Trans_ID++);
//                }
//            }
//        }
//        else if (choice == 4) {
//            int a; double amt;
//            cout << "Enter Account Number: ";
//            cin >> a;
//            cout << "Enter amount to withdraw: ";
//            cin >> amt;
//            for (int i = 0; i < Acc_Count; i++)
//            {
//                if (accounts[i].Account_No == a)
//                {
//                    accounts[i].withdraw(amt, Trans_ID++);
//                }
//            }
//        }
//        else if (choice == 5)
//        {
//            int a;
//            cout << "Enter Account Number: ";
//            cin >> a;
//            for (int i = 0; i < Acc_Count; i++)
//            {
//                if (accounts[i].Account_No == a) 
//                {
//                    cout << "Balance = " << accounts[i].Balance << endl;
//                    accounts[i].showHistory();
//                }
//            }
//        }
//        else
//        {
//            break;
//        }
//    }
//    return 0;
//}
