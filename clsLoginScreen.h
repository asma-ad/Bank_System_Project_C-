#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsUser.h"
#include "clsMainScreen.h"
#include "Global.h"

using namespace std;

class clsLoginScreen : protected clsScreen {

private:

	static void _Login() {
		
		string username, password;
		bool loginFailed = false;
		
		// Login  (keep in loop till login successfuly!)
		do {

			if (loginFailed)
			{
				cout << "\nInvalid username/password ...\n";
			}

			cout << "\nEnter username: ";
			cin >> username;

			cout << "\nEnter password: ";
			cin >> password;

			currentUser = clsUser::Find(username, password);

			loginFailed = currentUser.isEmpty();

		} while (loginFailed);

		// show menu screen
		clsMainScrenn::showMainMenu();

	}

public:

	static void showLoginScreen() {
	
		system("cls");
		_DrawScreenHeader("\t\tLogin screen.");
		_Login();
		
	}

};