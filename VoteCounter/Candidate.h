#pragma once
#include<string>
using namespace std;

class Candidate
{
private:
	string name;
	string party;
public:
	Candidate(string candName, string candParty);
	Candidate();
	~Candidate();
	void setName(string);
	void setParty(string);
	string getName();
	string getParty();
};

