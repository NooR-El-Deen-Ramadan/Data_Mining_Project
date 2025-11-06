#pragma once
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Itemset {
public:
	int id;
	string item;
};

class Transaction {
public:
	unordered_map<int, bool> items;
};

class Apriori
{
public:
	int minSupport;
	int minConfidence;
	vector<Transaction> Transactions;
	vector<pair<int,vector<int>>> CandidateItemsets; // candidate of level and vector of itemsets ids
	vector<pair<int, unordered_map<int, int>>> FrequentItemsets; // frequent of level and map of itemset id and its support count
	Apriori(string);
	void Calc_support(string);
	void Join_step(int);
};
