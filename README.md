

### Bank system project (v.01)

===========================================================================

* Client information: First name, Last name, Email, Phone number, Account number, PIN code, Account balance.
* 
===========================================================================
## Part 01: Main methods
1 - Find client		: Search for a client by the account number, the PIN code. The method returns an object, it can be an object with info if the client exists, or an empty object if the client isn't exist).
2 - Updqte client	: It updates client information (All info except account number).
3 - Add new client	: This method for adding new clients.
4 - Delete client	: For deletion accounts.
5 - List clients	: Shows all clients in a list.
6 - Total balances	: It shows all clients balance, plus total balances.


## Part 02: UI - Main Menu (8 options)
1 - Main Screen screen.
2 - List clients Screen.
3 - Add new client Screen.
4 - Delete client Screen.
5 - Update client screen.
6 - Find client screen.


## Part 03: UI - Transactions Menu (4 options)
1 - Transactions Screen.
2 - Deposite screen.
3 - Withdraw screen.
4 - Total balances screen.

## Part 04 : UI - Manage Users Menu (6 options)
1 - Manage Users Screen.
2 - Prepare User Class.
	* User information: First name, Last name, Email, Phone number, Account number, PIN code, Account balance,
						userName, Password, Permissions.
3 - List user screen.
4 - Add new user screen.
5 - Delete user screen.
6 - Update user screen.
7 - Find user screen.

## Part 05 : Login And Permissions
1 - Login screen.
	* Global.h
2 - Logout.
3 - Show Login screen after Logoing out.
	* Avoiding circular reference (error).
4 - Apply permissions.
