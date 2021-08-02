#include "MovieInfo.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct MyStruct
{
	string name;

};
string movieName[];
string movieTitle;

MyStruct MovieTITLE;

void MovieInfo::getName(string movieName)
{
	cout << "Enter the titles of movies ordered: ";
	
	cin >> movieName;

	MovieTITLE.name = movieName;
	cout << endl;
}

void MovieInfo::getMessage()
{
	cout << "Thank you for shopping at Jeff's Movie Store.";
	cout << endl;
}


bool MovieInfo::checkTitle(string title)
{
	return(movieTitle == title);
}

bool MovieInfo::operator==(const MovieInfo& other) const
{
	return (movieTitle == other.movieTitles);
}

bool MovieInfo::operator!=(const MovieInfo& other) const
{
	return (movieTitle != other.movieTitles);
}

void MovieInfo::setMovieInfo(string title)
{
	movieTitle = title;
}