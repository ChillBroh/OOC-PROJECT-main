#pragma once
#include "Report.h"

class Donation
{
protected:
    char Don_ref_No[10];
    char name[15];
    char phoneNo[20];
    char email[20];
    double amount;

public:
    Donation();
    Donation(char ref_no[], char d_name[], char d_phone[], char d_email[], double d_amount);
    void donationDetails();
    void validate();
    ~Donation();
};