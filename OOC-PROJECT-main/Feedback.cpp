#include <iostream>
#include "Feedback.h"
#include "Registered_user.h"
#include <cstring>
using namespace std;

Feedback::Feedback()
{
    strcpy(feed_ID, "");
    strcpy(username, "");
    strcpy(description, "");
    rate = 0;
}
Feedback::Feedback(char f_id[], char f_username[], char f_description[], int f_rate)
{
    strcpy(feed_ID, f_id);
    strcpy(username, f_username);
    strcpy(description, f_description);
    rate = f_rate;
}
void Feedback::showFeed()
{
    cout << username << endl
         << description << endl
         << rate << endl;
}
Feedback::~Feedback()
{
}