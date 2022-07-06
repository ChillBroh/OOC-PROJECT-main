#include "Manager.h"
#include <iostream>
#include <cstring>
using namespace std;

Manager::Manager()
{
    strcpy(Manager_ID, "");
}
Manager::Manager(char M_username[], char M_pass[], char M_ID[]) : User(M_username, M_pass)
{
    strcpy(Manager_ID, M_ID);
}
void Manager::display()
{
    User::display();
    cout << Manager_ID;
}
void Manager::ManageDonation()
{
}
void Manager::generateReport()
{
}
Manager::~Manager()
{
}