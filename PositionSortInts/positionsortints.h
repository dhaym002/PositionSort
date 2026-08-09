// Daisha Haymon
// Copyright 2026
#ifndef _USERS_DAISHAHAYMON_REPOSITORIES_POSITIONSORT_POSITIONSORT_H_
#define _USERS_DAISHAHAYMON_REPOSITORIES_POSITIONSORT_POSITIONSORT_H_
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <queue>

class PositionSort {
 private:
struct SortValue {
    int value;
    int multiple;
    SortValue(int v, int m) : value(v), multiple(m) {}
    SortValue() : value(0), multiple(1) {}
};
  int datasize;
  int maxinteger;
  int mininteger;
  int maxindex;
  int minindex;
  int zerocounter;
  int globalshiftamount;
  std::vector<int> rawvalues;  // holds raw unsorted values from input
  std::vector<int> sortedvector;
 
 public:
    PositionSort() : datasize(0), zerocounter(0), maxinteger(0), mininteger(0), maxindex(0), minindex(0),
    rawvalues(0), sortedvector(0), globalshiftamount(0) {}

    explicit PositionSort(int ndatasize) : datasize(ndatasize), zerocounter(0),
    maxinteger(0), mininteger(0), maxindex(0), minindex(0),
    rawvalues(ndatasize), sortedvector(ndatasize), globalshiftamount(0) {}
    int getindex();
    // int convertindex(auto index);
    int compareindex(int index, int value);
    void printavector(std::string vectorname);
    int returnmaxindex(std::vector<int> datavector);
    bool readrawdata(std::string filename);  // reads raw data from user input.
    void fillsortedvector();
    int retriveshift(int idealindex, int currentindex);
    int calculatedindex(int shiftamount, int currentindex);
};

#endif // NOLINT
