/*2. Define a class to represent a bank account. Include the following members:

----> 3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/

#include<iostream>
using namespace std;
class banckaccount
{
	private:
	string name;
	string type;
	double acountno;
	double balance;

	public:
	
	
	void set(double a,double b,string n,string t)
	{
		name = n;
		type = t;
		acountno = a;
		balance = b;
		
	}
	void deposit(double amount)
	{
		cout<<"\n "<<amount<<"Rs.creaditad";
		balance = balance + amount;
	}
	void withdraw(double amount)
	{
		if (balance>amount)
		{
			cout<<"\n "<<amount<<"Rs. debited";
			balance = balance-amount;
		}
		else
		{
			cout<<"\n youur account balance is = "<<balance;
			cout<<"\n you can not withdraw "<<amount;
		}
		
	}
	void get()
	{
		cout<<"\n current balance  = "<<balance;
		cout<<"\n type of account = "<<type;
		cout<<"\n name of depositor = "<<balance;
	}
};
int main()
{
  banckaccount b1;
  
  b1.set(123456,10000,"Aayushi","saving");
  b1.get();
  b1.deposit(5000);
  b1.get();
	return 0;
}