#include<iostream>
using namespace std;
#include<string>
#include<stdlib.h>

#include "../../arduino1/arduino1/SerialPort.h"
#include "Main.h"

char output='P';
char commport[] = "\\\\.\\COM3";
char* port = commport;


char incoming[MAX_DATA_LENGTH];

int main() {
	SerialPort arduino(port);
	if (arduino.isConnected()) {
		cout << "Connection Established";
	}
	else {
		cout << "Error in port";
	}

	while (arduino.isConnected()) {

		arduino.readSerialPort(&output, MAX_DATA_LENGTH);

		if (output== 'P') {
			System::Windows::Forms::PictureBox^ pictureBox1;
			pictureBox1->Visible = false;

			System::Windows::Forms::TextBox^ textBox1;
			textBox1->AppendText("Found");
		}
		/*string command;
		cin >> command;
		char* charArray = new char[command.size() + 1];
		copy(command.begin(), command.end(), charArray);
		charArray[command.size()] = '\n';

		arduino.writeSerialPort(charArray, MAX_DATA_LENGTH);
		arduino.readSerialPort(output, MAX_DATA_LENGTH);

		cout << output;

		delete[] charArray;
		*/
	}
	return 0;
}


