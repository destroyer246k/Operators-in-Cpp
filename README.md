# Operators-in-Cpp
Aim: To study and implement different types of operators in C++ by,        
Determine if a number is positive, negative, or zero.
Calculate average marks and assign grades.
Identify the coordinate quadrant of a point

Apparatus:
GNU g++ compiler (for local execution)Any code editor or an Online C++ Compiler

# Program 1: Check if a Number is Positive, Negative, or Zero     
This program example illustrates the application of relational operators (>, <, ==) along with conditional statements (if, else if, else)   
To determine whether an input integer is:

Positive: If the integer is greater than zero.  
Negative: If the integer is less than zero.     
Zero: If the integer is exactly zero.

In this example, the program prompts the user for a number input and evaluates the condition utilizing simple comparisons. Depending on the result of the evaluation, an appropriate output is shown indicating either a positive, negative, or zero result.

# Program 2: Calculate Average Marks and Display Grade    
For this program, the user will input marks for subjects - DCLD, EDC, NT, MTT, SS. Then the program will calculate the average marks with an arithmetic operator / and find the resulting grade given average marks.

Grade Conditions:   
O Grade, if the average greater than 90 and equal to or less than 100   
A+ Grade if the average is between 81 and 90    
A Grade if the average is between 71 and 80     
B Grade if the average is between 61 and 70     
C Grade if the average is between 51 and 60     
Fail if the average is equal to 50 or less  
If the average is less than 0 or greater than 100 the program will catch this invalid input.

This program uses:  
Arithmetic Operators - to average   
Relational Operators - to compare the average to a grade.   
Logical Operators (&&, ||) - to evaluate combined conditions (eg between).  
Conditional Statements - to return the grade.   
This enables learners to practice arithmetic calculations, data validation and combining multiple conditions in order to create meaningful output with diffrent secnarios.

# Program 3: Determine Coordinate Quadrant    
In this program, the user will enter X and Y coordinates and the program will determine in which quadrant the point lies on the Cartesian plane. The program will also ascertain whether the user enters a point that is on the X-axis, Y-axis or the origin (0,0). 

The program will evaluate the following conditions:     
First Quadrant: X > 0 and Y > 0     
Second Quadrant: X < 0 and Y > 0       
Third Quadrant: X < 0 and Y < 0     
Fourth Quadrant: X > 0 and Y < 0    
Y-axis: X = 0 and Y != 0     
X-axis: Y = 0 and X != 0     
Origin: X = 0 and Y = 0

In this program, the user will apply:   
Relational operators: to compare the values of X and Y.     
Logical operators: specifically AND (&&) to combine conditions for quadrant determination, and OR (||) to test conditions for points that lie on an axis.   
Conditional statements: to classify each unique situation I used nested if, else if statements.


This explains how to do evaluation with multiple conditions in which both comparison and logical operators are used together to complete groupings of comparisons to come to a decision. We also include special circumstances where the point goes directly to an axis or the origin; both of these points are not in any quadrant specific.

Conclusion:     
Each of these programs demonstrates practical applications of operators in C++:     
Program 1: Shows how to classify numbers using relational operators.        
Program 2: Uses a combination of arithmetic, relational, and logical operators to calculate averages and assign grades based on specific criteria.  
Program 3: Applies relational and logical operators to determine the position of a point in geometry.

Collectively, these programs build a solid foundation in decision-making, condition checking, and operator usage in C++, essential for developing more complex programs that require precise control over the logic flow.
