

# Bank system project (v.01)

C++ Project of Bank System. 

The program allows you to create an account, delete/update your account, find a client, make transactions (deposit, withdraw) ... etc

It also allows you to manage users (add/update/delete ... etc).

=> To start the program; go to the "BankSystem.cpp" file.

===========================================================================

* Client information: First name, Last name, Email, Phone number, Account number, PIN code, Account balance.

===========================================================================
### Part 01: Main methods
1 - Find client		: Search for a client by the account number/the PIN code. The method returns an object, it can be an object with info if the client exists, or an empty object if the client doesn't exist).

2 - Update client	: It updates client information (All info except account number).

3 - Add new client	: This method for adding new clients.

4 - Delete client	: For deletion accounts.

5 - List clients	: Shows all clients in a list.

6 - Total balances	: It shows all client's balances, and total balances.


### Part 02: UI - Main Menu (8 options)
1 - Main Screen screen.

2 - List clients Screen.

3 - Add a new client Screen.

4 - Delete the client Screen.

5 - Update client screen.

6 - Find the client screen.


### Part 03: UI - Transactions Menu (4 options)
1 - Transactions Screen.

2 - Deposit screen.

3 - Withdraw screen.

4 - Total balances screen.

### Part 04: UI - Manage Users Menu (6 options)
1 - Manage Users Screen.

2 - Prepare User Class.
	* User information: First name, Last name, Email, Phone number, Account number, PIN code, Account balance, Username, Password, and Permissions.
3 - List user screen.

4 - Add a new user screen.

5 - Delete the user screen.

6 - Update the user screen.

7 - Find the user screen.

### Part 05: Login And Permissions
1 - Login screen.
	* Global.h
 
2 - Logout.

3 - Show the Login screen after Logging out.
	* Avoiding circular reference (error).
 
4 - Apply permissions.

===================================================
     10 Extensions for the Bank system project.
===================================================
 
 Extension 01: Add date and logged-in user to all screens.

 Extension 02: Lock the System after 3 failed Logins.

 Extension 03: Register logins in a log file.

 Extension 04: Show Login Register Screen.

 Extension 05: Permission to show log register screen.

 Extension 06: Transfer screen.

 Extension 07: Create a transfer log.

 Extension 08: Show transfers log screen.

 Extension 09: Encrypt password in file.

 Extension 10: Abstract Class/Interface.

 
