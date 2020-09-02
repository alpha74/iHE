/*
A new deadly virus has infected large population of a planet. A brilliant scientist has discovered a new strain of virus which can cure this disease. Vaccine produced from this virus has various strength depending on midichlorians count. A person is cured only if midichlorians count in vaccine batch is more than midichlorians count of person. A doctor receives a new set of report which contains midichlorians count of each infected patient, Practo stores all vaccine doctor has and their midichlorians count. You need to determine if doctor can save all patients with the vaccines he has. The number of vaccines and patients are equal.

Input Format

First line contains the number of vaccines - N. Second line contains N integers, which are strength of vaccines. Third line contains N integers, which are midichlorians count of patients.

Output Format

Print a single line containing
or

.

Input Constraint

Strength of vaccines and midichlorians count of patients fit in integer.

Problem Setter: Practo Tech Team
SAMPLE INPUT

5
123 146 454 542 456
100 328 248 689 200

SAMPLE OUTPUT

No


*/

// amanalphakumar
#include <bits/stdc++.h>

using namespace std ;

void fly() ;

int main()
{
	int t = 1 ;
	//cin >> t ;

	while( t-- ) fly() ;

	return 0 ;
}

void fly()
{
	int n ;
	cin >> n ;

	vector<int> v(n), p(n) ;

	for( int i = 0 ; i < n ; i++ )
	{
		cin >> v[i] ;
	}

	for( int i = 0 ; i < n ; i++ )
	{
		cin >> p[i] ;
	}

	bool ans = true ;

	for( int i = 0 ; i < n && ans ; i++ )
	{
		if( v[i] <= p[i] )
			ans = false ;
	}

	if( ans )
		cout << "Yes\n" ;
	else
		cout << "No\n" ;
}

// https://www.hackerearth.com/codearena/ring/078b0a7/
