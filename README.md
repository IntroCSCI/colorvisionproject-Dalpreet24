Colorvision prject-Dalpreet kullar

## Description

!!!The code that I have created first asks the user of how many colors they would like from ranges 2-5. This will allow to return the numbers of coors for thier palette. Next, to see if the user has eneted the appropriate information, I used a do-while(); loop in an if statement. Next in my code, I ask the user to make a file name which has to end in .svg. To make sure the user has enetred a correct file name, I used .find() to let the user know to correct thier name.!!!

### v0.2 Updates


*Some big updates that were done in this code were the additon of funtions and vectors. This allows for me to ask the user how many colors they want and with the "bool validNumber" funtion, I can see if the user has enetred the appropraite numbers for thier palette. Also, I use "void changeCase(string&)", which allows SVG to go from upper to lower case. A file is opened. Funtions are called such as writeInFile(int, fstream&); which allows us to to write within the file. The funtion vector<string>colorGenerator is brought which allows for colors to be enerted in the file depending on what the user has enetred. Void fileClose(cosnt fstream&); is used to detremine if the file is closed or not. *

### v1.0 Updates

*Coming soon*


## Developer

!!!Dalpreet Kullar!!!

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
!!!
How many colors would you like(enter 2-5) ? 
4
Create file name ending with(.svg)? 
TEST svg
File name must end in (.svg). Please enter the correct file name?
File name must end in (.svg). Please enter the correct file name?
TEST.svg
The name of the file is test.svg (yes or no)?
yes
test.svg has been opened 
08E734
11ABC4
3AAE4D
126665
File has been closed
```

## C++ Guide

### Variables and Data Types

!!!Int numbercolors=0;
 I utilized an int tpye because it allows the users to choose numbers withing a certain range. 

stringname;
String allows for filenames made by users to be what they preffer,whether it being a sentence or phrase. I used filename becasue it makes it eaiser for the user to understand the program.

fstream reader
Fstream allows stream to either read or write to files. 

Srting svg;
I utilzed SVG becasue it can allow me to determine if user eneted a name ending with .svg and string is used to store the .svg.

size_t position;
This funtion was utilzed so rather than storing the whole string, it allowed to just store part of fileName. 



!!!

### Console Input and Output

!!!
Cout was used in my code for the output so the next step could be taken depending on the datathat was collected.Cin was also used becasue it allows for data to be stored which was entered by the user. The data is further stored until user has made changes to it.
!!!

### Decisions

!!!If stamenst were used in the code to dections can be made in it. An example of this in my coed could be when I utized an if statemnt to make sure the user has enetr the appropraite numbers.!!!

### Iteration

!!! TO help withhow many times it is neccassay to repeat the code, loops were used. For example,do-while(); were utilzed to see if the user's created file can be opened.!!!

### File Input and Output

!!!File Input and Output are utilzed to read from files. To use a file to write i used the code fstream reader.open(fileNmae, ios::out);. To write what is nessacry in the file I used "<<".!!!

### Arrays/Vectors

Arrays can hold a certain amount numbers thier data while vector can have endless. Vectors can also utilze funtons to add or drop in the .size(). 
Vecttors were used in my code. vector<int>newColor; was used to store numbers. Push_back was used so the randoms numbers could be stored and loops to change any ideneity of the values. Vector<stirng>newColor was used so that vectors can hold thier value from the fucntion colorgenerator(); The values can then be written in the file by using for loops and reader. Vector<string>color was used so values of the numbers could be converted to letters. 

### Functions

This funtions allows us to check if the user has enetered the appropriate number. 
bool validNumber (int);
This allows us to see if file can closed or not.
void fileClose(const fstream&);
This allows to change the case from upper to lower. 
void changeCase(string&);
This allows the appropiate colors to show depending on the user's input. 
vector<string>colorGenerator();
This takes an int and fstream to write the colors to file.
void writeInFile(int, fstream&);

### Classes

*Coming in version 1.0*
