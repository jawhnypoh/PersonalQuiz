#ifdef _WIN32
#define CLEAR "cls"
#else // For other OS
#define CLEAR "clear"
#endif // _WIN32

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

void question1();
void question2();
void question3();
void question4();
void question5();
void question6();
void question6();
void question7();
void question8();
void question9();
void question10();
void end();

// Global Variable
int num_correct = 0;

int main()
{

  cout << endl;
  cout <<"       ___________________________________________ " << endl;
  cout <<"      |                                           |" << endl;
  cout <<"      |        Welcome to the Johnny Quiz!        |" << endl;
  cout <<"      |                                           |" << endl;
  cout <<"      |___________________________________________|" << endl;
  cout << endl;
  cout << endl;
  cout <<"This program is to test and see how well you know Johnny Po! " << endl;
  cout << endl;
  cout << endl;
  cout <<"The program will be a series of 10 Multiple Choice Questions. " << endl;
  cout << endl;
  cout <<"=============================================================" << endl;

  bool incorrect = true;
  int ready;
  while(incorrect)
  {
    cout <<"Are you ready? " << endl;
    cout <<"1. YES " << endl;
    cout <<"2. NO " << endl;
    cin >> ready;
    cout << endl;
    if(ready == 1)
    {
      cout <<"Okay, let's go! " << endl;
      cout << endl;
      system(CLEAR);
      incorrect = false;
      // Start Questions
      question1();
      question2();
      question3();
      question4();
      question5();
      question6();
      question7();
      question8();
      question9();
      question10();

      cout <<"=============================================================" << endl;
      cout <<"                    You got " << num_correct << "/10 correct! " << endl;
      cout <<"=============================================================" << endl;
      cout << endl;

      int pause;
      cout << endl;
      cout <<"Thanks for taking the quiz! " << endl;
      cout << endl;
      cout <<"Press any Number key and Enter to continue... ";
      cin >> pause;
      cout << endl;

      end();

    }
    else if(ready == 2)
    {
      cout <<" :( " << endl;
      cout << endl;
      incorrect = false;
      // Sad
    }
    else
    {
      cout <<"Bad input, try again! " << endl;
      cout << endl;
      incorrect = true;
    }
  }

  return 0;
}

void question1()
{
  int q1;
  cout <<"=============================================================" << endl;
  cout <<"The First Question is: " << endl;
  cout << endl;
  cout <<"                      How old is Johnny? " << endl;
  cout << endl;
  cout <<"1. 17 " << endl;
  cout <<"2. 18 " << endl;
  cout <<"3. 19 " << endl;
  cout <<"4. 20 " << endl;
  cout << endl;
  cout <<"Answer: ";
  cin >> q1;

  bool bad = true;
  while(bad)
  {
    if(q1 == 3)
    {
      cout <<"Correct! " << endl;
      num_correct++;
      bad = false;
    }
    else if(q1 == 1 || q1 == 2 || q1 == 4)
    {
      cout <<"Sorry, wrong :( " << endl;
      bad = false;
    }
    else
    {
      cout <<"Bad input, try again! ";
      cin >> q1;
      bad = true;
    }
  }
  cout << endl;
  cout << endl;
  system(CLEAR);

}

void question2()
{
  int q2;
  cout <<"=============================================================" << endl;
  cout <<"The Second Question is: " << endl;
  cout << endl;
  cout <<"                What school does Johnny go to? " << endl;
  cout << endl;
  cout <<"1. University of Oregon " << endl;
  cout <<"2. Ohio State University " << endl;
  cout <<"3. Harvard University " << endl;
  cout <<"4. Oregon State University " << endl;
  cout << endl;
  cout <<"Answer: ";
  cin >> q2;

  bool bad = true;
  while(bad)
  {
    if(q2 == 4)
    {
      cout <<"Correct! " << endl;
      num_correct++;
      bad = false;
    }
    else if(q2 == 1 || q2 == 2 || q2 == 3)
    {
      cout <<"Sorry, wrong :( " << endl;
      bad = false;
    }
    else
    {
      cout <<"Bad input, try again! ";
      cin >> q2;
      bad = true;
    }
  }
  cout << endl;
  cout << endl;
  system(CLEAR);
}

