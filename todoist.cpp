#include "task.h" 
#include <string> 
#include <ctime> 
#include <vector> 
#include <iostream>

int main() 
{
	std::vector<Task> tasks;
	for(int i = 0; i <  10; i++) 
	{
		tasks.push_back({"Some old task" + std::to_string(i), time(0)});

	}	

	for(auto task: tasks) 
	{
		
		std::cout <<  task.returnDescription() << " Overdue: " << task.isOverdue()  << "\n";
		
	}


}
