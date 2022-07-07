#pragma once
#include "User.h"
#include "Feedback.h"
#include "Registered_user.h"
#include "Reservation.h"

class Administrator : public User
{
private:
    char Admin_ID[10];

public:
    Administrator();
    Administrator(char M_username[], char M_pass[], char A_ID[]);
    void display();
    void ManageRes();
    void manageUser();
    void manageSafari();
    void manageFeed();
    ~Administrator();
};