void question3()
{
  int q3;
  cout <<"=============================================================" << endl;
  cout <<"The Third Question is: " << endl;
  cout << endl;
  cout <<"                     What is Johnny's major? " << endl;
  cout << endl;
  cout <<"1. Computer Studies " << endl;
  cout <<"2. Computer Science " << endl;
  cout <<"3. Electrical Engineering " << endl;
  cout <<"4. Biology " << endl;
  cout << endl;
  cout <<"Answer: ";
  cin >> q3;

  bool bad = true;
  while(bad)
  {
    if(q3 == 2)
    {
      cout <<"Correct! " << endl;
      num_correct++;
      bad = false;
    }
    else if(q3 == 1 || q3 == 3 || q3 == 4)
    {
      cout <<"Sorry, wrong :( " << endl;
      bad = false;
    }
    else
    {
      cout <<"Bad input, try again! ";
      cin >> q3;
      bad = true;
    }
  }
  cout << endl;
  cout << endl;
  system(CLEAR);
}

void question4()
{
  int q4;
  cout <<"=============================================================" << endl;
  cout <<"The Fourth Question is: " << endl;
  cout << endl;
  cout <<"          What is Johnny's favorite Color Combination? " << endl;
  cout << endl;
  cout <<"1. Black and Red " << endl;
  cout <<"2. Blue and Yellow " << endl;
  cout <<"3. Green and Orange " << endl;
  cout <<"4. Silver and Gold " << endl;
  cout << endl;
  cout <<"Answer: ";
  cin >> q4;

  bool bad = true;
  while(bad)
  {
    if(q4 == 1)
    {
      cout <<"Correct! " << endl;
      num_correct++;
      bad = false;
    }
    else if(q4 == 2 || q4 == 3 || q4 == 4)
    {
      cout <<"Sorry, wrong :( " << endl;
      bad = false;
    }
    else
    {
      cout <<"Bad input, try again! ";
      cin >> q4;
      bad = true;
    }
  }
  cout << endl;
  cout << endl;
  system(CLEAR);
}

void question5()
{
  int q5;
  cout <<"=============================================================" << endl;
  cout <<"The Fifth Question is: " << endl;
  cout << endl;
  cout <<"         What is the name of Johnny's photography work? " << endl;
  cout << endl;
  cout <<"1. Johnny Po Photography " << endl;
  cout <<"2. Photogrpahy " << endl;
  cout <<"3. Potography " << endl;
  cout <<"4. JP Photography " << endl;
  cout << endl;
  cout <<"Answer: ";
  cin >> q5;

  bool bad = true;
  while(bad)
  {
    if(q5 == 3)
    {
      cout <<"Correct! " << endl;
      num_correct++;
      bad = false;
    }
    else if(q5 == 1 || q5 == 2 || q5 == 4)
    {
      cout <<"Sorry, wrong :( " << endl;
      bad = false;
    }
    else
    {
      cout <<"Bad input, try again! ";
      cin >> q5;
      bad = true;
    }
  }
  cout << endl;
  cout << endl;
  system(CLEAR);
}

void question6()
{
  int q6;
  cout <<"=============================================================" << endl;
  cout <<"The Sixth Question is: " << endl;
  cout << endl;
  cout <<"               What is Johnny's favorite food? " << endl;
  cout << endl;
  cout <<"1. Pizza" << endl;
  cout <<"2. Kimchi Fried Rice " << endl;
  cout <<"3. Japanese Sushi " << endl;
  cout <<"4. Steak " << endl;
  cout << endl;
  cout <<"Answer: ";
  cin >> q6;

  bool bad = true;
  while(bad)
  {
    if(q6 == 2)
    {
      cout <<"Correct! " << endl;
      num_correct++;
      bad = false;
    }
    else if(q6 == 1 || q6 == 3 || q6 == 4)
    {
      cout <<"Sorry, wrong :( " << endl;
      bad = false;
    }
    else
    {
      cout <<"Bad input, try again! ";
      cin >> q6;
      bad = true;
    }
  }
  cout << endl;
  cout << endl;
  system(CLEAR);
}

