# ch17algorithms

Create a project that uses some of the algorithm functions in the STL on a vector of strings and a vector of numbers. The project will create a vector of strings, display it, and search for specific strings in the vector. The project will create a vector of integers that are random numbers, display it, sort it and display again, display the smallest and largest values in the vector, and search for specific values.

Write a template function to display a vector, which takes the beginning iterator and the ending iterator for the vector. Use this function to display both the string vector and the integer vector.

Create a vector of strings by asking the user for words to push into the vector, in a loop that ends when the user enters a sentinel value.

Create a vector of integers by asking the user for the number of values, creating that many random numbers, and pushing those values into the vector. The range for the random numbers should be 10 times the number of values. For example, if the user said to work with 7 numbers, the range is (7 * 10), so the random numbers should range from 1 to 70.

After each vector is filled, display its contents.

For the string vector, ask the user for a word to find, and print out if it is found in the vector or not, looping to search for more words until the user enters a sentinel value. Use the find( ) algorithm to search for the word in the vector.

For the integer vector, sort the contents and display it. Find and display the minimum and maximum elements in the vector. The algorithm for minimum value in a vector named "v" is "min_element( v.begin( ), v.end( ) )"; the algorithm for maximum value is "max_element( v.begin( ), v.end( ) )".  Ask the user which value to search for in the integer vector and display if it was found or not, looping to search for more values until the user enters a sentinel value. Use the binary_search( ) algorithm to search for the integer in the vector.

Here is an example of results:

![ch17-algorithms.PNG](https://github.com/bell-kevin/ch17algorithms/blob/main/algo.PNG)

Be sure to test all of the functionality of the program -- ask for a word that does exist and a word that does not exist, ask for a number that does exist and a number that does not exist. Run the project 2 times, using different numbers of words and integers in each run. Take screenshots of the results.

 ![p](https://github.com/bell-kevin/ch17algorithms/blob/main/algo2.PNG)

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
