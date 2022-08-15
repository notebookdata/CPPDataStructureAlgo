/*

Problem Description

Find the contiguous non-empty subarray within an array, A of length N, with the largest sum.



Problem Constraints

1 <= N <= 1e6
-1000 <= A[i] <= 1000



Input Format

The first and the only argument contains an integer array, A.



Output Format

Return an integer representing the maximum possible sum of the contiguous subarray.



Example Input

Input 1:

 A = [1, 2, 3, 4, -10] 

Input 2:

 A = [-2, 1, -3, 4, -1, 2, 1, -5, 4] 



Example Output

Output 1:

 10 

Output 2:

 6 



Example Explanation

Explanation 1:

 The subarray [1, 2, 3, 4] has the maximum possible sum of 10. 

Explanation 2:

 The subarray [4,-1,2,1] has the maximum possible sum of 6. 

*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> pfArray(const vector<int> &arr){
    vector<int> pf(arr.size());
    pf[0] = arr[0]; 
    for(int i = 1; i < arr.size(); i++){
        pf[i] = pf[i -1] + arr[i];
    }
    return pf;
}

int maxSubArray(const vector<int> &A) {
    int max = 0;
    int sum = 0;
    vector<int> pf = pfArray(A);
    max = A[0];
    for(int i = 0; i < A.size(); i++){
        for(int j = A.size(); j <= i; j--){
            sum = pf[j];
            if(sum > max){
                max = sum;
            }
        }
    } 

}



int main(){
    vector<int> arr = {1, 2, 3, 4, -10};
    int res = maxSubArray(arr);
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 85f09f3b928b3e43e5760d7a1fdb707d883f3b08
