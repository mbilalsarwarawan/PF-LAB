//Libraries
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <iomanip>
//Namespace
using namespace std;
//Rows and Columns variable Declaration
//Declared globally so that it can be accessed by any function
int rows1;
int columns1;
//user defined functions
void randFill(int matrix1[100][100]);
void userFill(int matrix1[100][100]);
void dispMatrix(int matrix1[100][100]);
void tranMatrix(int matrix[100][100] , int tmatrix[100][100]);
//main functions
int main()
{
  //Variable Declarations
  //Matrix arrays Variable Declaration
  int matrix1[100][100];
  int tmatrix[100][100];
  //variable choice for the elements of the matrix
  char choice;
  //Getting input from the user to specify size of arrays
  cout << "Enter number of rows of matrix 1    : ";
  cin >> rows1;
  cout << "Enter number of columns of matrix 1 : ";
  cin >> columns1;
  system("CLS");
  //Asking the user for ways to fill these matrix
  //I'll provide the user to ways of filling the matrix
  //1 option will be filling the arrays with elements of his choice
  //2 option will fill the array with random elements
  retryent: //label for goto in case invalid choice
  cout << "How do you want to fill the array?" << endl;
  cout << "1. Manually entering the elements of matrix" << endl;
  cout << "2. Randomly generating the elements of the matrix" << endl;
  cout << "Enter your choice : ";
  choice = _getche();
  //Matrix Filling case
  switch(choice)
  {
    case '1':
    {
      userFill(matrix1);
      break;
    }
    case '2':
    {
      randFill(matrix1);
      break;
    }
    default:
    {
      system("CLS");
      cout << "*You have selected an invalid option previously. Please chose a valid option" << endl;
      goto retryent;
    }
  }
  dispMatrix(matrix1);
  tranMatrix(matrix1 , tmatrix);
}

//userFill case Definition
void userFill(int matrix1[100][100])
{
  system("CLS");
  cout << "\t<Matrix entry portal>" << endl;
  cout << "\n\n";
  cout << "\t     <Matrix 1>      " << endl;
  cout << "\n";
  //User input filling loop for matrix 1
  for(int i = 0 ; i < rows1 ; i++)
  {
    for(int j = 0 ; j < columns1 ; j++)
    {
      cout << "Enter element for row " << i + 1 << " and column " << j + 1 << " : ";
      cin >> matrix1[i][j];
    }
  }
  system("CLS");
}

//randFill case Definition
void randFill(int matrix1[100][100])
{
  srand(time(NULL));
  //Randomly filling loop for matrix 1
  for(int i = 0 ; i < rows1 ; i++)
  {
    for(int j = 0 ; j < columns1 ; j++)
    {
      matrix1[i][j] = rand() % 100;  // It could be any number less than 100
    }
  }
}
//Displaying matrix
void dispMatrix(int matrix1[100][100])
{
  system("CLS");
  cout << "\t<Matrix Operation Results>" << endl;
  cout << "\n\n";
  cout << "\t        <Matrix 1>      " << endl;
  cout << "\n";
  cout << "\n";
  for(int i = 0 ; i < rows1 ; i++)
  {
    cout << "\t|";
    for(int j = 0 ; j < columns1 ; j++)
    {
      cout << left << setw(4) << matrix1[i][j] << right;
      if(j != columns1-1)
      {
        cout << "\t";
      }
    }
    cout << "|";
    cout << endl;
  }
}

//Transpose of matrix function
void tranMatrix(int matrix[100][100] , int tmatrix[100][100])
{
  for(int i = 0 ; i < rows1 ; i++)
  {
    for(int j = 0 ; j < columns1 ; j++)
    {
      tmatrix[j][i] = matrix[i][j];
    }
  }
  //Display matrix
  cout << "\n\n";
  cout << "\t        <Transpose>      " << endl;
  cout << "\n";
  cout << "\n";
  for(int i = 0 ; i < columns1 ; i++)
  {
    cout << "\t|";
    for(int j = 0 ; j < rows1 ; j++)
    {
      cout << left << setw(4) << tmatrix[i][j] << right;
      if(j != columns1-1)
      {
        cout << "\t";
      }
    }
    cout << "|";
    cout << endl;
  }
}
