//
//Table.cpp
//
#include<bits/stdc++.h>
#include "Table.h"
using namespace std;
Table::Table(int n):maxGuests(n){
	numGuests = 0;
}

int Table::maxOccupancy(void) const{
	return maxGuests;
}

int Table::currentOccupancy(void) const{
	return numGuests;
}

bool Table::addGuests(int n){
	if((maxGuests-numGuests)>=n){
		numGuests += n;
	}
	return ((maxGuests-numGuests)>=n);
}