#pragma once
#ifndef USER_H
#define USER_H

#include <iostream>
using namespace std;

class User{
private:
	string _account;
	string _password;
	int _type;

protected:
	void SetAccount(string account) { _account = account; }
	void SetPassword(string password) { _password = password; }

public:
	User(string account, string password, int type);
	int GetType() { return _type;  }
	string GetAccount() { return _account; }
	string GetPassword() { return _password;  }

	friend  istream& operator>> (istream& input, User& u);
	friend ostream& operator<< (ostream& output, User& u);
};

#endif   //USER_H

