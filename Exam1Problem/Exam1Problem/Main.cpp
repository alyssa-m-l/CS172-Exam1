//Name: Alyssa La Fleur
//Class: CS172
//Exam #1
//Purpose:  Classes for a theater and movie, to create a program which can create a movie theater object and give it movie objects to answer questions about
// I affirm that all code given below was written soley by me, Alyssa La Fleur, and that any help I received adhered to the rules stated for this exam
#include <iostream> 
#include "Movie.h" 
#include <string>
#include "Theater.h" 
using namespace std; 

//Main to be ran, given in exam problem packet

int main() 

{ 
const int MOVIECOUNT = 11;
Movie movieListing[] = {   Movie("Bull Durham", "Comedy", 0), Movie("Ocean's Eleven", "Action", 2),   
Movie("Monte Python's Meaning of Life", "Comedy", 5), Movie("Jaws", "Horror", 7),
Movie("Fletch", "Comedy", 10), Movie("Usual Suspects", "Action", 12),
Movie("Bull Durham", "Comedy", 14), Movie("Ocean's Eleven", "Action", 16),
Movie("Monte Python's Meaning of Life", "Comedy", 19), Movie("Jaws", "Horror", 21),
Movie("Usual Suspects", "Action", 23)}; 

Theater garland("The Garland", "509-327-2509"); 

for (int m = 0; m < MOVIECOUNT; m++) 
{ 
	garland.AddMovie(movieListing[m]);
} 

int errors = 0;
if (garland.GetMovieForHour(-1) != "")
{ 
	errors++; 
	cout << "error: not handling -1 correctly\n";
}

if (garland.GetMovieForHour(25) != "")
{ 
	errors++; 
	cout << "error: not handling 25 correctly\n";
}

if (garland.GetMovieForHour(19)!= "Monte Python's Meaning of Life")
{ 
	errors++; 
	cout << "error: incorrect movie for 19th hour\n";
}

if (garland.GetShowTimeForGenre("Comedy") != 0)
{ 
	errors++;
	cout << "error: incorrect Comedy\n"; 
}

if (errors == 0)
cout << "Passed\n";
else 
cout << "Errors: " << errors << endl; 

}
