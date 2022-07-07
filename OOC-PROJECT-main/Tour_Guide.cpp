#include "Tour_Guide.h"
#include <iostream>
#include <cstring>
using namespace std;

Tour_Guide::Tour_Guide()
{
  strcpy(guide_ID, "");
}
Tour_Guide::Tour_Guide(char g_username[], char g_pass[], char G_ID[])
    : User(g_username, g_pass)
{
  strcpy(guide_ID, G_ID);
}
void Tour_Guide::display()
{
  User::display();
  cout << guide_ID << endl;
}
void Tour_Guide::checkInq()
{
}
void Tour_Guide::replyInq()
{
}
Tour_Guide::~Tour_Guide()
{
}
