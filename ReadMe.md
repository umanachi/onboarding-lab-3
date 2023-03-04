# Week 3 Lab: Verification

## Questions

###### What testing strategy did you adopt for this Exercise2? What decisions did you have to make and how did you come up with your answers?
+ I first created a method that would calculate the expected output so I wouldn't have to do it manually.
+ I decided to use a similar strategy to the other tests I made, by evaluating the module with an initial input and comparing the results to the expected output, then shifting the register a large number of times to make sure the module works continuously. I also used more about 10 random inputs, although I could probably test more. I was struggling with this question a bit, but I took a look at the test for the LFSR from Lab 2 for ~inspiration.~ 

###### How does testing a Don’t Care work? What must be done to ensure the input truly has no effect on output?

I tested the Don't Care by trying every possible value of that input and making sure the output wasn't changed / was expected. In this case, I kept `cs` as 1 and cycled through 0-3 for `sel` and checked that the output was 0 for every iteration. Although it may be more difficult to check all possible options of Don't Cares that have a larger range of values, it is safest to cycle through the whole range and check the outputs.
