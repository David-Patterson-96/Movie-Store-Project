#pragma once
#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include "MovieInfo.h"
#include "unorderedLinksList.h"


class movieTitle : public MovieInfo
{
public:
	bool movieSearch(string title) const;
	bool movieCheckTitle(string title) const;

private:
	void searchMovieList(string title, bool& found, nodeType<MovieInfo>* &current) const;
};
