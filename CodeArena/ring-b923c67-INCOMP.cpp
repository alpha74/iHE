/*

L:
- https://www.hackerearth.com/codearena/ring/b923c67/
IMG LINKS:
- https://user-images.githubusercontent.com/31771552/92029192-d7300000-ed82-11ea-97fc-32783a40b09a.png
- https://user-images.githubusercontent.com/31771552/92029279-f2027480-ed82-11ea-91c7-377522169a07.png
- https://user-images.githubusercontent.com/31771552/92029308-fb8bdc80-ed82-11ea-8c10-fe1c506f70d2.png

In this problem, we are going to build a structure using blocks of certain shape and size.

the block shape and size is described by the following rules -

l - horizontal length of the block
h - height of vertical block attached to the horizontal block
p - position on the horizontal block where the vertical block is attached
c - whether the vertical block is attached above the horizontal block or below it. 1 for above and 0 for below.

The width of the blocks is 1 unit.

See the figure for better explanation.

For l = 7 , h = 3 , p = 4 , c = 1

enter image description here

For l = 7 , h = 3 , p = 4 , c = 0

enter image description here

These blocks can be dropped vertically from above at horizontal positions - x (the position of the left of the block).

You need to calculate the final height of the structure. The final height is the maximum height over all horizontal positions.

Check Input/Output format and example for better understanding.

Constraints:-
1 ≤ n ≤

1 ≤ x ≤
1 ≤ l,p ≤
0 ≤ h ≤


0 ≤ c ≤ 1

Input Format:-
First line contain a single integer N denoting the number of blocks.
Next N lines follows -
line consisting of specifications of the

blocks and horizontal position of drop - l h p c x

Output Format:- Single Integer denoting the maximum height over all horizontal positions.
SAMPLE INPUT

4
4 3 3 1 12
4 2 1 0 18
3 2 3 0 20
1 2 1 1 21

SAMPLE OUTPUT

7

Explanation

enter image description here
Time Limit: 2.0 sec(s) for each input file. 

*/
