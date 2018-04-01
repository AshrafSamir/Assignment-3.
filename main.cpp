/* FCI – Programming 1 – 2018 - Assignment 3
	Project 0
	Ashraf Samir Ali (AshrafSamir): G2 - 20170053
	Purpose: This is a program that implements project 0 group task and number 5 and 6,7.
	*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>
using namespace std;

int Task1 (int);
int Task2 (int);
int Task3 (int);
int Task4 (int);
int Task5 (int);
int Task6 (int);
int Task7 (int);

char text[81];

int main()
{
    int result;
    cout<<"Ahlan tany ya user ya habibi !"<<endl;
    cout<<"what do you want to do today ?!\n"
        <<"1- Load an existing file\n"
        <<"2- Create a new file\n"
        <<"3- Display file content\n"
        <<"4- Save the loaded text to the same file again or different one\n"
        <<"5- Count the words and the characters in the file\n"
        <<"6- Search for a word in a file\n"
        <<"7- Empty file content\n"
        <<"\nAt last U can enter 0 to end\n\n";
    while (true )
    {
        cout << "Let's Go.. \n\n";
        cin>>result;

        if( result ==1 )
        {
            Task1(result);
        }
        else if( result ==2 )
        {
            Task2(result);
        }
        else if ( result ==3 )
        {
            Task3(result);
        }
        else if ( result ==4 )
        {
            Task4(result);
        }
        else if ( result ==5 )
        {
            Task5(result);
        }
        else if ( result ==6 )
        {
            Task6(result);
        }
        else if ( result ==7 )
        {
            Task7(result);
        }
        else if(result==0)
        {
            return 0;
        }
        else
        {
            cout<<"Please enter from 1:4 only !!\n";

        }
    }
}

int Task1 (int x)
{
    char NameFile[81];
    cout<<"Please enter the file name :  ";
    cin.get();
    cin.getline(NameFile,81);
    ifstream output_file(NameFile);
    if( output_file.fail() )
    {
        cout<<"The file didn't opened !"<<endl;
        return 1;
    }
    while(!output_file.eof() )
    {
        output_file>>text;
        cout<<text<<endl;
    }
    output_file.close();
}

int Task2 (int x)
{
    char NameFile[81];
    cout<<"what is the name of file you want to create ?!  ";
    cin.get();
    cin.getline(NameFile,81);
    ofstream input_file(NameFile);
    if( input_file.fail() )
    {
        cout<<"The file didn't opened !"<<endl;
        return 1;
    }
    /*
    while( cin>>text )
    {
        input_file<<text;

        ///cout<<text<<endl;
    }
    */
    input_file.close();
}

int Task3 (int x)
{
    char NameFile[81];
    cout<<"Please enter the file name :  ";
    cin.get();
    cin.getline(NameFile,81);
    ifstream output_file(NameFile);
    if( output_file.fail() )
    {
        cout<<"The file didn't opened !"<<endl;
        return 1;
    }
    while(!output_file.eof() )
    {
        output_file>>text;
        cout<<text<<endl;
    }
    output_file.close();
}

int Task4 (int x)
{
    char NameFile[81];
    cout<<"what is the name you want to get data from ?!  ";
    cin.get();
    cin.getline(NameFile,81);
    ifstream input_file(NameFile);
    ofstream output_file("OurFile3.txt");
    if( input_file.fail() )
    {
        cout<<"The file didn't opened !"<<endl;
        return 1;
    }
    while( input_file>>text )
    {
        output_file<<text<<endl;
    }
    input_file.close();
}
int Task5 (int x)
{
    ifstream file;
    file.open("Students _Courses1.txt");
    char ch;
    int count=0;
    while(!file.eof()){
          file.get(ch);
          cout<<ch;
          if((int(ch)>=65 && int(ch)<=90) || (int(ch)>=97 && int(ch)<=122))count++;
          }
    cout<<endl;
    cout<<" The number of characters = ";
    cout<<count;
    file.close();



    ifstream fie;
    fie.open("Students _Courses1.txt");
    char word[30];
    int count1=0;
    while(!fie.eof()){
          fie>>word;
          count1++;
          }
    cout<<endl;
    cout<<" The number of words = ";
    cout<<count1;
    fie.close();
    string sh;
    int counter=0;
    fie.open("Students _Courses1.txt");
    while(!fie.eof()){
        getline(fie,sh);
        counter++;
    }
    cout <<"\n number of lines is \n"<<counter;

}
int Task6 (int x)
{
    ofstream fol;
    fol.open("Students _Courses1.txt");
    fol<<"Programming Electronics Economics Math.";
    fol.close();

    char wordIn[30],word[30];
    cout<<" enter your word to find : ";
    cin>>word;
    for(int i =0; i<=30; i++)
    {
        word[i]= tolower(word[i]);
    }
    ifstream file ;
    file.open("Students _Courses1.txt");
    bool found = false;
    while(!file.eof())
    {
        file>>wordIn;
        for(int i =0; i<=30; i++)
        {
            wordIn[i] = tolower(wordIn[i]);
        }

       if(strcmp(word,wordIn)==0){
        cout<<"your word is "<<word;
        found = true;
        break;
       }
    }
        if(!found)
        {
            cout<< "No match";
        }

}
int Task7 (int x)
{
    char NameFile[81];
    cout<<"Please enter the file name :  ";
    cin.get();
    cin.getline(NameFile,81);
    fstream fol ;
    fol.open(NameFile,ios::out | ios::trunc);


    fol.close();

}

