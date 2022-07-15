//Class User
#pragma once
class User
{
protected:
	char userName[30];
	char password[15];

public:
  User();
	User(char pusername[], char pass[]);
  void display();
	void login();
	void validateUser();
	~User();
};