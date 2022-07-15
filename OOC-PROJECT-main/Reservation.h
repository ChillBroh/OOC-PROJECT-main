#pragma once
#include "Package.h"
#include "Report.h"
#define SIZE 2
class Reservation{
    private:
        char res_ID[10];
        char name[20];
        char address[100];
        char country[20];
        char res_date[15];
        char phone_no[20];
        char email[50];
        int noOfAdult;
        int noOfChildren;
      
    public :
      Reservation();
      Reservation(char r_id[],char r_name[],char r_address[],char r_country[],char r_date[],char r_phone_no[],char r_email[],int adult, int children);
      void showDetails();
      void setpkg_ID();
      void showpkg();
      int getPkg_ID();
      ~Reservation();
};