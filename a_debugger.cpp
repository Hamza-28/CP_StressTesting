/*
  In the name of Allah, The Most Gracious and The Most Merciful.

  Glory be to You! We have no knowledge except what You have taught us.
  It is you who are the Knowledgeable, the Wise.
*/

#include <bits/stdc++.h>
using namespace std;

#include "bruteforce.h"
#include "testCase.h"
#include "main.h"


bool Verdict_AC() {
  ifstream bruteforce;
  ifstream mySolution;

  bruteforce.open("bruteforceSolution.txt");
  mySolution.open("mySolution.txt");

  string bf, mn;

  while(bruteforce >> bf && mySolution >> mn){
    if (bf != mn) {
      cout << "                                            __\n"
                 "                                         __/  \\_\n"
                 "                                       _/  \\__/  \\_\n"
                 "                                      /  \\__/  \\__/ \\\n"
                 "                                      \\__/  \\__/  \\__/\n"
                 "                                      /  \\__/  \\__/ \\\n"
                 "                                                              \n"
                 "                                    Wrong Answer Found!!!!  \n"
                 "                                                              \n"
                 "                                      \\__/  \\__/  \\__/\n"
                 "                                      /  \\__/  \\__/ \\\n"
                 "                                      \\__/  \\__/  \\__/\n"
                 "                                         \\__/  \\__/\n"
                 "                                            \\__/\n";
      return 0;
    }
  }
  return 1;
}

int main() {

  do {
    GenerateTestCase();
    GenerateBruteForceSolution();
    GenerateMySolution();

   cout << "..  ..  .. ..  ..  .. ..  ..  ..  <<    Searching !!!     >> ..  .. . . .. .. ..  ..  .. ..  ..  ..\n";
   cout << "..  ..  .. ..  ..  .. ..  ..  ..  <<                      >> ..  .. . . .. .. ..  ..  .. ..  ..  ..\n";

  } while (Verdict_AC());

  return 0;
}