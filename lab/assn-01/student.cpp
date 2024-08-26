#include <iostream>
#include <string>

using namespace std;

const int MAX = 15;

struct Student {
  int rollNo;
  string name;
  float sgpa;
};

void printStudents(Student students[]) {
  for (int i = 0; i < MAX; i++) {
    cout << "Roll no.: " << students[i].rollNo << ", Name: " << students[i].name
         << ", SGPA: " << students[i].sgpa << endl;
  }
  cout << "================================" << endl;
}

void bubbleSortRoll(Student students[]) {
  for (int i = 0; i < MAX; i++) {
    for (int j = 0; j < MAX - i - 1; j++) {
      if (students[j].rollNo > students[j + 1].rollNo) {
        Student temp = students[j];
        students[j] = students[j + 1];
        students[j + 1] = temp;
      }
    }
  }
}

int main(int argc, char *argv[]) {
  Student students[MAX] = {
      {1, "Alice", 8.5},  {3, "Bob", 7.2},      {2, "Charlie", 9.1},
      {4, "David", 6.8},  {6, "Eve", 8.7},      {5, "Frank", 7.9},
      {7, "Grace", 8.1},  {9, "Heidi", 9.0},    {8, "Ivan", 7.5},
      {10, "Judy", 9.3},  {12, "Mallory", 6.5}, {11, "Niaj", 7.4},
      {13, "Oscar", 8.9}, {15, "Peggy", 7.0},   {14, "Trent", 9.2}};

  printStudents(students);

  bubbleSortRoll(students);

  printStudents(students);

  return 0;
}
