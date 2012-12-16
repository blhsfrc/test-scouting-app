#ifndef CURRENTALLIANCEDATA_H
#define CURRENTALLIANCEDATA_H

#include <QObject>
#include <QString>
#include "structs.h"

class CurrentAllianceData : public QObject
{
	Q_OBJECT
public:
	explicit CurrentAllianceData(QObject *parent = 0);

	
signals:
	
public slots:

private:
	TeamInfo info;

	Scoring b1Score;
	Scoring b2Score;
	Scoring b3Score;

	Scoring r1Score;
	Scoring r2Score;
	Scoring r3Score;
	
};



#endif // CURRENTALLIANCEDATA_H
