#include <iostream>
using namespace std;

int main()
{
    // Problem 2: Write a program that takes a floating point number and outputs the minimum 
    // amount of currency denominations needed to make up that number. Eg. If the user input 45.78
    // then the output would be:

    // 4 ten dollar bills
    // 1 five dollar bills
    // 0 two dollar bills
    // 0 one dollar bills
    // 3 twenty five cent pieces
    // 0 ten cent pieces
    // 0 five cent pieces
    //3 one cent pieces

    float usersMoney;
    int numberOfCents;
    int numberOfDollars;
    int tenDollarBills;
    int fiveDollarBills;
    int twoDollarBills;
    int oneDollarBills;
    int twentyFiveCent;
    int tenCent;
    int fiveCent;
    int oneCent;

    // int numberOfDollars = int(usersMoney); //again 45.78 would be 45 here as an example
    // int numberOfCents = usersMoney - float(numberOfDollars) * 100.00; //numberOfCents should be 78 here


    cout << "Please enter your bank balance : ";
    cin >> usersMoney;

    numberOfDollars = int(usersMoney); //again 45.78 would be 45 here as an example
    numberOfCents = (usersMoney - float(numberOfDollars)) * 100.0f;

    tenDollarBills = usersMoney / 10;
    fiveDollarBills = (usersMoney - (tenDollarBills * 10)) / 5;
    twoDollarBills =  (usersMoney - ((tenDollarBills * 10) + (fiveDollarBills * 5))) / 2;
    oneDollarBills =  (usersMoney - ((tenDollarBills * 10) + (fiveDollarBills * 5) + (twoDollarBills * 2))) / 1;

    twentyFiveCent = numberOfCents / 25;
    tenCent = (numberOfCents - (twentyFiveCent * 25)) / 10;
    fiveCent = (numberOfCents - ((twentyFiveCent * 25) + (tenCent * 10))) / 5;
    oneCent = (numberOfCents - ((twentyFiveCent * 25) + (tenCent * 10) + (fiveCent * 5))) / 1;

    cout << tenDollarBills << " ten dollar bills" << endl;
    cout << fiveDollarBills << " five dollar bills" << endl;
    cout << twoDollarBills << " two dollar bills" << endl;
    cout << oneDollarBills << " one dollar bills" << endl;
    cout << twentyFiveCent << " number of 25 cents" << endl;
    cout << tenCent << " number of 10 cents" << endl;
    cout << fiveCent << " number of 5 cents" << endl;
    cout << oneCent << " number of 1 cents" << endl;

    return 0;
}