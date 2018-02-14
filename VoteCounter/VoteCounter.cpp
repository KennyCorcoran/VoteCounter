// VoteCounter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Candidate.cpp"
#include "ballotPaper.cpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int i;
	vector<string> voteInputCand;
	//vector<string> voteInputParty;
	vector<int> voteInputVotes;
	vector<Candidate> candsV;
	string line;
	istringstream ls(line);

	ifstream inputStream("votes2.txt");
	if (!inputStream.is_open())
	{
		cout << "Unable to open file!" << endl;
	}
	if (inputStream.is_open())
	{
		while (!inputStream.eof())
		{
			inputStream >> line;

			if (line.length() == 1)
			{
				voteInputVotes.push_back(int(line.at(0) - 48));
			}
			else
			{
				string temp = line;
				int indexC = temp.find(',');
				//cout << temp.substr(0, indexC) << endl;
				//cout << temp.substr(indexC +1) << endl;
				voteInputCand.push_back(temp.substr(0, indexC));
				//voteInputParty.push_back(temp.substr(indexC + 1));
			}
		}
	}
	for (i = 0; i <= voteInputCand.size() - 1; i++)
	{
		cout << voteInputCand[i] << endl;
		candsV[i].setName(voteInputCand[i]);

	}
	/*for (i = 0; i <= voteInputParty.size() - 1; i++)
	{
		cout << voteInputParty[i] << endl;
	}*/
	for (i = 0; i <= voteInputVotes.size() - 1; i++)
	{
		cout << voteInputVotes[i] << endl;
	}


	system("pause");
    return 0;
}

