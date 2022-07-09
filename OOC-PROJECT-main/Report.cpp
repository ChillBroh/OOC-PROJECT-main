#include <iostream>
#include <cstring>
#include "Report.h"
using namespace std;

Report::Report(char id[])
{
    strcpy(report_ID, id);
}
void Report::donationReport()
{
}
void Report::ResReport()
{
}
void Report::pkgReport()
{
}
Report::~Report()
{
}