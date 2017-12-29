#pragma once
#include "../Parser/ActionsAndRules.h"
#include"../AbstractSyntaxTree/AbstrSynTree.h"
#include <iostream>
#include <functional>
#include<unordered_map>
#include<vector>
#include<iomanip>
#pragma warning (disable : 4101) 
using namespace std;


class TypeTable1
{
private:
	std::unordered_map<std::string, std::pair<std::string, std::string>> typetable_;

	unordered_map<string, vector<string>> typetable1;

	std::pair<std::string, std::string> value;
	using FileName = std::string;
	using TypeName = std::string;
	using Namestr = std::string;
	using Namespace = std::string;
	Namestr name1;
	FileName filename1;
	TypeName typename1;
public:

	void insertintable(CodeAnalysis::ASTNode *pNode);
	void display();

	string getName() { return name1; }
	string  TypeTable1::getFileName() { return filename1; }
	string  TypeTable1::getTypeName() { return typename1; }
	vector<string> vec1;

	unordered_map<std::string, std::pair<std::string, std::string>> &getTypeTable()
	{
		return typetable_;
	}

};

//-----------------------------------------------------------------------------
//Insert name,type and filename into the type table in an unordered_map

inline void  TypeTable1::insertintable(CodeAnalysis::ASTNode *pNode)
{
	value.first = pNode->type_;
	value.second = pNode->package_;
	string Key = pNode->name_;
	typetable_.insert(std::make_pair(Key, value));
}
//--------------------------------------------------------------------------------
//Displays the type table
inline void TypeTable1::display()
{
	cout << "\n\n************\nTYPE TABLE\n************" << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;
	cout << left << setw(30) << "NAME:";
	cout << std::left << setw(35) << "TYPE:";
	cout << std::left << setw(35) << "FILENAME:" << "\n";
	cout << "-----------------------------------------------------------------------------------------\n" << endl;

	for (auto it = typetable_.begin(); it != typetable_.end(); it++)
	{
		cout << left << setw(35) << it->first;
		cout << left << setw(35) << it->second.first << std::right << setw(35);
		cout << left << setw(35) << it->second.second << "\n";
	}
}
