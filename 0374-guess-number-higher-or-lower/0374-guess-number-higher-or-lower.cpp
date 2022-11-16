/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        if(guess(n)==0) return n;
        long long int lo=0,hi=n-1;
        while(lo<=hi)
        {
            long long int mid=(lo+hi)/2;
            if(guess(mid)==0) return mid;
            else if(guess(mid)==-1) hi=mid-1;
            else if(guess(mid)==1) lo=mid+1;
        }
        return -1;
    }
};