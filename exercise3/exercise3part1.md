**Exercise 2.1: What are the differences between int, long, long long, and short?
Between an unsigned and a signed type? Between a float and a double?**

The short type has a size of 16 bits, int type is at least as big as the short type, the long type is at least as big as the int type,and the long long type is at least as big as the long type. Signed type represents negative or positive numbers including zero while the unsigned type only represents values greater than or equal to 0. The float type typically represents 32 bits and yields 7 significant digits while the double type represents 64 digits and yields 16 significant digits.

**Exercise 2.2: To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.**

rate: double
Since the rate is a percentage, it would be most accurate to use a double to make sure to capture as many decimal points as possible.

principal: float
Since the principal is an amount that you pay with money and we only use two of the spaces to the right of the decimal for change, float is reliable enough.

payment: float
Since payment is also an amount in money, a float value is accurate enough.

**Exercise 2.3: What output will the following code produce?**
``` 
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```

The output will be:
32
4294967264
32
-32
0
0

**Exercise 2.10: What are the initial values, if any, of each of the following variables?**
```
std::string global_str;
int global_int;
int main()
{
int local_int;
std::string local_str;
}
```
The initial value of `global_str` is "".
The initial value of `global_int` is 0.

**Exercise 2.12: Which, if any, of the following names are invalid?**
`(a) int double = 3.14; (b) int _;
(c) int catch-22; (d) int 1_or_2 = 1;
(e) double Double = 3.14;`

a is invalid because double is a keyword, and b is invalid because it begins with an underscore.

**Exercise 2.13: What is the value of j in the following program?**
```
int i = 42;
int main()
{
int i = 100; int j = i;
}
```

The value of j in this program is 100 because the value of i in the outer scope gets redefined in the inner scope.

**Exercise 2.14: Is the following program legal? If so, what values are printed?**
```
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
sum += i;
std::cout << i << " " << sum << std::endl;
```

The following program is legal and the values that are printed are `100 45` because i is redefined in the inner scope such that the sum adds 1 to 9 up for a sum of 45 while the value of i in the outer scope is printed.

**Exercise 2.17: What does the following code print?**
```
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```

The following code prints "10 10".

**Exercise 2.27: Which of the following initializations are legal? Explain why.**
`(a) int i = -1, &r = 0;
(b) int *const p2 = &i2;
(c) const int i = -1, &r = 0;
(d) const int *const p3 = &i2;
(e) const int *p1 = &i2;
(f) const int &const r2;
(g) const int i2 = i, &r = i;`

c is legal because int is a const.

**Exercise 2.28: Explain the following definitions. Identify any that are illegal.**
`(a) int i, *const cp;
(b) int *p1, *const p2;
(c) const int ic, &r = ic;
(d) const int *const p3;
(e) const int *p;`

a) This definition is illegal because the const is not initialized.
b) This definition is illegal because the const is not initialized.
c) This definition is illegal because although const could be initialized to an int, it's in the wrong spot so it doesn't run.
d) p3 isn't pointing to a const int value so it doesn't compile.
e) `*p` is defined as an pointer to a const integer.

