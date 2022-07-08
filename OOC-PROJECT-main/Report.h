#pragma once
#include "Donation.h"
#include "Reservation.h"
#include "Package.h"

class Report
{
private:
    char report_ID[10];

public:
    Report();
    Report(char id[]);
    void donationReport();
    void ResReport();
    void pkgReport();
    ~Report();
};