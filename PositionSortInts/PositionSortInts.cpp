// Daisha Haymon  
// Copyright 2026
#include "positionsortints.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <cmath>
#include <algorithm>


bool PositionSort::readrawdata(std::string filename) {
  std::ifstream read;
  int datavalue;
  read.open(filename);
  while (!read.eof()) {
    while (read >> datavalue) {
       if (mininteger == 0) {
        mininteger = datavalue;
      }
      if (datavalue == 0) {
        zerocounter += 1;
      } else if (datavalue > maxinteger) {
        maxinteger = datavalue;
      } else if (datavalue < mininteger) {
        mininteger = datavalue;
      }
    this->rawvalues.push_back(datavalue);
    datasize+=1;
    // std::cout << datavalue << ", ";
    }
    if (read >> datavalue) {
    continue;
    }
}
  read.close();
  return true;
}

int PositionSort::returnmaxindex(std::vector<int> datavector) {
return datavector.size()-1;
}


int PositionSort::calculatedindex(int shiftamount, int currentindex) {
int newindex;
  newindex = (currentindex - shiftamount);
if (newindex > maxindex) {
  maxindex = minindex;
}
if (newindex < maxindex) {
  minindex = newindex;
}
return newindex;
}

void PositionSort::fillsortedvector() {
  if (maxinteger == mininteger) {
    sortedvector = rawvalues;
    return;
  }

  int indicetoadd;
  int newcalculatedindex;
  std::vector<SortValue> tempvector(maxinteger * 2, {0, 1});
  std::vector<int> sortedtempvector;

  std::cout << std::endl;
    for (int i = 0; i < rawvalues.size(); i++) {
    newcalculatedindex = calculatedindex(retriveshift(i, rawvalues.at(i)), i);
    if (tempvector.at(newcalculatedindex).value != 0) {
      tempvector.at(newcalculatedindex).multiple +=1;
    } else {
      tempvector.at(newcalculatedindex).value = rawvalues.at(i);
    }
    }

    sortedvector.resize(datasize);

    while (zerocounter != 0) {
      sortedtempvector.push_back(0);
      zerocounter--;
    }

    for (int j = 0; j < tempvector.size(); j++) {
      if (tempvector.at(j).value != 0) {
        while (tempvector.at(j).multiple != 0) {
      sortedtempvector.push_back(tempvector.at(j).value);
      tempvector.at(j).multiple--;
      }
    }
}

    sortedvector = sortedtempvector;
    tempvector.clear();
    tempvector.shrink_to_fit();
    sortedtempvector.clear();
    sortedtempvector.shrink_to_fit();
    sortedvector.shrink_to_fit();
    int rawmax = rawvalues.size()-1;
    int sortedsize = sortedvector.size()-1;
    return;
}


int PositionSort::retriveshift(int index, int value) {
return index-value;
}

int getindex(int data, std::vector<int> datavector) {
  for (int i = 0; i < datavector.size(); i++) {
    if (datavector.at(i) == data) {
      return i;
    }
  }
  return 0;
}


void PositionSort::printavector(std::string vectorname) {
  if (vectorname == "rawvalues") {
    for (int i = 0; i < rawvalues.size(); i++) {
      std::cout << i << rawvalues.at(i) << " ";
    }
    return;
  } else if (vectorname == "sortedvector") {
    for (int i = 0; i < sortedvector.size(); i++) {
      std::cout << sortedvector.at(i) << " ";
    }
    return;
  }
}
