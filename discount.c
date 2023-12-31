/*All submissions for this problem are available.I have a habit of asking for discounts when I'm buying something. Before you rush to call me a miser, let me tell you that I only ask for discounts if I have to pay at least 10 Rs, since asking for a discount on something that can be paid with just a few coins is really rude.

One day, I was supposed to pay N Rs, but the shopkeeper gave me an unusual offer - he told me that I can remove one of the digits in the decimal representation of N and pay only the resulting price. I am trying to figure out the minimum price I have to pay if I choose the digit to remove optimally. Would you help me, please?

Note that the resulting number after removing digit is allowed to have leading zeros. But while outputting the answer, there should be no leading zeros.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N.
Output
For each test case, print a single line containing one integer - the minimum price I have to pay.

Constraints
1≤T≤105
10≤N≤109
Example Input
3
21
132
104
Example Output
1
12
4
Explanation
Example case 1: I have two choices - remove the first digit, so the price I have to pay is 1, or remove the second digit, so the price I have to pay is 2. Obviously, the first option is better.

Example case 3: I can remove the digit 1 and then I only have to pay 4 Rs.*/
#include<stdio.h>
#include<string.h>
int main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
        char n[10];
        scanf("%s",n);
        long int q=0,m=10000000000;
        int k=strlen(n);
        for(int i=0;i<k;i++)
        {
            q=0;
            for(int j=0;j<k;j++)
            if(i!=j)
            q=q*10+(int)n[j]-'0';
            if(m>q)
            m=q;
        }
        printf("%ld\n",m);
    }
    return 0;
}
