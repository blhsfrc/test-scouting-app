#ifndef STRUCTS_H
#define STRUCTS_H

#include <QString>

struct TeamInfo{
	QString blue1Name;
	QString blue2Name;
	QString blue3Name;

	unsigned short int blue1Number;
	unsigned short int blue2Number;
	unsigned short int blue3Number;

	QString red1Name;
	QString red2Name;
	QString red3Name;

	unsigned short int red1Number;
	unsigned short int red2Number;
	unsigned short int red3Number;
};

struct Scoring{
	unsigned short int topBasket;
	unsigned short int middleBasket;
	unsigned short int lowerBasket;

	bool allianceBridgeBalance;
	bool coopertitionBridgeBalance;
};

struct Miscellaneous{
	unsigned int ballsCollected;
	bool defense;

};

#endif // STRUCTS_H
