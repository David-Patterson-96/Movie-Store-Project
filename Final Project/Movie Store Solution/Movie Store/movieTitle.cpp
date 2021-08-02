#include "movieTitle.h"

void movieTitle::searchMovieList(string title, bool& found, nodeType<MovieInfo>* &current) const
{
	found = false;

	current = first;

	while (current != nullptr && !found)
		if (current->info.checkTitle(title))
			found = true;
		else
			current = current->link;
}


bool movieTitle::movieSearch(string title) const
{
	bool found = false;
	nodeType<MovieInfo> *location;

	searchMovieList(title, found, location);

	return found;
}

bool movieTitle::movieCheckTitle(string title) const
{
	bool found = false;
	nodeType<MovieInfo> *location;

	searchMovieList(title, found, location);

	return found;
}
