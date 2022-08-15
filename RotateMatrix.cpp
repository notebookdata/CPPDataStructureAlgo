/*
Problem Description

You are given a n x n 2D matrix A representing an image.

Rotate the image by 90 degrees (clockwise).

You need to do this in place.

Note: If you end up using an additional array, you will only receive partial score.



Problem Constraints

1 <= n <= 1000



Input Format

First argument is a 2D matrix A of integers



Output Format

Return the 2D rotated matrix.



Example Input

Input 1:

 [
    [1, 2],
    [3, 4]
 ]

Input 2:

 [
    [1]
 ]



Example Output

Output 1:

 [
    [3, 1],
    [4, 2]
 ]

Output 2:

 [
    [1]
 ]



Example Explanation

Explanation 1:

 After rotating the matrix by 90 degree:
 1 goes to 2, 2 goes to 4
 4 goes to 3, 3 goes to 1

Explanation 2:

 2D array remains the ssame as there is only element.
 */

#include <iostream>
#include <vector>

using namespace std;

// void swap(int &v1, int &v2){
//     int tmp = v1,
//     v1 = v2;
//     v2 = tmp;
// }
void swap (int& a, int& b)
{
  int c(std::move(a)); a=std::move(b); b=std::move(c);
}

void solve(vector<vector<int>> &A){
    int N = A.size();
    for(int i = 0; i < N; i++){
        for(int j = 0; j < i; j++){
            swap(A[i][j], A[j][i]);
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N/2; j++){
            swap(A[i][j], A[i][N-1-j]);
        }
    }
}

int main(){
    vector<vector<int>> arr = {{1, 2}, {3, 4}};
    //solve(arr);

    return 0;
}