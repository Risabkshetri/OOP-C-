#include <iostream>
#include <string>
#include <fstream> // For file handling

using namespace std;

const int MAX_CUSTOMERS = 10;

// Customer class
class Customer {
public:
    string name;
    int id;
    
    Customer() : name(""), id(0) {} // Default constructor
    Customer(string n, int i) : name(n), id(i) {}
};

// Account class
class Account {
private:
    int accountNumber;
    double balance;

public:
    Account() : accountNumber(0), balance(0.0) {} // Default constructor
    Account(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

    int getAccountNumber() const { return accountNumber; }
    double getBalance() const { return balance; }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }

    bool withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds." << endl;
            return false;
        }
        balance -= amount;
        cout << "Withdrawal successful. New balance: " << balance << endl;
        return true;
    }

    void showBalance() {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

// Banking System class
class BankingSystem {
private:
    Customer customers[MAX_CUSTOMERS];
    Account accounts[MAX_CUSTOMERS];
    int customerCount;
    string dataFile;

public:
    BankingSystem(string filename) : customerCount(0), dataFile(filename) {
        loadFromFile();
    }

    ~BankingSystem() {
        saveToFile();
    }

    // Create a new customer and account
    void createCustomer() {
        if (customerCount >= MAX_CUSTOMERS) {
            cout << "Cannot create more customers, limit reached!" << endl;
            return;
        }

        string name;
        int id, accNum;
        double initialDeposit;

        cout << "Enter customer name: ";
        cin >> name;
        cout << "Enter customer ID: ";
        cin >> id;
        cout << "Enter account number: ";
        cin >> accNum;
        cout << "Enter initial deposit: ";
        cin >> initialDeposit;

        customers[customerCount] = Customer(name, id);
        accounts[customerCount] = Account(accNum, initialDeposit);
        customerCount++;

        cout << "Customer and account created successfully." << endl;
    }

    // Deposit into an account
    void deposit() {
        int accountNumber;
        double amount;

        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter deposit amount: ";
        cin >> amount;

        for (int i = 0; i < customerCount; i++) {
            if (accounts[i].getAccountNumber() == accountNumber) {
                accounts[i].deposit(amount);
                return;
            }
        }

        cout << "Account not found." << endl;
    }

    // Withdraw from an account
    void withdraw() {
        int accountNumber;
        double amount;

        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter withdrawal amount: ";
        cin >> amount;

        for (int i = 0; i < customerCount; i++) {
            if (accounts[i].getAccountNumber() == accountNumber) {
                accounts[i].withdraw(amount);
                return;
            }
        }

        cout << "Account not found." << endl;
    }

    // Transfer between accounts
    void transfer() {
        int fromAccount, toAccount;
        double amount;

        cout << "Enter source account number: ";
        cin >> fromAccount;
        cout << "Enter destination account number: ";
        cin >> toAccount;
        cout << "Enter transfer amount: ";
        cin >> amount;

        Account *from = nullptr, *to = nullptr;

        for (int i = 0; i < customerCount; i++) {
            if (accounts[i].getAccountNumber() == fromAccount)
                from = &accounts[i];
            if (accounts[i].getAccountNumber() == toAccount)
                to = &accounts[i];
        }

        if (from && to && from->withdraw(amount)) {
            to->deposit(amount);
            cout << "Transfer successful." << endl;
        } else {
            cout << "Transfer failed." << endl;
        }
    }

    // Show account balance
    void showBalance() {
        int accountNumber;
        cout << "Enter account number: ";
        cin >> accountNumber;

        for (int i = 0; i < customerCount; i++) {
            if (accounts[i].getAccountNumber() == accountNumber) {
                accounts[i].showBalance();
                return;
            }
        }

        cout << "Account not found." << endl;
    }

    // Delete a customer and account
    void deleteCustomer() {
        int accountNumber;

        cout << "Enter account number to delete: ";
        cin >> accountNumber;

        for (int i = 0; i < customerCount; i++) {
            if (accounts[i].getAccountNumber() == accountNumber) {
                // Shift customers and accounts to fill the gap
                for (int j = i; j < customerCount - 1; j++) {
                    customers[j] = customers[j + 1];
                    accounts[j] = accounts[j + 1];
                }
                customerCount--;
                cout << "Customer and account deleted successfully." << endl;
                return;
            }
        }

        cout << "Account not found." << endl;
    }

    // Save customer and account data to a file
    void saveToFile() {
        ofstream file(dataFile);
        if (!file) {
            cout << "Error opening file for saving!" << endl;
            return;
        }

        file << customerCount << endl; // Save the number of customers
        for (int i = 0; i < customerCount; i++) {
            file << customers[i].name << " " << customers[i].id << " "
                 << accounts[i].getAccountNumber() << " " << accounts[i].getBalance() << endl;
        }

        file.close();
        cout << "Data saved to file." << endl;
    }

    // Load customer and account data from a file
    void loadFromFile() {
        ifstream file(dataFile);
        if (!file) {
            cout << "No previous data found." << endl;
            return;
        }

        file >> customerCount;
        for (int i = 0; i < customerCount; i++) {
            string name;
            int id, accNum;
            double balance;

            file >> name >> id >> accNum >> balance;
            customers[i] = Customer(name, id);
            accounts[i] = Account(accNum, balance);
        }

        file.close();
        cout << "Data loaded from file." << endl;
    }
};

// Main function
int main() {
    BankingSystem bank("bank_data.txt"); // Load data from file

    int choice;
    while (true) {
        cout << "\n--- Banking System Menu ---\n";
        cout << "1. Create Customer and Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Transfer\n";
        cout << "5. Show Balance\n";
        cout << "6. Delete Customer\n"; // Option for deleting customers
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bank.createCustomer();
                break;
            case 2:
                bank.deposit();
                break;
            case 3:
                bank.withdraw();
                break;
            case 4:
                bank.transfer();
                break;
            case 5:
                bank.showBalance();
                break;
            case 6:
                bank.deleteCustomer();
                break;
            case 7:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    }

    return 0;
}