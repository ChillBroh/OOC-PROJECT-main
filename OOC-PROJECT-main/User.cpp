//User.cpp
#include<iostream>
#include "User.h"
#include<cstring>
using namespace std;

User::User(){
  strcpy(userName, "");
	strcpy(password, "");
}
User::User(char pusername[], char pass[]) {
	strcpy(userName, pusername);
	strcpy(password, pass);
}
void User::display (){
  cout << userName << endl << password << endl;
}
void User::login() {

}
void User::validateUser() {

}
User::~User() {
	
}