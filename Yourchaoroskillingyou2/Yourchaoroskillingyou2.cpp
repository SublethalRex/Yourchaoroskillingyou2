// Yourchaoroskillingyou2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <chrono>
#include <windows.h>
#include <string>

using namespace std;

/*...*/


int timer(int time) { // the function that hands the timer and displayed the amount of passed time

	
	//get the start time
	auto start = std::chrono::steady_clock::now();
	int timer = time * 60000; // converts the chosen minutes into milliseconds for the sleep function
	Sleep(timer); //puts the program to sleep for the desired amount of minutes



	//get the end time
	auto end = std::chrono::steady_clock::now();


	//find the difference
	double elasped_time = double(std::chrono::duration_cast<std::chrono::nanoseconds> (end - start).count());


	//output
	std::cout << "Elasped Time (s): " << elasped_time / 1e9 / 60 <<" minutes" << std::endl;


	return 0;
}

int main()
{
	string name;
	int time = 15;
	string keepgoing;
	cout << "Welcome to the timer\n\n";
	cout << "This timer is designed for you to set a time for the program to notifiy you when you should get up and stretch from your computer\n\n";
	cout << "Please enter your name\n";
	cin >> name;
	cout << "Welcome " << name << " Please enter the amount of minutes you want the timer to run for.\n\n\n";
	cin >> time; // gets the amount of minutes the tiomer will run
	cout << "The timer is now running for exactly " << time << " minutes\n\n";
	while (true) //keeps the 15 minute loop going
	{
		
		timer(time); // runs timer function with the chosen amount of minutes
		cout << "\n Its time to get up and stretch!\n";
		cout << "Enter in a new amount of minutes to reset the timer " << name << endl;
		cin >> time; //gets new timer 
		cout << "The timer is now running for exactly " << time << " minutes\n\n";
	
	}

	return 0;
}

