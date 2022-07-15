#include "Donation.h"
#pragma once

class Card : public Donation {
      private:
        char type[20];
        char name[20];
        int number;
        char expDate[15];
        int CVV;
}; //not going to store these details