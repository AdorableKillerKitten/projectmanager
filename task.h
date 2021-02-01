#pragma once
#include <string> 
#include <ctime> 

using std::string;

class Task {

string desc;
bool isDone = false;
std::time_t dueDate;
// pointer for subtasks ? 


public:

	Task(string desc, std::time_t due = time(0)) : desc(desc)
	{

	}

	~Task()
	{
	}

	void changeStatus();
	std::time_t  returnDate();
	bool isOverdue(); 
	void changeDescription(string newDescription);
	string returnDescription();
};
