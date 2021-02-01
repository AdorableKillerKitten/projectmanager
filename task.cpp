#include "task.h" 
#include <string> 
#include <ctime> 

bool Task::isOverdue() {
	if(time(0) > this->dueDate)
	       return true;
	else
		return false;
		}

void Task::changeStatus() 
{
	this->isDone = !this->isDone; 
}


std::time_t Task::returnDate() 
{
	return this->dueDate;
}

void Task::changeDescription(string newDescription)
{
	this->desc = newDescription;
}

std::string Task::returnDescription()
{
	return this->desc;
}
