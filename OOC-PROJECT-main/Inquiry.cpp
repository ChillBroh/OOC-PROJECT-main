#include<iostream>
#include "Inquiry.h"
#include "Registered_user.h"
#include <cstring>
using namespace std;

Inquiry::Inquiry(){
      strcpy(inqID,"");
      strcpy(phoneNo,"");
      strcpy(email,"");
      strcpy(description,"");
}
Inquiry::Inquiry(char inq[],char phone[], char mail[],char descript[]){
      strcpy(inqID,inq);
      strcpy(phoneNo,phone);
      strcpy(email,mail);
      strcpy(description,descript);
}
void Inquiry::showInq(){
      cout << inqID << endl << phoneNo << endl << email << endl << description << endl;
      
}
Inquiry::~Inquiry(){
  
}