void question7()
{
  int q7;
  cout <<"=============================================================" << endl;
  cout <<"The Seventh Question is: " << endl;
  cout << endl;
  cout <<"          Where does Johnny want to work in the future? " << endl;
  cout << endl;
  cout <<"1. Apple Inc." << endl;
  cout <<"2. Toyota Inc. " << endl;
  cout <<"3. McDonald's Inc." << endl;
  cout <<"4. Google Inc. " << endl;
  cout << endl;
  cout <<"Answer: ";
  cin >> q7;

  bool bad = true;
  while(bad)
  {
    if(q7 == 4)
    {
      cout <<"Correct! " << endl;
      num_correct++;
      bad = false;
    }
    else if(q7 == 1 || q7 == 2 || q7 == 3)
    {
      cout <<"Sorry, wrong :( " << endl;
      bad = false;
    }
    else
    {
      cout <<"Bad input, try again! ";
      cin >> q7;
      bad = true;
    }
  }
  cout << endl;
  cout << endl;
  system(CLEAR);
}

void question8()
{
  int q8;
  cout <<"=============================================================" << endl;
  cout <<"The Eigth Question is: " << endl;
  cout << endl;
  cout <<"          What is the brand of Johnny's main computer? " << endl;
  cout << endl;
  cout <<"1. Apple MacBook Pro " << endl;
  cout <<"2. HP Pavalion dv6 " << endl;
  cout <<"3. Dell XPS 15 " << endl;
  cout <<"4. Lenovo Yoga 900 " << endl;
  cout << endl;
  cout <<"Answer: ";
  cin >> q8;

  bool bad = true;
  while(bad)
  {
    if(q8 == 1)
    {
      cout <<"Correct! " << endl;
      num_correct++;
      bad = false;
    }
    else if(q8 == 2 || q8 == 3 || q8 == 4)
    {
      cout <<"Sorry, wrong :( " << endl;
      bad = false;
    }
    else
    {
      cout <<"Bad input, try again! ";
      cin >> q8;
      bad = true;
    }
  }
  cout << endl;
  cout << endl;
  system(CLEAR);
}

void question9()
{
  int q9;
  cout <<"=============================================================" << endl;
  cout <<"The Ninth Question is: " << endl;
  cout << endl;
  cout <<"          What does Johnny like playing more? " << endl;
  cout << endl;
  cout <<"1. Guitar " << endl;
  cout <<"2. Piano " << endl;
  cout << endl;
  cout <<"Answer: ";
  cin >> q9;

  bool bad = true;
  while(bad)
  {
    if(q9 == 2)
    {
      cout <<"Correct! " << endl;
      num_correct++;
      bad = false;
    }
    else if(q9 == 1)
    {
      cout <<"Sorry, wrong :( " << endl;
      bad = false;
    }
    else
    {
      cout <<"Bad input, try again! ";
      cin >> q9;
      bad = true;
    }
  }
  cout << endl;
  cout << endl;
  system(CLEAR);
}

void question10()
{
  int q10;
  cout <<"=============================================================" << endl;
  cout <<"The Tenth Question is: " << endl;
  cout << endl;
  cout <<"               Who is your favorite college boy? " << endl;
  cout << endl;
  cout <<"1. Johnny " << endl;
  cout <<"2. Johnny" << endl;
  cout << endl;
  cout <<"Answer: ";
  cin >> q10;

  bool bad = true;
  while(bad)
  {
    if(q10 == 1 || q10 == 2)
    {
      cout <<"Correct! " << endl;
      num_correct++;
      bad = false;
    }
    else
    {
      cout <<"Bad input, try again! ";
      cin >> q10;
      bad = true;
    }
  }
  cout << endl;
  cout << endl;
  system(CLEAR);
}

void end()
{
  for(int i=0; i<5; i++)
  {
    cout << endl;
  }

  cout <<" H A P P Y    M O T H E R ' S    D A Y ! !" << endl;
  cout << endl;

  double x,y;
  double size = 10;

    for (x=0;x<size;x++)
    {
        for (y=0;y<=4*size;y++)
        {
            double dist1 = sqrt( pow(x-size,2) + pow(y-size,2) );
            double dist2 = sqrt( pow(x-size,2) + pow(y-3*size,2) );

            if (dist1 < size + 0.5 || dist2 < size + 0.5 )
            cout << "V";
            else
            cout << " ";

        }
        cout << endl;
    }

    for ( x=1;x<2*size;x++)
    {
        for(y=0;y<x;y++)
        cout << " ";

        for (y=0; y<4*size + 1 - 2*x; y++)
        cout << "V";

        cout << endl;
    }
    cout <<"                    V" << endl;
    cout << endl;
    cout << endl;
}
