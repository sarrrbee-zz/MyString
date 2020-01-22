# MyString - Class Project Instructions:

For part 2, make sure you do valgrind testing.  Not having any memory
errors will be a big part of the grade.


(a) Implement the following operators for MyString class:

	<, >, ==, !=, <=, >=

    The comparison should be lexicographical (i.e., what strcmp() does).
    The == and != operators should evaluate to 1 if the condition is true, 0
    if false.  (Actually, C++ now has bool type.  Feel free to use it if
    you'd like.)

    You're welcome to implement some of them using the others (for
    example, you can easily implement != using ==).

    Make sure that you can invoke the operators with string literal on
    either side.  That is, both of the following expressions should be
    valid:

    	str == "hello"
	"hello" == str

    where str is a MyString object.

    Write a test driver program, named "test5", to test your operators.
    (And name your source file test5.cpp.) The assert() C library function
    might be useful for writing a test driver.  See the man page for how to
    use it.  

    In a C source file, you would #include <assert.h> in order to use
    assert() function.  You have to do things a little differently in
    C++.  You #include <cassert> instead.


(b) Implement += operator that appends a string given on the
    right-hand side to the one on the left-hand side.  For example,

    	MyString s("hello");
	s += " world";
	cout << s << endl;

    will print out "hello world".  

    Once you have operator+=(), reimplement operator+() using +=.
    Using operator+=(), you can implement operator+() without
    accessing the data members directly.  Un-friend operator+().

    Write some test code that tests your operator+=() and the new version of
    operator+().  Add your test code to test5.cpp.  Your test driver MUST
    include the following statements:

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

    You can test more statements if you'd like.  Don't forget the
    valgrind testing.
