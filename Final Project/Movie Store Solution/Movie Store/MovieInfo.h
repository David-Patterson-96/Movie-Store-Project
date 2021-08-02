#pragma once

#include <string>
#include <iostream>
#include <iomanip>
#include "unorderedLinksList.h"

using namespace std;

class MovieInfo :public unorderedLinkedList<MovieInfo>
{
public:
	bool checkTitle(string title);
	void getName(string movieName);
	void getMessage();
	double priceOfMovies = 0;
	void setMovieInfo(string title);

	// Overload the reational operators
	bool operator==(const MovieInfo&) const;
	bool operator!=(const MovieInfo&) const;

private:
	string movieTitles;
	
};