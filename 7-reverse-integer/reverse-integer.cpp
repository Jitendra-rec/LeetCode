class Solution {
public:
    int reverse(int x) {
        long sum=0;
        while(x)
        {
           int digit=x%10;
           x=x/10;
           sum=sum*10+digit;
          

        }
        return (sum>INT_MAX|| sum < INT_MIN) ? 0:sum;
    }
};

// class Solution {
//  public:
//   int reverse(int x) {
//     long ans = 0;

//     while (x) {
//       ans = ans * 10 + x % 10;
//       x /= 10;
//     }

//     return (ans < INT_MIN || ans > INT_MAX) ? 0 : ans;
//   }
// };
