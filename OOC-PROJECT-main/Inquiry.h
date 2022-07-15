#pragma once
#include "Tour_Guide.h"
class Inquiry{
    private:
      char inqID[10];
      char phoneNo[20];
      char email[50];
      char description[500];
    public:
       Inquiry();
       Inquiry(char inq_ID[],char phone[], char mail[],char descript[]);
      void showInq();
      ~Inquiry();
};