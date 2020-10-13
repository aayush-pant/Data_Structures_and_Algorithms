/* The header file CreditCard.h, which contains the defintion of class CreditCard. */

#ifndef CREDIT_CARD_H	//avoid repeated expansion
#define CREDIT_CATRD_H

#include <iostream>
#include <string>

class CreditCard {
public:
	//constructor
	CreditCard(const std::string& no, const std::string& nm, int lim, double bal=0);
	
	//accessor functions
	std::string getNumber() const { return number; }
	std::string getName() const { return name; }
	double getBalance() const { return balance; }
	int getLimit() const { return limit; }

	bool chargeIt(double price);	//make a charge
	void makePayment(double payment);	//make a payment

private:
	std::string number;	//credit card number
	std::string name;	//card owner's name
	double balance;		//credit card balance
	int limit;		//credit limit
};

std::ostream& operator<<(std::ostream& out, const CreditCard& c);	//print card information

#endif
