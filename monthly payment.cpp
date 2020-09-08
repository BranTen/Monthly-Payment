// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int numberOfPayments;
	float loanAmount, intrestRate, monthlyIntrestRate, Numerator,
		  Denominator, monthlyPayment, intrestPaid, amountPaidBack;

	cout << "please enter loan amount. " << endl;
	cin >> loanAmount;

	cout << "Please Enter Intrest Rate. " << endl;
	cin >> intrestRate;

	cout << "Please Enter Number Of Payments" << endl;
	cin >> numberOfPayments;

	printf("Loan Amount: \t\t$%10.2f\n", loanAmount);
	monthlyIntrestRate = intrestRate / 12 * .01;

	cout << "Monthly Intrest Rate:            " << intrestRate / 12 << "%" << endl;

	cout << "Mumber Of Payments:              " << numberOfPayments << endl;

	Numerator = monthlyIntrestRate * pow (( 1 + monthlyIntrestRate), numberOfPayments);
	Denominator = pow ((1 + monthlyIntrestRate), numberOfPayments) - 1;

	monthlyPayment = (Numerator * loanAmount / Denominator); 
	printf("Monthly Payment: \t$%10.2f\n", monthlyPayment);

	amountPaidBack = monthlyPayment * numberOfPayments;
	printf("Amount Paid Back: \t$%10.2f\n", amountPaidBack);

	intrestPaid = amountPaidBack - loanAmount;
	printf("Intrest paid: \t\t$%10.2f\n", intrestPaid);

	return 0;
}

