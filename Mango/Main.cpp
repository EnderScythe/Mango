#include <string>
#include <vector>
#include <iostream>
#include "Lexer.h"
using namespace std;

Lexer lexer;

int main() {
	string input;
	cout << "mango > ";
	getline(cin, input);
	vector<string> output = lexer.splitString(input);
	for (string val : output) {
		cout << val << endl;
	}
	return 0;
}