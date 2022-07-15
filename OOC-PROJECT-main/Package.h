#pragma once
#include "Report.h"
class Package{
  private:
      char name[20];
      float price;
      int nights;
  public:
      Package(char pname[],float pPrice,int pnights);
      void showpackagedetails();
      void showAvailability();
      ~Package();
  };