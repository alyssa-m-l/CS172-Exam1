// I affirm that all code given below was written soley by me, Alyssa La Fleur, and that any help I received adhered to the rules stated for this exam
//inclusion guard
#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
using namespace std;

//Class for movies to be played in theaters
class Movie
{
private:
	//Member for movie name
	string title;
	//Member for movie genre
	string genre;
	//Member for showtime of movie
	int showtime;
public:
	//No argument cosntructor for class
	Movie();
	//Constructor for class which takes the title, genre, and showtime of the movie
	Movie(string title_new, string genre_new, int showtime_new);
	//Getter for movie title
	string GetTitle();
	//Getter for movie genre
	string GetGenre();
	//Getter for movie showtime
	int GetShowtime();
};
#endif // !1

