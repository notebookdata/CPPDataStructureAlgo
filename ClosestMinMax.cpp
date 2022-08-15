/*
Problem Description

Given an array A, find the size of the smallest subarray such that it contains at least one occurrence of the maximum value of the array

and at least one occurrence of the minimum value of the array.



Problem Constraints

1 <= |A| <= 2000



Input Format

First and only argument is vector A



Output Format

Return the length of the smallest subarray which has at least one occurrence of minimum and maximum element of the array



Example Input

Input 1:

A = [1, 3]

Input 2:

A = [2]



Example Output

Output 1:

 2

Output 2:

 1



Example Explanation

Explanation 1:

 Only choice is to take both elements.

Explanation 2:

 Take the whole array.
*/

#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> &A) {
    int maxx = A[0], minn = A[0], minnIndex = 0, maxxIndex = 0,len = 1;
    for(int i=1;i<A.size();i++){    
        if(A[i]>maxx){
            maxx = A[i];
            maxxIndex = i;
            len = abs(maxxIndex-minnIndex)+1;
        }
        if(A[i]<minn){
            minn = A[i];
            minnIndex = i;
            len = abs(maxxIndex-minnIndex)+1;
        }
        if(A[i]==minn){
            minnIndex = i;
            if(len>abs(maxxIndex-minnIndex)+1)
                len = abs(maxxIndex-minnIndex)+1;
        }
        if(A[i]==maxx){
            maxxIndex = i;
            if(len>abs(maxxIndex-minnIndex)+1)
                len = abs(maxxIndex-minnIndex)+1;
        }
    }
    return len;
}

int main(){
    vector<int> arr = {1, 3};
    int res = solve(arr);

    return 0;
}