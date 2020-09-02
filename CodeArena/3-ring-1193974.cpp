/*
Madara, as you know, is not generally a person to work-out. But recently his girlfriend told him to get in shape. So he started going to the gym everyday.

He knows that he must do at least N number of push-ups in a day. If he is unable to do N push-ups altogether, he does them in different sets. He knows he can do at max A push-ups in the same set. Every time he does a set, he becomes a little tired and hence does D number of push-ups less in the next set. But no matter how tired he gets, he is capable of doing M number of push-ups at the least.

What is the minimum number of sets in which Madara can complete his daily goal?

INPUT:

The first line contains an Integer T, the number of test cases. Each test case consists of four integers - N, A, D and M.

OUTPUT:

For each test case, output an single Integer denoting the minimum number of sets on a new line.

CONSTRAINTS:

1 <= T <= 100

1 <= A, N <=1000

1 <= D <= 500

5 <= M <= 100
SAMPLE INPUT

3
50 20 1 5
20 20 5 4
40 10 5 5

SAMPLE OUTPUT

3
1
7


*/

// amanalphakumar

#include <bits/stdc++.h>

using namespace std ;

void fly() ;

int main()
{
	int t = 1 ;
	cin >> t ;

	while( t-- ) fly() ;

	return 0 ;
}

void fly()
{
	int n, a, d, m ;
	cin >> n >> a >> d >> m ;

	int count = 0 ;

	int done = 0 ;
	int maxcap = a ;

	while( done < n )
	{
		count++ ;
		
		if( maxcap <= m )
		{
			done += m ;
			maxcap -= d ;
		}
		else
		{
			done += maxcap ;
			maxcap -= d ;
		}
	}

	cout << count << "\n" ;
}

// https://www.hackerearth.com/codearena/ring/1193974/
