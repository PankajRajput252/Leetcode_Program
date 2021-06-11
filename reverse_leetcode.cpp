/*Given a signed 32-bit integer x, return x with its digits reversed.
 If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1],
  then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
Example 4:

Input: x = 0
Output: 0   */


#include<bits/stdc++.h>
using namespace std;
int reverse(int x) {
        int sum=0,res;
            while(x!=0)
            {
               res=x%10;
                if (sum > INT_MAX/10 || (sum == INT_MAX / 10 && res > 7)) return 0;
            if (sum < INT_MIN/10 || (sum == INT_MIN / 10 && res < -8)) return 0;
                sum=sum*10+res;
                x=x/10;
            }
        return sum;
    }
int main()
{
    int x;
    cin>>x;
    cout<<reverse(x);

}