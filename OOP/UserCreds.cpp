#include <iostream>
#include <string>

using namespace std;

class User {
	private:
		string userName, password;
	public:
		void setUser(string &);
		void setPass(string &);
		string getUser(void) {
			return userName;
		}
		string getPass(void) {
			return password;
		}
};

void User :: setUser(string & str) {
	userName = str;
}
void User :: setPass(string & str) {
	password = str;
}

int main(void) {
	User user;
	string name, pass;

	cout << "Enter your login: ";
	getline(cin, name);

	cout << "Enter your password: ";
	getline(cin, pass);

	user.setUser(name);
	user.setPass(pass);

	cout << endl << "Getting credentials details..." << endl << endl;
	cout << "Username: " << user.getUser() << endl
		 << "Password: " << user.getPass() << endl;

	return 0;
}
