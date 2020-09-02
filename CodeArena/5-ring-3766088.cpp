/*

The king of ghosts is really disappointed when he sees that all the human beings on Planet Earth have stopped fearing the ghost race. He knows the reason for this. The existing ghost race has become really lazy and has stopped visiting Planet Earth to scare the human race. Hence, he decides to encourage the entire ghost race into scaring the humans by holding a competition. The king, however, never visits Planet Earth.

This competition will go on for N days. Currently, there are a total of M ghosts (apart from the king) existing in the ghost race such that :
- The youngest ghost is 1 year old.
- The oldest ghost is M years old.
- No two ghosts have the same age.
- The age of each and every ghost is a positive integer.

On each day of the competition, ghosts have to visit Planet Earth to scare people. At the end of each day, a "Ghost of the Day" title is awarded to the ghost who scares the most number of humans on that particular day. However, the king of ghosts believes in consistency. Once this title has been given, the ghost who has won the most number of such titles until that particular moment is presented with a "Consistency Trophy". If there are many such ghosts, the oldest among them is given the trophy. Note that this "Title Giving" and "Trophy Giving" happens at the end of each day of the competition.

You will be given the age of the ghost who won the "Ghost of the Day" title on each day of the competition. Your job is to find out the age of the ghost who was awarded with the "Consistency Trophy" on each day of the competition.

Input
The first line consists of 2 space separated integers N and M. The next line consists of N space separated integers such that the ith integer denotes the age of the ghost who was awarded with the "Ghost of the Day" title on the ith day of the competition.

Output
Print N lines. The ith line should contain 2 space separated integers such that the first integer denotes the age of the ghost who was awarded with the "Consistency Trophy" on the ith day and the second integer denotes the number of "Ghost of the Day" titles won by this ghost until the end of the ith day of the competition.

Constraints
1 ≤ N ≤ 105
1 ≤ M ≤ 109
SAMPLE INPUT

7 5
1 3 1 3 2 2 2

SAMPLE OUTPUT

1 1
3 1
1 2
3 2
3 2
3 2
2 3

Time Limit: 2.0 sec(s) for each input file. 

*/

// amanalphakumar

#include<bits/stdc++.h>

using namespace std ;

#define ff first
#define ss second

void fly() ;

int main() 
{
	int t = 1; 

	while( t-- ) fly() ;
	return 0 ;
}

void fly()
{
	int n, m ;
	cin >> n >> m ;

	vector<int> age(n) ;

	pair<int,int> curr ;
	map<int,int> prize ;

	for( int i = 0 ; i < n ; i++ )
	{
		cin >> age[i] ;
		prize[ age[i] ]++ ;

		if( i == 0 )
		{
			curr.ff = age[i] ;
			curr.ss = 1 ;
		}
		else
		{
			// If curr ghost has more number of prizes
			if( prize[ age[i] ] > curr.ss )
			{
				curr.ff = age[i] ;
				curr.ss = prize[ age[i] ] ;
			}
			// If curr ghost has same prizes as curr but has more age
			else if( prize[ age[i] ] == curr.ss && age[i] > curr.ff )
			{
				curr.ff = age[i] ;
				curr.ss = prize[ age[i] ] ;
			}

		}
		
		// Print result
		cout << curr.ff << " " << curr.ss << "\n" ;
	}

}

// https://www.hackerearth.com/codearena/ring/3766088/
