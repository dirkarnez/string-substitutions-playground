string-substitutions-playground
==================
From [algorithm - How to implement escaping - Stack Overflow](https://stackoverflow.com/questions/34466077/how-to-implement-escaping):
```
var a = "hello";
var b = "world";
var string = "this is a string with variable $a and $b";
string = string.replace("$a", a).replace("$b", b);
```
> Now imagine, someone would put "$b" into a what would happen is that $a gets replaced with "$b" and "world" is twice in a string.

### In this example
- there are 3 variables: `"X"`, `"Y"` and `"XYZ"`. I followed the above question to trick `"X"` variable by assigning value `"Y"`. The boost library does not treat `"X"` variable as `"Y"`.

### Reference
- [Chapter 47. Boost.Xpressive - 1.78.0](https://www.boost.org/doc/libs/1_78_0/doc/html/xpressive.html)
