/*
Alfie was a prisoner in mythland. Though Alfie was a witty and intelligent guy.He was confident of escaping prison.After few days of observation,He figured out that the prison consists of () cells.i.e The shape of prison was () matrix. Few of the cells of the prison contained motion detectors.So Alfie planned that while escaping the prison he will avoid those cells containing motion detectors.Yet before executing his plan,Alfie wants to know the total number of unique possible paths which he can take to escape the prison.Initially Alfie is in cell
() while the exit of the cell (

).

note:->Alfie can move in all four direction{ if his current location is (
), he can move to either
(), (), (), () }. If the first cell () and the last cell(

) contain motion detectors,then Alfie can't break out of the prison.

INPUT:

The first line contain number of test cases "T".T test cases follow.The first line of each test case contains an integer "N",(i.e the size of the (

) matrix).The next n lines contain N space separated values either 0 or 1."1" represents a cell containing motion detectors.

OUTPUT:

output total number of unique possible paths which he can take to escape the prison.

Constraint:

SAMPLE INPUT

3
4
0 1 1 0 
0 0 1 0 
0 0 0 0 
0 1 1 0 
4
0 0 0 1 
0 0 0 0 
1 1 1 0 
1 0 0 0 
4
0 1 1 0 
0 0 1 1 
0 0 0 0 
0 1 0 0 
 


SAMPLE OUTPUT

2
4
4


*/

#include <bits/stdc++.h>

using namespace std ;

void fly() ;

int main()
{
	int t = 1 ;
	cin >> t; 

	while( t-- ) fly() ;
	return 0 ;
}

void fly()
{
	int n ;
	cin >> n ;

	vector<<vector<bool>> mat ;

	// Input cells
	for( int i = 0 ; i < n ; i++ )
	{
		vector<bool> row ;
		for( int j = 0 ; j < n ; j++ )
		{
			bool temp ;
			cin >> temp ;
			row.push_back( temp ) ;
		}
		mat.push_back( temp ) ;
	}

	long long int comb = 0 ;

	// Check first condition
	// Complete here
	if( mat[0][0] == 0 && mat[n-1][n-1] == 0 )
	{	
    incomplete ;
	}

	cout << comb << "\n" ;
}

// https://www.hackerearth.com/codearena/ring/bb5039b/
