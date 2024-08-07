//ROCK PAPER SCISSORS
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int userChoice,compChoice,cont;
	srand(time(0));
	while(true)
	{
		cout<<"Enter your choice\n ***CHOICE MENU***\n 0. Rock\n 1. Paper\n 2. Scissors"<<endl;
		cin>>userChoice;
		compChoice = rand()%3; //generates choices from 0 to 2
		//game code
		{
			if(userChoice == 0) //rock
			{ 
				if(compChoice == 0) //rock
				{
					cout<<"TIE";
				}
				else if (compChoice == 1)  //paper
				{
					cout<<"Computer wins";
				}
				else //scissors
				{
					cout<<"YOU WIN\a";
				}
			}
			else if(userChoice == 1) //paper
			{ 
				if(compChoice == 0) //rock
				{
					cout<<"YOU WIN\a";
				}
				else if (compChoice == 1)  //paper
				{
					cout<<"TIE";
				}
				else //scissors
				{
					cout<<"Computer wins";
				}
			}
			else if(userChoice == 2) //scissors
			{ 
				if(compChoice == 0) //rock
				{
					cout<<"Computer wins";
				}
				else if (compChoice == 1)  //paper
				{
					cout<<"YOU WIN\a";
				}
				else //scissors
				{
					cout<<"TIE";
				}
			}
			else
			{
				cout<<"invalid choice";
			}
		}
		cout<<endl<<"DO YOU WANT TO CONTINUE? (0 for no, 1 for yes)";
		cin>>cont;
		if(cont==0)
		{
			break;
		}
	}
}