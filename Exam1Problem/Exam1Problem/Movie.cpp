// I affirm that all code given below was written soley by me, Alyssa La Fleur, and that any help I received adhered to the rules stated for this exam
#include <iostream>
#include "Movie.h"
using namespace std;


//Default constructor function for Movie class, auto sets to Sharknado, comedy, 12
Movie::Movie()
{
	title = "Sharknado";
	genre = "Comedy";
	showtime = 12;
}
//Constructor with inputs for movie values
Movie::Movie(string title_new, string genre_new, int showtime_new)
{
	title = title_new;
	//Loops to set genre to Comedy if it is not one of the given genres
	if (genre_new != "Action" || genre_new != "Comedy" || genre_new != "Horror" || genre_new != "Documentary")
	{
		genre = "Comedy";
	}
	//Loop to set genre if it falls into the allowed categories
	if (genre_new == "Action" || genre_new == "Comedy" || genre_new == "Horror" || genre_new == "Documentary")
	{
		genre = genre_new;
	}
	showtime = showtime_new;
}

//Function to return movie title stored, no inputs, output of title
string Movie::GetTitle()
{
	return title;
}

//Function to return movie genre stored, no inputs, output of genre
string Movie::GetGenre()
{
	return genre;
}

//Function to return showtime stored, no inputs, output of movie time (note: 24 hour time)
int Movie::GetShowtime()
{
	return showtime;
}

