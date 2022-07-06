#pragma once
#include "User.h"
#include "Report.h"
class Manager : public User
{
private:
    char Manager_ID[10];

public:
    Manager();
    Manager(char M_username[], char M_pass[], char M_ID[]);
    void display();
    void ManageDonation();
    void generateReport();
    ~Manager();
};