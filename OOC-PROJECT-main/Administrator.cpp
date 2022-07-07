#include "Administrator.h"
#include <iostream>
#include <cstring>
using namespace std;

Administrator::Administrator()
{
    strcpy(Admin_ID, "");
}
Administrator::Administrator(char a_username[], char a_pass[], char a_ID[])
    : User(a_username, a_pass)
{
    strcpy(Admin_ID, a_ID);
}
void Administrator::display()
{
    User::display();
    cout << Admin_ID << endl;
}
void Administrator::ManageRes()
{
}
void Administrator::manageUser()
{
}
void Administrator::manageSafari()
{
}
void Administrator::manageFeed()
{
}
Administrator::~Administrator()
{
}
