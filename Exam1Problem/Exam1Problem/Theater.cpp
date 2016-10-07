// I affirm that all code given below was written soley by me, Alyssa La Fleur, and that any help I received adhered to the rules stated for this exam
#include <iostream>
#include "Theater.h"
#include "Movie.h"
using namespace std;

//Static variable for number of movies 'playing' in the theater
int Theater::numberMovies = 0;

//Constructor function for Theater class, input of name and number, no outputs
Theater::Theater(string name_new, string phone_new)
{
	//Use inputs to set name and phone number of theater
	name = name_new;
	phone = phone_new;
	//Default pricing for refreshments
	popcornPrice = 2;
	cokePrice = 1;
}

//Function to add movies to movies for Theater object, input of movie (Pass by reference), no ouputs
void Theater::AddMovie(Movie & Movie_new)
{
	//If this is the first movie in the theater, fill movies[0]
	if (numberMovies == 0)
	{
		movie[0] = Movie_new;
	}
	//Else loop for movies which are not the first
	else
	{
		movie[numberMovies] = Movie_new;
	}
	numberMovies++;
}

//Function to get movie showing at a given hour for the theater, input of hours to check, output of movie name
string Theater::GetMovieForHour(int Hour)
{
	//Setting default value 
	string give_back= "";
	//Loops through all movies in movie array
	for (int i = 0; i < numberMovies; i++)
	{
		//If to see if the hour has a movie playing
		if (movie[i].GetShowtime() == Hour)
		{
			//setting variable to the first movie with a showing at that hour
			if (give_back == "")
			{
				give_back = movie[i].GetTitle();
			}
		}
	}
	return give_back;
}

//Function to get showtimes for a given genre, input of genre, output of showtime or default
int Theater::GetShowTimeForGenre(string Genre)
{
	//setting default response
	int give_back = -1;
	//Loop to go through all movies in theater
	for (int i = 0; i < numberMovies; i++)
	{
		//If to find movies of the right genre
		if (movie[i].GetGenre() == Genre)
		{
			//Setting return time to movie with first correct genre
			if (give_back == -1)
			{
				give_back = movie[i].GetShowtime();
			}
		}
	}
	return give_back;
}

//Getter function for popcorn price, no input, returns popcorn price
int Theater::GetPopcornPrice()
{
	return popcornPrice;
}

//Getter function for coke price, no input, returns coke price
int Theater::GetCokePrice()
{
	return cokePrice;
}
