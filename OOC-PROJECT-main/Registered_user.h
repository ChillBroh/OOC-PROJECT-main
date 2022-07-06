#pragma once
#include "User.h"
#include "Inquiry.h"
#include "Feedback.h"
#include "Reservation.h"
#include "Donation.h"
#define SIZE 2

class Registered_user : public User
{
private:
    char user_ID[10];
    char name[30];
    char address[100];
    char dob[20];
    char phone[20];
    char gender[10];
    char email[30];
    char salutation[10];
    Inquiry *inq[SIZE];
    Feedback *feed[SIZE];
    Reservation *reservation[SIZE];
    Donation *donate[SIZE];

public:
    Registered_user();
    Registered_user(char u_username[], char u_pass[], char u_id[], char u_name[], char u_address[], char u_dob[], char u_phone[], char u_gender[], char u_email[], char u_salutation[]);
    void display();
    void checkpkg();
    void checkAvailability();
    void makeReservation();
    void cancelReservation();
    void addInquiry();
    void addFeedback();
    void editProfile();
    void addDonation(Donation *d1);
    void displayDonation();
    void addInq(char Inq_id[], char Inq_phone[], char Inq_mail[], char Inq_descript[]);
    void displayinq();
    void addFeed(char feed_id[], char feed_username[], char feed_description[], int feed_rate);
    void displayFeed();
    void addReservation(char res_id[], char res_name[], char res_address[], char res_country[], char res_date[], char res_phone_no[], char res_email[], int res_adult, int res_children);
    void displayReservation();
    ~Registered_user();
};
