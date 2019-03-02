/*************************************************************************
* Program:                                                                 
*    Assignment 34, Pointer Arithmetic                                     
*    Brother Ridges, CS124                                                 
* Author:                                                                  
*    Alexander Berryhill                                                   
* Summary:                                                                 
*    This program will count the number of a letter is in a string.        
*                                                                          
*                                                                          
*                                                                          
*                                                                          
*    Estimated:  0.5 hrs                                                   
*    Actual:     0.5 hrs                                                   
*      The most difficult part was finding cin.ignore()                    
*************************************************************************/

#include <iostream>
using namespace std;

/*************************************************************************
 * getText will get a letter and text by pointer.                          
 ************************************************************************/
void getText(char text[], char * pletter)
{
   cout << "Enter a letter: ";
   cin >> *pletter;
   cout << "Enter text: ";
   cin.ignore(256, '\n');
   cin.getline(text, 256);
   return;
}

/*************************************************************************
 *  * count letters counts and returns the number of a letter in a string.    
 ************************************************************************/
int countLetters(char text[], char * pletter)
{
   int numLetters = 0;
   for (char *p = text; *p; p++)
   {
      if (*p == *pletter)
      {
         numLetters++;
      }
   }
   return numLetters;
}

/*************************************************************************
 * main will prompt a get a letter and text. It will ask countLetters      
 * for numLetters then display it.                                         
 ************************************************************************/
int main()
{
   char text[256];
   char letter;
   char * pletter;
   pletter = &letter;

   getText(text, pletter);
   int numLetters = countLetters(text, pletter);
   cout << "Number of \'" << letter << "\'s: " << numLetters << endl;
   return 0;
}