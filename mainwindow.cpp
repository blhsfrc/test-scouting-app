#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	connect(this->menuBar(),SIGNAL(triggered(QAction*)),this, SLOT(menuTriggered(QAction*)));
	connect(ui->R1_top_plus,SIGNAL(clicked()), this,SLOT(r1TopPlusClicked()));
	connect(ui->R1_top_minus,SIGNAL(clicked()), this,SLOT(r1TopMinusClicked()));
	connect(ui->R1_middle_plus,SIGNAL(clicked()), this,SLOT(r1MiddlePlusClicked()));
	connect(ui->R1_middle_minus,SIGNAL(clicked()), this,SLOT(r1MiddleMinusClicked()));
	connect(ui->R1_low_plus,SIGNAL(clicked()), this,SLOT(r1LowPlusClicked()));
	connect(ui->R1_low_minus,SIGNAL(clicked()), this,SLOT(r1LowMinusClicked()));

	connect(ui->B1_top_plus,SIGNAL(clicked()), this,SLOT(b1TopPlusClicked()));
	connect(ui->B1_top_minus,SIGNAL(clicked()), this,SLOT(b1TopMinusClicked()));
	connect(ui->B1_middle_plus,SIGNAL(clicked()), this,SLOT(b1MiddlePlusClicked()));
	connect(ui->B1_middle_minus,SIGNAL(clicked()), this,SLOT(b1MiddleMinusClicked()));
	connect(ui->B1_low_plus,SIGNAL(clicked()), this,SLOT(b1LowPlusClicked()));
	connect(ui->B1_low_minus,SIGNAL(clicked()), this,SLOT(b1LowMinusClicked()));



	loadNumberFromFile();
	vectorToCombos();
	ui->R1_combo->setFocusPolicy(Qt::NoFocus);
	ui->B1_combo->setFocusPolicy(Qt::NoFocus);

}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::menuTriggered(QAction *action)
{
	qDebug()<<"triggered";
	qDebug()<<action->iconText();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
	qDebug()<<event->key();

}

void MainWindow::loadNumberFromFile(){
	QFile file(":/Team_Number_List.txt");
		 if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
			 qDebug()<< "Team Number File Not Found";

		 while (!file.atEnd()) {
			 QString line = file.readLine();
			 teamNumberVector.push_back(line);
		 }
}

void MainWindow::vectorToCombos(){
	for (unsigned short int i = 0; i<teamNumberVector.size();i++)
	{
		ui->B1_combo->addItem(teamNumberVector.at(i));
		ui->R1_combo->addItem(teamNumberVector.at(i));
	}
}

/*********************************************************************************

Red 1 button connections

*********************************************************************************/

void MainWindow::r1TopPlusClicked(){
	int number = ui->R1_top_number->text().toInt();
	number++;
	QString numberS = QString::number(number);
	if (numberS.length()<=1)
	{
		numberS.insert(0,"0");
	}
	ui->R1_top_number->setText(numberS);
}

void MainWindow::r1TopMinusClicked(){
	int number = ui->R1_top_number->text().toInt();
	number--;
	if (number < 0)
		return;
	QString numberS = QString::number(number);
	if (numberS.length()<=1)
	{
		numberS.insert(0,"0");
	}
	ui->R1_top_number->setText(numberS);
}

void MainWindow::r1MiddlePlusClicked(){
	int number = ui->R1_middle_number->text().toInt();
	number++;
	QString numberS = QString::number(number);
	if (numberS.length()<=1)
	{
		numberS.insert(0,"0");
	}
	ui->R1_middle_number->setText(numberS);
}

void MainWindow::r1MiddleMinusClicked(){
	int number = ui->R1_middle_number->text().toInt();
	number--;
	if (number < 0)
		return;
	QString numberS = QString::number(number);
	if (numberS.length()<=1)
	{
		numberS.insert(0,"0");
	}
	ui->R1_middle_number->setText(numberS);
}

void MainWindow::r1LowPlusClicked(){
	int number = ui->R1_low_number->text().toInt();
	number++;
	QString numberS = QString::number(number);
	if (numberS.length()<=1)
	{
		numberS.insert(0,"0");
	}
	ui->R1_low_number->setText(numberS);
}

void MainWindow::r1LowMinusClicked(){
	int number = ui->R1_low_number->text().toInt();
	number--;
	if (number < 0)
		return;
	QString numberS = QString::number(number);
	if (numberS.length()<=1)
	{
		numberS.insert(0,"0");
	}
	ui->R1_low_number->setText(numberS);
}

/*********************************************************************************

Blue 1 button connections

*********************************************************************************/


void MainWindow::b1TopPlusClicked(){
	int number = ui->B1_top_number->text().toInt();
	number++;
	QString numberS = QString::number(number);
	if (numberS.length()<=1)
	{
		numberS.insert(0,"0");
	}
	ui->B1_top_number->setText(numberS);
}

void MainWindow::b1TopMinusClicked(){
	int number = ui->B1_top_number->text().toInt();
	number--;
	if (number < 0)
		return;
	QString numberS = QString::number(number);
	if (numberS.length()<=1)
	{
		numberS.insert(0,"0");
	}
	ui->B1_top_number->setText(numberS);
}

void MainWindow::b1MiddlePlusClicked(){
	int number = ui->B1_middle_number->text().toInt();
	number++;
	QString numberS = QString::number(number);
	if (numberS.length()<=1)
	{
		numberS.insert(0,"0");
	}
	ui->B1_middle_number->setText(numberS);
}

void MainWindow::b1MiddleMinusClicked(){
	int number = ui->B1_middle_number->text().toInt();
	number--;
	if (number < 0)
		return;
	QString numberS = QString::number(number);
	if (numberS.length()<=1)
	{
		numberS.insert(0,"0");
	}
	ui->B1_middle_number->setText(numberS);
}

void MainWindow::b1LowPlusClicked(){
	int number = ui->B1_low_number->text().toInt();
	number++;
	QString numberS = QString::number(number);
	if (numberS.length()<=1)
	{
		numberS.insert(0,"0");
	}
	ui->B1_low_number->setText(numberS);
}

void MainWindow::b1LowMinusClicked(){
	int number = ui->B1_low_number->text().toInt();
	number--;
	if (number < 0)
		return;
	QString numberS = QString::number(number);
	if (numberS.length()<=1)
	{
		numberS.insert(0,"0");
	}
	ui->B1_low_number->setText(numberS);
}

