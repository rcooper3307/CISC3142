**4.5 : Determine the result of the following expressions.**

`(a) -30 * 3 + 21 / 5
(b) -30 + 3 * 21 / 5
(c) 30 / 3 * 21 % 5
(d) -30 / 3 * 21 % 4`

a = -86
b = -18
c = 0
d = -2

**4.17: Explain the difference between prefix and postfix increment.**

Prefix increments yield the _changed_ object as their result while postfix increments yield the _unchanged_ object as their result.
**4.34: Given the variable definitions in this section, explain what conversions take place in the following expressions:**
`(a) if (fval)
(b) dval = fval + ival;
(c) dval + ival * cval;`

a) fval has to be a boolean because it's in an if statement.
b) ival gets converted into a float value and then the sum of fval and ival gets converted into a double.
c) cval is promoted to int and then it is multiplied with ival, the product of which is added with dval converting the sum to a double.
