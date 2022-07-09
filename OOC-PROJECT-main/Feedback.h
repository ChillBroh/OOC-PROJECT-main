#pragma once

class Feedback
{
private:
    char feed_ID[10];
    char username[20];
    char description[500];
    int rate;

public:
    Feedback();
    Feedback(char f_id[], char f_username[], char f_description[], int f_rate);
    void showFeed();
    ~Feedback();
};