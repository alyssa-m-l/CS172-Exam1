// I affirm that all code given below was written soley by me, Alyssa La Fleur, and that any help I received adhered to the rules stated for this exam
//inclusion guard 
#ifndef THEATER_H
#define THEATER_H
#include "Movie.h"
#include <iostream>
using namespace std;

//Class for the movie theater object
class Theater
{
private: 
	//Array of possible movies for the theater to 'play', up to 51 movies at once
	Movie movie[50];
	//Member for theater name
	string name;
	//Member for theater phone number
	string phone;
	//Concession prices
	int popcornPrice;
	int cokePrice;
	//Static int to track number of movies actually in theater
	static int numberMovies;
	public:
	//Constructor for class
	Theater(string name_new, string phone_new);
	//Function to add movie to movie array
	void AddMovie(Movie & Movie_new);
	//Function to get a movie title for the first movie playing at a given hour
	string GetMovieForHour(int Hour);
	//Function to get movie show time for the first movie of the correct genre playing in theaters
	int GetShowTimeForGenre(string Genre);
	//Functions to return concession prices
	int GetPopcornPrice();
	int GetCokePrice();
};
#endif
