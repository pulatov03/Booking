//Pulatov Ubaydulla
//U2010210
// https://github.com/pulatov03/Booking 


#include <iostream>
#include "login.h"
#include "main_menu.h"

using namespace std;


// username andpassword is "admin"

int main()
{
	int login_status;
	
	login_status=login(); //function returns 1 if login was sucsess else returing 0, function in file login.h
	if (login_status==1) //checking status of login
	{
		main_menu(); //main function wich will worck with client, function in file main_menu.h
		// if client will want to exit function will return 0
	}
	cout << endl;
	return 0;
}