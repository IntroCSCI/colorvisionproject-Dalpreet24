//Author: Dalpreet Kullar
#include <iostream>
#include<fstream>
#include <vector>
using namespace std;
#include <cstdlib>
#include <ctime>

//functions\\

//This funtions allows us to check if the user has enetered the appropriate number. 
bool validNumber (int);
//This allows us to see if file can closed or not.
void fileClose(const fstream&);
//Chnage case from upper to lower. 
void changeCase(string&);
//This allows the appropiate colors to show depending on the user's input. 
vector<string>colorGenerator();
// This takes an int and fstream to write the colors to file.
void writeInFile(int, fstream&);


int main()
{
  int colors=0;
  string fileName;
  vector<string>checker;
  fstream reader;
  string svgchecker1;
  size_t  position1;
  //new variables;
  size_t position2;
  string svgchecker2;
  srand(time(NULL));
  vector<string>newColor;
  string nameIsValid;

  do
  {
    cout<<"How many colors would you like(enter 2-5) ? "<<endl;
  
    cin>>colors;
    
    if(validNumber(colors)==true)
    {
      cout<<"The number was incorrect. Please enter correct numbers(2-5)"<<endl;
    }
    else
    {
      break;
    }
  }
  while(colors<2 || colors>5);
    
  cout<<"Create file name ending with(.svg)? "<<endl; 
  do
  {
    cin>>fileName;
    
    position1 = fileName.find(".svg");
    position2= fileName.find(".SVG");
  
    if((fileName.size()>=5) && (fileName[position1]||fileName[position2]))
    {
      changeCase(fileName);
      checker.push_back(fileName);
      do
      {
        cout<<"The name of the file is "<<fileName<<" (yes or no)?"<<endl;
        cin>>nameIsValid;
        if(nameIsValid=="no")
        {
          cout<<"What would you like to name the file?"<<endl;
          break;
        }
      }
      while(nameIsValid=="no"||nameIsValid=="No");
    }
    else
    {
      cout<<"File name must end in (.svg). Please enter the correct file name?"<<endl; 
    }
    
  }
  while((!fileName[position1])||(nameIsValid=="no"));

  do
  {
    reader.open(fileName, ios::out);
    if(reader.is_open())
    {
      cout<<fileName<< " has been opened " <<endl;
    }
    else
    {
      cout<<"Failed to open the file."<<endl;
    }
  }
  while(!reader.is_open());
  
  writeInFile(colors, reader);

  reader.close();

  fileClose(reader);
  
  return 0;
} 

//Definations:
bool validNumber (int number)
{
  if (number < 2 || number >5 )
  {
    return true;
  }
  else
  {
    return false;
  }

}

void fileClose(const fstream &reader)
{
  if(reader.is_open())
  {
    cout<<"File has not been closed"<<endl;
  }
  else
  {
    cout<<"File has been closed"<<endl;
  }
  
}

void changeCase(string&fileName)
{
  size_t  position1;
  size_t position2;
  position1= fileName.find(".svg");
  position2= fileName.find(".SVG");

  if(fileName[position1] ||fileName[position2])
  {
    for(int i=0; i<fileName.size(); i++)
    {
      char letter =fileName[i];
      if(letter >= 'A' && letter <= 'Z' )
      {
        letter = letter + ('a' - 'A');
      }
      fileName[i]=letter;
    }
  }
}
  

vector<string> colorGenerator()
{
  
  string color1="000000";
  int randNum=0;
  vector<int>newNum;
  vector<string>color;
  string number;
  
  for(int i=0; i<color1.size();i++)
 {
    randNum = (rand() % 15);
    newNum.push_back(randNum);
    
    if( newNum[i] ==0)
    {
      color.push_back("0");
     }
    else if (newNum[i]==1)
    {
      color.push_back("1");
    }
   else if (newNum[i]==2)
   {
      color.push_back("2");
    }
   else if (newNum[i]==3)
   {
      color.push_back("3");
    }
   else if (newNum[i]==4)
   {
      color.push_back("4");
    }
   else  if (newNum[i]==5)
   {
      color.push_back("5");
    }
   else  if (newNum[i]==6)
   {
      color.push_back("6");
    }
    else if (newNum[i]==7)
    {
      color.push_back("7");
    }

    else if (newNum[i]==8)
    {
      color.push_back("8");
    }
    else if (newNum[i]==9)
    {
      color.push_back("9");
    }
    else if (newNum[i]==10)
    {
      color.push_back("A");
    }
    else if (newNum[i]==11)
    {
       color.push_back("B");
    }
    else if (newNum[i]==12)
    {
      color.push_back("C");
    }else if (newNum[i]==13)
    {
      color.push_back("D");
    }
    else if (newNum[i]==14)
    {
      color.push_back("E");
    }
    else if (newNum[i]==15)
    {
      color.push_back("F");
    }
    cout<<color[i];
  }
  cout<<endl;
  return color;
    
}

void writeInFile(int colors, fstream& reader)
{
  int count=0;
  for(int i=0; i<colors; i++)
  {
    vector<string>newColor=colorGenerator();
    count++;
    reader<<"Color#"<<count<<": #";
  
    for(int i=0;i<newColor.size();i++)
    { 
      reader<<newColor[i];
    }
    reader<<endl;

  }
}