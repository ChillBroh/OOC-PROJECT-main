#include "Registered_user.h"
#include "Inquiry.h"
#include "Feedback.h"
#include "Reservation.h"
#include <iostream>
#include <cstring>
using namespace std;
// default constructer for registered user
Registered_user::Registered_user()
{
    strcpy(user_ID, "");
    strcpy(name, "");
    strcpy(address, "");
    strcpy(dob, "");
    strcpy(phone, "");
    strcpy(gender, "");
    strcpy(email, "");
    strcpy(salutation, "");
}
// constructer with parameters
Registered_user::Registered_user(char u_username[], char u_pass[], char u_id[], char u_name[], char u_address[], char u_dob[], char u_phone[], char u_gender[], char u_email[], char u_salutation[])
    : User(u_username, u_pass)
{
    strcpy(user_ID, u_id);
    strcpy(name, u_name);
    strcpy(address, u_address);
    strcpy(dob, u_dob);
    strcpy(phone, u_phone);
    strcpy(gender, u_gender);
    strcpy(email, u_email);
    strcpy(salutation, u_salutation);
}
void Registered_user::display()
{
    User::display();
    cout << user_ID << endl
         << name << endl
         << address << endl
         << dob << endl
         << phone << endl
         << gender << endl
         << email << endl
         << salutation << endl;
}
void Registered_user::checkpkg()
{
}
void Registered_user::checkAvailability()
{
}
void Registered_user::makeReservation()
{
}
void Registered_user::cancelReservation()
{
}
void Registered_user::addInquiry()
{
}
void Registered_user::addFeedback()
{
}
void Registered_user::editProfile()
{
}

// donation part in registered user (Aggregation)
void Registered_user::addDonation(Donation *d1)
{
    donate[0] = d1;
}

void Registered_user::displayDonation()
{
    donate[0]->donationDetails();
}

// inquiry part in registered user (composition)
void Registered_user::addInq(char Inq_id[], char Inq_phone[], char Inq_mail[], char Inq_descript[])
{
    inq[0] = new Inquiry(Inq_id, Inq_phone, Inq_mail, Inq_descript);
}
void Registered_user::displayinq()
{
    inq[0]->showInq();
}

// feedback part in registered user (composition)
void Registered_user::addFeed(char feed_id[], char feed_username[], char feed_description[], int feed_rate)
{
    feed[0] = new Feedback(feed_id, feed_username, feed_description, feed_rate);
}
void Registered_user::displayFeed()
{
    feed[0]->showFeed();
}

// reservation part in registered user (composition)
void Registered_user::addReservation(char res_id[], char res_name[], char res_address[], char res_country[], char res_date[], char res_phone_no[], char res_email[], int res_adult, int res_children)
{

    reservation[0] = new Reservation(res_id, res_name, res_address, res_country, res_date, res_phone_no, res_email, res_adult, res_children);
}
void Registered_user::displayReservation()
{
    reservation[0]->showDetails();
}
Registered_user::~Registered_user()
{
}
