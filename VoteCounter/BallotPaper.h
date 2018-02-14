#pragma once
#include <string>
using namespace std;

class BallotPaper
{
public:
	string cands[50];
	int pref[50];
	BallotPaper();
	~BallotPaper();
	void setPref(string , int);
	string getPref(int);
};

