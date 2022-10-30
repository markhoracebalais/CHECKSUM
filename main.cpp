// File Name: main.cpp
// Author: Mark Balais
// Activity 5 CPE 411 Embedded System

#include <iostream>
#include <bits/stdc++.h>
#include "includes/checksum.h"
using namespace std;


// Driver Code
int main()
{
	string sent_message, recv_message;
	int block_size;
	 cout<<"Enter Sent Message (In_Binary)"<<endl;
	 cin>> sent_message;
	 cout<<"Enter Recieved Message (In_Binary)"<<endl;
	 cin>> recv_message;
	 cout<<"Enter number of bits per block/section"<<endl;
	 cin>> block_size;

	if (checker(sent_message,
				recv_message,
				block_size)) {
		cout << "No Error";
	}
	else {
		cout << "Error";
	}

	return 0;
}
