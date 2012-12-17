#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QVector>
#include <QButtonGroup>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT
	
public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();
	
private:
	Ui::MainWindow *ui;
	void keyPressEvent(QKeyEvent *);

	QVector <QString> teamNumberVector;
    QButtonGroup r1BalanceButtons;


	void loadNumberFromFile();
	void vectorToCombos();

private slots:
	void menuTriggered(QAction *);

	void r1TopPlusClicked();
	void r1TopMinusClicked();
	void r1MiddlePlusClicked();
	void r1MiddleMinusClicked();
	void r1LowPlusClicked();
	void r1LowMinusClicked();

	void b1TopPlusClicked();
	void b1TopMinusClicked();
	void b1MiddlePlusClicked();
	void b1MiddleMinusClicked();
	void b1LowPlusClicked();
	void b1LowMinusClicked();
};

#endif // MAINWINDOW_H
