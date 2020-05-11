SUMMARY

An exercise to complete a program that uses different ways to calculate the
factorial of a positive integer.

This README.txt file has the following sections:
    - Using repl.it
    - Project files
    - What you have to do 
    - Building the project outside repl.it
    - Further information
    
------------------------------------------------------------------------------
USING REPL.IT

This project is available at: https://repl.it/@nickcook/csc1032-factorial. 
It is also available in the csc1032-cpart1-exercises.zip file on Blackboard.

You can run and edit the project in repl.it. When you make a change to a
project in repl.it, a new temporary copy of the repl/project is forked.

If you have an account on repl.it you can fork projects into your account.
It is free to sign up to repl.it.

If you want to save your work between sessions you can either:
    1. copy and paste your changes to a local file (e.g., for this project,
       copy and paste the factorial.c file), or 
    2. fork the project to your own repl.it account.
    
Running the project in repl.it, runs the main function in main.c and executes
the unit tests of the functions in factorial.c.

Alternatively, you can download all files and compile and run the project
using a C compiler on your own machine (or on linux.cs.ncl.ac.uk, for example)
- see the section on building the project outside of repl.it.

------------------------------------------------------------------------------
PROJECT FILES

This project contains the following files:

    factorial.c         - the implementation of factorial functions
    factorial.h         - the declaration of factorial functions
    test_factorial.c    - unit tests of functions declared in factorial.h
                          and implemented in factorial.c
    test_factorial.h    - declarations of functions and structures 
                          implemented in test_factorial.c
    main.c              - the main function
    Makefile            - a project make file that can be used to build 
                          the project outside repl.it
    munit.c             - the unit test library implementation
    munit.h             - the unit test library declarations
    README.txt          - this README file

The only file that you edit is factorial.c. Do NOT edit any of the other
files.

------------------------------------------------------------------------------
WHAT YOU HAVE TO DO

Your task is to complete the implementation of the following functions in
factorial.c:

    int factorial(int n);               // an iterative solution
    int trfactorial(int n, int fac);    // a tail-recursive solution

Each function is declared and documented in factorial.h. Make sure you read
and understand the documentation in factorial.h BEFORE you attempt to
implement a function.

In addition, you are given the function rfactorial that uses recursion but is
not tail-recursive.

See the further information for some background on factorial and on tail
recursion.

You test your functions by running the project, which runs the unit tests.

The output to expect for correct implementation of the functions is similar to
the following:

...........................................................................
Running test suite with seed 0x156585a6...
/test_factorial/test_factorial       
    testing factorial ...
    with input i: 0 1 2 3 4 5 6 7 8 9 10 11 12 
[ OK    ] [ 0.00004000 / 0.00003800 CPU ]
/test_factorial/test_rfactorial      
    testing rfactorial ...
    with input i: 0 1 2 3 4 5 6 7 8 9 10 11 12 
[ OK    ] [ 0.00004500 / 0.00004200 CPU ]
/test_factorial/test_trfactorial     
    testing trfactorial ...
    with input i: 0 1 2 3 4 5 6 7 8 9 10 11 12 
[ OK    ] [ 0.00004400 / 0.00004200 CPU ]
3 of 3 (100%) tests successful, 0 (0%) test skipped.
...........................................................................

Note, the seed and CPU runtimes will be different to the above.

If there is an error in a function you have written you will see test output
similar to the following:

...........................................................................
Running test suite with seed 0x77af60cf...
/test_factorial/test_factorial       
    testing factorial ...[ ERROR ]
Error: test_factorial.c:42: assertion failed: (*__error()) == 22 (0 == 22)
Error: child killed by signal 6
/test_factorial/test_rfactorial      
    testing rfactorial ...
    with input i: 0 [ ERROR ]
Error: test_factorial.c:36: assertion failed: factorial_f(i) ==
    expected_result[i] (0 == 1)
Error: child killed by signal 6
...
...
1 of 3 (33%) tests successful, 0 (0%) test skipped.
...........................................................................

The above example shows that:
    1. the function factorial fails test_factorial because it is expected 
       that the global errno is set to 22 (or EINVAL) and the actual 
       value is 0.
    2. the function rfactorial fails test_rfactorial with input 0
       because the result calculated by rfactorial is 0 when it is expected
       to be 1.

Your aim is to correct your function implementations until there are no test
errors.

------------------------------------------------------------------------------
BUILDING THE PROJECT OUTSIDE REPL.IT

You can build the project outside repl.it. It should compile as is on
any version of linux and on MacOS (which is a POSIX compliant, variant
of BSD Unix).

To compile and run the project, download all files into a new local directory
and type the following:

    # make run
    
at the command line. 

Alternatively, make the project and then run it as follows:

    # make
    # ./out/main 

Project files are available in the csc1032-cpart1-exercises.zip archive on
Blackboard.

------------------------------------------------------------------------------
FURTHER INFORMATION

See https://en.wikipedia.org/wiki/Factorial for the definition of the 
factorial of a positive integer and background on why it is useful.

See https://en.wikipedia.org/wiki/Tail_call for information about tail
recursion. The simple definition is that the recursive call should be the last
thing a tail-recursive function does. Tail recursion is useful because it
allows optimisation to avoid exhausting the stack. A compiler can perform such
optimisation.

------------------------------------------------------------------------------





