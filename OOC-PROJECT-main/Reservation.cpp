#include <iostream>
#include<cstring>
#include "Reservation.h"
#include "Registered_user.h"
using namespace std;

Reservation::Reservation(){
        strcpy(res_ID,"");
        strcpy(name,"");
        strcpy(address,"");
        strcpy(country,"");
        strcpy(res_date,"");
        strcpy(phone_no,"");
        strcpy(email,"");
        noOfAdult = 0;
        noOfChildren = 0;
}
Reservation::Reservation(char r_id[],char r_name[],char r_address[],char r_country[],char r_date[],char r_phone_no[],char r_email[],int adult, int children){
        strcpy(res_ID,r_id);
        strcpy(name,r_name);
        strcpy(address,r_address);
        strcpy(country,r_country);
        strcpy(res_date,r_date);
        strcpy(phone_no,r_phone_no);
        strcpy(email,r_email);
        noOfAdult = adult;
        noOfChildren = children;
       
}
void Reservation::showDetails(){
  cout << name << endl << address << endl << country << res_date << endl << phone_no << endl << email << endl << "No of adults : " << noOfAdult << endl << "No of Children :" << noOfChildren <<  endl;
}
void Reservation::setpkg_ID(){

}
void Reservation::showpkg(){

}
int Reservation::getPkg_ID(){
      
}
Reservation::~Reservation(){
  
}