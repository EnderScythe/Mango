#include "Lexer.h"
#include <string>
using namespace std;

enum TokenType {
	num,
	id,
	op
};


struct Lexer::Token {
	TokenType type;
	string value;
};

vector<string> Lexer::splitString(string &input) {
	vector<string> words;
	string word;
	for (char c : input) {
		if (c != ' ') {
			word += c;
		} else if(!word.empty()) {
			words.push_back(word);
			word = "";
		}
	}

	if (!word.empty()) {
		words.push_back(word);
	}
	return words;
}

vector<Lexer::Token> Lexer::tokenizer(string &input) {
	vector<Lexer::Token> tokens;
	return tokens;
	
}



