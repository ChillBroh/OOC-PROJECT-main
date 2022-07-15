//main.cpp

#include<iostream>
#include "Registered_user.h"
#include "Manager.h"
#include "Tour_Guide.h"
#include "Administrator.h"
#include "Inquiry.h"
#include "Donation.h"
#include "Feedback.h"
#include "Reservation.h"
using namespace std;


int main() {
  //data insert to registered user
	Registered_user* regUser = new Registered_user("chillbroh", "1234", "U0001", "Ishara", "Galle", "1998/06/14", "0766859740", "male", "ishara410@gmail.com", "mr");
  cout << "Details of User : " << endl;
  regUser->display(); //display registered user details
  cout << endl;
  
 //data insert to manager
  Manager *manage = new Manager("Ehani01","Ehani123","M0001");
  cout << "Details of Manager : " << endl;
  manage->display(); //display manager details
  cout << endl << endl;

  //date insert to tour guide
  Tour_Guide *tG = new Tour_Guide("Dileep", "Dileep123","TG0001");
  cout << "Details of Tour_Guide : " << endl;
  tG->display(); //display tour guide details
  cout << endl << endl ;

  //data insert to administrator
  Administrator *admin = new Administrator("Chala","Chalani123","A0001");
  cout << "Details of Administrator : " << endl;
  admin->display(); //display admin details
  cout << endl << endl;

  //data insert to donation
  Donation *donation = new Donation("D0001","Nimadi","0758469856","nimadi41@gmail.com",1000.0);
  cout << "Details of Donation : " << endl;
  Registered_user *Donate = new Registered_user(); //display donation details
  Donate->addDonation(donation);
  Donate->displayDonation();
  cout << endl << endl;

  //data insert to feed
  Registered_user *feed;
  feed = new Registered_user;
  feed-> addFeed("F0001","chalan","safadfakdhfuaef adfjkad ffkajdlfaieu fajdlfaei adfjlajfaiej alkdjfl adhfaehf aljkdfa",5);
  feed-> displayFeed(); //display feed details
  cout << endl << endl;

  //data insert to inquriy
  Registered_user *inq;  
  inq = new Registered_user;
  inq->addInq("Inq001","076453743","shanperera@gmail.com","can I know about asldjlsaiiueualn?"); 
  inq->displayinq(); //display Inquiry details
  cout << endl << endl;

  //data insert to reservation
  Registered_user *reserve;
  reserve = new Registered_user;
  reserve->addReservation("R0001","Ajantha","colombo","Sri Lanka","2022/05/30","0768957420","ajantha@gmail.com",6,3);
  reserve->displayReservation(); //display reservation details

  
  return 0;

  }


