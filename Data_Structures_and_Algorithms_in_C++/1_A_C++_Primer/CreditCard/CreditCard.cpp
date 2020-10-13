/* The file CreditCard.cpp, which contains the definition of the out-of-class member functions for class CreditCard. */

#include "CreditCard.h"		//provides CreditCard

using namespace std;		//make std:: accessible

//standard constructor
CreditCard::CreditCard(const string& no, const string& nm, int lim, double bal){		
	number=no;
	name=nm;
	limit=lim;
	balance=bal;
}

//make a charge
bool CreditCard::chargeIt(double price){
	if(price + balance > double(limit))
		return false;		//over-limit
	balance += price;
	return true;		//the charge goes through
}

//make a payment
void CreditCard::makePayment(double payment){
	balance -= payment;
}

//print card information
ostream& operator<<(ostream& out, const CreditCard& c){
	out << "Number = " << c.getNumber() << "\n" 
		<< "Name = " << c.getName() << "\n"
		<< "Balance = " << c.getBalance() << "\n"
		<< "Limit = " << c.getLimit() << "\n";
	return out;
}
