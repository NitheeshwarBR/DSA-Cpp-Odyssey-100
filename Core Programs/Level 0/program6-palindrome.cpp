    #include<iostream>
    using namespace std;
    int reverse_number(int n, int rev = 0) {
      if (n == 0)
        return rev;
      else
        return reverse_number(n / 10, rev * 10 + n % 10);
    }
    bool isPalindrome(int n)
    {
        int res = reverse_number(n);
        return res == n ;
    }
    int main()
    {
        cout<<"Enter a number ";
        int n;
        cin >> n;
        bool result = isPalindrome(n);
        if(result) cout<< n << " is a palindrome number "<<endl;
        else  cout << n << " is not a palindrome number " << endl;
        return 0;
    }
