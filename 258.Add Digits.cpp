/*Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Example:

Input: 38
Output: 2 
Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
             Since 2 has only one digit, return it.
Follow up:
Could you do it without any loop/recursion in O(1) runtime?*/

class Solution {
public:
    //take the sum of all digits ->if the sum is a multiple of 9 --> the digital root is 9
    //if not, the digital root is sum % 9
    int addDigits(int num) {
        int sum = 0;
        if (num == 0){
            return 0;
        }
        while (num != 0)
        {
            sum += num % 10;
            num = num/10;
        }
        if (sum % 9 == 0)
        {
            return 9;
        }
        else
        {
            return sum % 9;
        }
    }
};
