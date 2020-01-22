#include <cassert>
#include "mystring.h"

int main()
{
	MyString s1 = "hello";

	MyString s2 = "hell";

	MyString s3 = "hi";

	MyString s4 = "abc";

	MyString s5 = "hi";

	assert(s1 == "hello");

	assert("hello" == s1);

	assert(s5 == s3);

	assert(s4 < s1);

	assert("a" < s1);

	assert(s4 < "bcd");

	assert(s1 > s2);

	assert(s1 > "a");

	assert("sara" > s4);

	assert(s1 != s2);

	assert("sara" != s1);

	assert(s1 != "sara");

	assert(s4 <= s1);

	assert("abc" <= s4);

	assert(s4 <= "abc");

	assert(s1 >= s2);

	assert(s1 >= "hello");

	assert("hello" >= s1);

	assert("sara" >= s1);

	MyString one = "my name is";
	MyString two = " sara";

	one += two; // my name is sara
	cout << one << endl;

	one += two; // my name is sara sara 
	cout << one << endl;

	// test op+=() and op+()

	MyString sp(" ");
	MyString period(".");
	MyString str;

	str += "This" + sp + "should" + sp
	    += "work" + sp + "without"
	    += sp + "any" + sp + "memory"
	    += sp + "leak"
	    += period;

	cout << str << endl;

	MyString name = "sara";

	name += " bernstein";

	cout << name << endl;

	MyString a = "1";
	MyString b = "2";
	MyString c = "3";

	a += b += c;

	cout << a << endl;

	MyString zoo = "Zoo";

	assert(zoo < s1);
}
