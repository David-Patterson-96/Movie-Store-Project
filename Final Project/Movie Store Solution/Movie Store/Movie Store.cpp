// Created by: David Patterson on 5/18/18
// Final Project: Movie Store
// Display total of movies ordered and total cost

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "MovieInfo.h"
#include "bluray.h"
#include "unorderedArrayListType.h"
#include "movieTitle.h"

using namespace std;

void createMovieList(ifstream& infile, MovieInfo& movieInfo);

const int NO_OF_MOVIES = 31;

//void movieNames(ifstream& inFile, unorderedArrayListType<movieTitle>& cList);


int main()
{
	movieTitle MovieTitles1;
	int dvdPrice = 20;
	int *dvd;
	class bluray bluRayObject;
	char movieType;
	double shipping;
	int blurayprice;
	int *mybluray;
	int x;
	int y = 0;
	double numberOfMovies = 0;
	double priceOfMovies = 0;
	double totalprice;

	MovieInfo movie;
	MovieInfo movieMessage;


	void star(int num);

	string movieName;
	string error;
	string message = "You have enter number below 0. We only accept numbers above 0.";
	bool done = false;

	MovieInfo movieInfo;
	int choice;
	char ch;
	string title;
	ifstream infile;

	// Open input file
	infile.open("movieBacklog.txt");
	if (!infile)
	{
		cout << "the input file does not exist. The program terminates!!!" << endl;
		return 1;
	}


	// Create the Movie list
	createMovieList(infile, movieInfo);
	infile.close();

	// Calulate the type of movie the user wants
	do
	{
		try

		{
			cout << "How many movies would you like to order?" << endl;
			cin >> numberOfMovies;
			if (numberOfMovies <= 0)
				throw message;
			for (x = 0; x != numberOfMovies; x++)
			{
				cout << "Would you like to order DVD($20) or Blu-Ray($25) movie?" 
					<< "Enter D for DVD or B for Blu-Ray." << endl;
				cin >> movieType;
				movieType = toupper(movieType);
				{
					switch (movieType)
					{
					case 'D':
						dvd = &dvdPrice;
						priceOfMovies += dvdPrice;
						break;
					case 'B':
						priceOfMovies += bluRayObject.blurayprice;
						break;
					default:
						x--;
						cout << "Please enter d or b ." << endl;/*u, or n*/
					}
				}
			}
			done = true;
		}

		// Catches for numberOfMovies
		catch (string message)
		{
			cout << message << endl;

		}
	} while (!done);

		// Call title of movies ordered
		movie.getName(string(movieName));
		getline(cin, title);
		cout << endl;

		(MovieTitles1.movieSearch(title));

	// Calulate the cost of shipping
	if (priceOfMovies > 50)
		shipping = 0;
	else
		shipping = 5;

	totalprice = priceOfMovies + shipping;

	// Display free shipping message
	while (y < 2)
	{
		cout << "*free shipping for over $50 purchases* ";
		y++;
	}

	// Recursion separator
	int numStars = 4;
	star(numStars);
	cout << endl;

	// Display the total amount and cost of movies ordered 
	cout << "Total number of items purchased is: "
		<< numberOfMovies << endl;

	cout << "Total price of your order is : $"
		<< totalprice << endl << endl;

	// Display "Thank you" message
	movieMessage.getMessage();

	return 0;
}

void star(int num)
{
	if (num > 0)
	{
		cout << endl;
		for (int i = 0; i < num; i++)
		{
			cout << "*";
		}
		star(num - 1);
		cout << endl;
		for (int i = 0; i < num; i++)
		{
			cout << "*";
		}
	}
}

// Check the movie list 
void createMovieList(ifstream& infile, MovieInfo& movieInfo)
{
	string title;

	char ch;
	int inStock;

	MovieInfo newMovie;

	getline(infile, title);

	while (infile)
	{
		infile.get(ch);
		newMovie.setMovieInfo(title);

		movieInfo.insertFirst(newMovie);

		getline(infile, title);
	}
}
