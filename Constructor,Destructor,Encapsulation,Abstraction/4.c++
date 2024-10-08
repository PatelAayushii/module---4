/*4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/

#include<iostream>
using namespace std;
class banckaccount
{
    private:
        int account;
        int balance;
    public:
        void set(int a,int b)
        {
            account = a;
            balance = b;

        }
        void deposit(double amount)
        {
            cout<<"\n "<<amount<<"rs.credited";
            balance = balance+amount;
             
        }
        void withdraw(double amount)
        {
            if (balance<amount)
            {
                cout<<"\n "<<amount<<"rs.debited";
                balance =   balance - amount;
            }
            else
            {
                cout<<"\n your amount balnce is = "<<balance;
                cout<<"\n you can not not withdraw = " <<amount;
            }
            
        }
        void get()
        {
            cout<<"balance = "<<balance;
        }
};
int main()
{
    banckaccount b1;
    b1.set(123456,45000);
	b1.deposit(15000);
	b1.withdraw(25000);
	b1.get();
    return 0;
}