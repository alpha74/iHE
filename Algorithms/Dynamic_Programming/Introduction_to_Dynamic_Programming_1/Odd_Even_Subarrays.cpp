// Return count of odd-even subarrays
// https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/odd-even-subarrays-72ad69db/
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ull unsigned long long int

void vogons() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	vogons() ;
	
	return 0 ;
}

ll getOddEvenSubarrays(vector<ll> input)
{
		unordered_map<int, int> imbalances;
    imbalances[0] = 1; // 0 is the initial position

    unsigned odd_count = 0;
    unsigned even_count = 0;

    long int res = 0; 
    for (unsigned i = 0; i < input.size(); i++) 
		{
        if (input[i] & 1) 
					odd_count++ ;

        else 
					even_count++ ;
					
        res += imbalances[odd_count - even_count]++;
    } 
    return res;
}

void vogons()
{
	ll n ;
	cin >> n ;

	vector<ll> arr(n) ;

	for( int i = 0 ; i < n ; i++ )
	{
		cin >> arr[i] ;
	}

	cout << getOddEvenSubarrays(arr);
}
