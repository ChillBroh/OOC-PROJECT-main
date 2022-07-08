#include <iostream>
#include "Donation.h"
#include <cstring>
using namespace std;

Donation::Donation()
{
    strcpy(Don_ref_No, "");
    strcpy(name, "");
    strcpy(phoneNo, "");
    strcpy(email, "");
    amount = 0;
}
Donation::Donation(char ref_no[], char d_name[], char d_phone[], char d_email[], double d_amount)
{
    strcpy(Don_ref_No, ref_no);
    strcpy(name, d_name);
    strcpy(phoneNo, d_phone);
    strcpy(email, d_email);
    amount = d_amount;
}
void Donation::donationDetails()
{
    cout << Don_ref_No << endl
         << name << endl
         << phoneNo << endl
         << email << amount << endl;
}
void Donation::validate()
{
}
Donation::~Donation()
{
}