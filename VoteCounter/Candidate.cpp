#include "stdafx.h"
#include "Candidate.h"
#include <string>
Candidate::Candidate(string candName, string candParty)
{
	name = candName;
	party = candParty;
}

Candidate::Candidate()
{
}


Candidate::~Candidate()
{
}

void Candidate::setName(string cName)
{
	name = cName;
	
}

void Candidate::setParty(string cParty)
{
	party = cParty;

}

string Candidate::getName()
{
	return name;

}

string Candidate::getParty()
{
	return party;

}