#include <iostream>
#include <string>

using namespace std;

class Steam {
private:
    string name;
    int level;
    bool accountType;
    string email;
    string password;
    float balance;

public:
    Steam() {
        name = "Not set";
        email = "Not set";
        password = "Not set";
        level = 0;
        accountType = true;
        balance = 0.0;
    }

    Steam(string Name, string Email, string Password) {
        name = Name;
        email = Email;
        password = Password;
        balance = 0.0;
        level = 0;
        accountType = true;
    }

    ~Steam() {
        cout << "Obiectul a fost distrus."<<endl;
    }

    void displayInfo() {
        cout << "Username: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "Password: " << password << endl;
        cout << "Balance: " << balance << " $" << endl;
        cout << "Level: " << level << endl;
        if (accountType) {
            cout << "Account Type: public" << endl<<endl;
        } else { cout << "Account Type: private" << endl<<endl; }
    }

    void changeAccountType() {
        bool AccountType;
        int n;
            cout<<"Alege tipul contului: "<<endl;
            cout<<"1. Cont public"<<endl;
            cout<<"2. Cont privat"<<endl;
            cout<<"0. Iesire"<<endl;
            cin>>n;

            switch (n) {
                case 0: break;
                case 1: AccountType = true; break;
                case 2: AccountType = false; break;
                default: cout<<"Numar introdus incorect"<<endl;;
            }
        accountType = AccountType;
    }

    void addBalance() {
        float Balance;
        cout<<"Introduceti o suma in cont: ";
        cin>>Balance;
        if (Balance > 0)
            balance += Balance;
    }

    void levelUp() {
        level++;
    }

    void changeEmail() {
        string NewEmail;
        cout<<"Introduceti noua adresa de email: ";
        cin>>NewEmail;
        email = NewEmail;
    }
};

int main() {

    Steam account1("PitesFan", "pitesfan@gmail.com", "12345678");

    int n;
    while (n!=0) {
        cout << "Aplica modificari contului: " << endl;
        cout << "1. Afiseaza datele contului: " << endl;
        cout << "2. Schimba tipul contului: " << endl;
        cout << "3. Adauga bani in cont: " << endl;
        cout << "4. Creste nivelul: " << endl;
        cout << "5. Schimba adresa de email: " << endl;
        cout<<"0. Iesire: "<<endl;

        cin >> n;

        switch (n) {
            case 0: break;
            case 1: account1.displayInfo();
                break;
            case 2: account1.changeAccountType();
                break;
            case 3: account1.addBalance();
                break;
            case 4: account1.levelUp();
                break;
            case 5: account1.changeEmail();
                break;
            default: cout<<"Numar introdus incorect"<<endl;
        }
    }

    return 0;
}
