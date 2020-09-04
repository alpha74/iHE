/*

You have been given an array A of size N and an integer K. This array consists of N integers ranging from 1 to . Each element in this array is said to have a Special Weight. The special weight of an element is

.

You now need to sort this array in Non-Increasing order of the weight of each element, i.e the element with the highest weight should appear first, then the element with the second highest weight and so on. In case two elements have the same weight, the one with the lower value should appear in the output first.

Input Format:

The first line consists of two space separated integers N and K. The next line consists of N space separated integers denoting the elements of array A.

Output Format:

Print N space separated integers denoting the elements of the array in the order in which they are required.

Constraints:

Note:

You need to print the value of each element and not their weight.
SAMPLE INPUT

5 2
1 2 3 4 5

SAMPLE OUTPUT

1 3 5 2 4


*/

// amanalphakumar

#include <bits/stdc++.h>

using namespace std ;

void fly() ;

int main()
{
	int t = 1; 

	while( t-- ) fly() ;
	return 0 ;
}

bool sortK( pair<int,int> a, pair<int,int> b )
{
	if( a.second > b.second )
		return true ;

	else if( a.second < b.second )
		return false ;

	else
	{
		if( a.first < b.first )
			return true ;
		else 
			return false ;
	}
	
}

void fly()
{
	int n, k ;
	cin >> n >> k ;

	vector<pair<int,int>> arr(n) ;

	for( int i = 0 ; i < n ; i++ )
	{
		int temp ;
		cin >> temp ;

		arr[i] = make_pair( temp, temp % k ) ;
	}

	// Sort the array
	sort( arr.begin(), arr.end(), sortK ) ;

	// Print ans
	for( int i = 0 ; i < n ; i++ )
	{
		cout << arr[i].first << " " ;
	}

	cout << "\n" ;


}

// https://www.hackerearth.com/codearena/ring/80bc923/
