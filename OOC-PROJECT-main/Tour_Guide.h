#pragma once
#include "User.h"
#include "Inquiry.h"
class Tour_Guide : public User
{
private:
    char guide_ID[10];

public:
    Tour_Guide();
    Tour_Guide(char g_username[], char g_pass[], char G_ID[]);
    void display();
    void checkInq();
    void replyInq();
    ~Tour_Guide();
};