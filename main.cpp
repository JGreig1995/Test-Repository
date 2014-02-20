#include <iostream>
using namespace std;

// This is just a small program to get used to using a public repository on GitHub.

class cadet
{
  public:
  //CONSTRUCTOR (CREATES NEW CADET AS FRESHMAN WITH ZERO CREDITS)
  cadet();
  //MODIFICATION MEMBER FUNCTIONS
  void increaseYear();
  void fieldTraining();
  void awards(string input);
  //CONSTANT MEMBER FUNCTIONS
  void checkYear();
  void checkAwards();
  
  private:
  int year;
  bool poc;
  string[10] awards;
  int current_index = 0;
  
};

cadet::cadet()
//Precondition: A cadet is enrolled at ROTC.
//Postcondition: The cadet begins at year AS100, GMC, with no awards.
{
  year = 100;
  poc = false;
  for (int i = 0; i <= 9; i++)
    awards[i] = ""
}

void cadet::increaseYear()
//Precondition: A cadet makes it through spring semester at UNLV.
//Postcondition: The cadet is now one year ahead of schedule.
{
  year += 100;
}

void cadet::fieldTraining()
//Precondition: A cadet is year 300 or higher.
//Postcondition: The cadet is POC.
{
  if (year > 200)
    poc = true;
}

void cadet::awards(input)
//Precondition: A cadet wins an award. Good job!
//Postcondition: A cadet's award is saved to their file.
{
  awards[current_index] = input;
  current_index++;
}

void cadet::checkYear()
//Precondition: A cadet is enrolled at UNLV ROTC.
//Postcondition: A cadet's year is output to the terminal.
{
  cout << endl;
  cout << "The cadet is in AS " << year << " class." << endl;
  cout << endl;
}

void cadet::checkAwards()
//Precondition: A cadet wants to check the awards they have on file.
//Postcondition: The cadet's awards are output the terminal.
{
  cout << endl;
  cout << "The cadet's awards are as follows" << endl;
  if (current_index == 0)
    cout << "There are no current awards to display." << endl;
  else
    for (int i = current_index - 1; i <= 9; i++)
      cout << awards[i] << endl;
}


int main()
{
  cout << endl << "Hello World!" << endl;
  return 0;
  
  cadet Greig;
  Greig.checkYear();
  Greig.checkAwards();
}

