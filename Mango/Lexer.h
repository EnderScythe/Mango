#pragma once
#include <string>
#include <vector>
using namespace std;


class Lexer {
	private:
		enum TokenType;
		struct Token;
	public:
		vector<string> splitString(string &input);
		vector<Token> tokenizer(string& input);
	
};
