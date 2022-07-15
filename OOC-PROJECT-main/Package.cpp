#include <iostream>
#include <cstring>
#include "Package.h"
using namespace std;

Package::Package(char pname[],float pPrice,int pnights){
    strcpy(name,pname);
    price = pPrice;
    nights = pnights;
}
void Package::showpackagedetails(){
      cout << "name :" << name << endl << "Price : " << price << endl << "Nights :" << nights;
}
void Package::showAvailability(){
  
}
Package::~Package(){
  
}
