#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsDepositeScreen.h"
#include "clsWithdrawScreen.h"
#include "clsTotalBalancesScreen.h"

class clsTransactionsScreen : protected clsScreen {

private:

	enum enOptions {
		Deposite = 1,
		Withdraw = 2,
		TotalBalances = 3,
		MainMenu =4
	};

	//---Read user option---
	static short _ReadTransactionsMenuOption() {

		short userOption;

		cout << setw(40) << left << "" << "Enter your option [1/4] : ";
		userOption = clsInputValidate::readShortNumberBetween(1, 4, "\t\t\t\t\tInvalid number! Please enter a valid number: ");
		return userOption;
	}

	//---Go back to transactions screen---
	static void _GoBackToTransactionsScreen() {
		cout << "\n\nPress any key to go back to the transactions screen ...\n";
		system("pause>0");
		showTransactionsScreen();
	}

	//---Deposite screen---
	static void _ShowDepositeScreen() {
		clsDepositeScreen::showDepositeScreen();
	}

	//---Withdraw screen---
	static void _ShowWithdrawScreen() {
		clsWithdrawScreen::showWithdrawScreen();
	}

	//---Total balances screen---
	static void _ShowTotalBalancesScreen() {
		clsTotalBalancesScreen::showTotalBalance();
	}

	//---Perform transactions menu options---
	static void _PerformTransactionsMenuOption(enOptions userOption) {

		switch (userOption)
		{
			case clsTransactionsScreen::Deposite:
			{
				system("cls");
				_ShowDepositeScreen();
				_GoBackToTransactionsScreen();
				break;
			}
			case clsTransactionsScreen::Withdraw:
			{
				system("cls");
				_ShowWithdrawScreen();
				_GoBackToTransactionsScreen();
				break;
			}
			case clsTransactionsScreen::TotalBalances:
			{
				system("cls");
				_ShowTotalBalancesScreen();
				_GoBackToTransactionsScreen();
				break;
			}
			case clsTransactionsScreen::MainMenu:
			{
				// Do nothing
			}
		}

	}

public:

	static void showTransactionsScreen() {
		
		// Check permissions 
		if (!checkAccessRights(clsUser::enPermissions::pTransactions))
		{
			// if the user hasn't access, exit!
			return;
		}

		system("cls");

		// print the main header
		_DrawScreenHeader("\t\tTransactions screen.");

		// Prit the header
		cout << setw(40) << left << "" << "============================================================\n";
		cout << setw(40) << left << "" << "\t\t\tTransactions menu\n";
		cout << setw(40) << left << "" << "============================================================\n";

		// Print the body
		cout << setw(40) << left << "" << "\t[1] Deposite.\n";
		cout << setw(40) << left << "" << "\t[2] Withdraw.\n";
		cout << setw(40) << left << "" << "\t[3] Total balances.\n";
		cout << setw(40) << left << "" << "\t[4] Main menu.\n";

		cout << setw(40) << left << "" << "============================================================\n";

		_PerformTransactionsMenuOption((enOptions)_ReadTransactionsMenuOption());

	}
};