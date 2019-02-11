/* given a square matrix , rotate it by 90 degree in anti-clockwise direction
Input:

1 2 3
4 5 6
7 8 9

output:

3 6 9
2 5 8 
1 4 7 
--------
Input

 1  2  3  4
 5  6  7  8
 9 10 11 12
13 14 15 16

Output
4 8 12 16
3 7 11 15
2 6 10 14
1 5  9 13

------------------
How to do this without extra space ?

First row of source -> first column of destination , element filled in opposite order
Second row of source -> second column of destination, element filledin opposite order
last row of source -> Last column of destination , element find in opposite order
 An NxN matrix will have floor (N/2) square cycles. 4x4 matrix have 2 cycles.
The first cycle formed by its row, last column ,last row and 1st column.
The second cycle is formed by 2nd row , second-last column, second-last row and second column.

We swap the element involve with corresponding cell in the matrix in anti-clockwise direction. ie: from top to left ,left to bottom , bottom to right and from right to top. we use nothing but a temporary variable to achieve this.

*/

#include <stdio.h>

