#include "Table.h"
#include "Restaurant.h"
#include <bits/stdc++.h>
using namespace std;
Restaurant::Restaurant(int nLarge, int nMedium, int nSmall):size(nLarge+nMedium+nSmall){
	tableList = new Table*[size];
	int k=0;
	 for(int i=0;i<nLarge;i++){
	 	cout<<"Table "<<k+1<<" maximum occupancy "<<10<<endl;
	  	tableList[k]= new Table(10);
	  	k=k+1;
	 }
	 for(int i=0;i<nMedium;i++){
	 	cout<<"Table "<<k+1<<" maximum occupancy "<<7<<endl;
	  	tableList[k]= new Table(7);
	  	k=k+1;
	 }
	 for(int i=0;i<nSmall;i++){
	 	cout<<"Table "<<k+1<<" maximum occupancy "<<5<<endl;
	  	tableList[k]= new Table(5);
	  	k=k+1;
	 }
}
void Restaurant::addGuests(int nGuests){
	if(nGuests<0)
		cout<<"Invalid party size: must be positive (skipped)"<<endl;
	int flag = 0;
	for(int i=0;i<size;i++){
		if((tableList[i]->maxOccupancy()-tableList[i]->currentOccupancy())>=nGuests){
			tableList[i]->addGuests(nGuests);
			cout<<nGuests<<" guests added to table "<<i+1<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<" could not accommodate "<<nGuests<<" guests"<<endl;
	}
}

void Restaurant::printSummary(void){
	cout<<"Summary:"<<endl;
	for(int i=0;i<size;i++){
		if(tableList[i]->currentOccupancy()){
			cout<<"table "<<i+1<<" "<<tableList[i]->currentOccupancy()<<"/"<<tableList[i]->maxOccupancy()<<endl;
		}
	}
}