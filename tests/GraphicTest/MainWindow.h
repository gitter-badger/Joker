#ifndef MAINWINDOW_H
#define MAINWINDOW_W

#include <QMainWindow>
#include "GraphicTestView.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT
	
public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

public slots:
	void pushPlayButton();
	void changeText(QString);

private:
	Ui::MainWindow *ui;
	bool playButtonState;

};

#endif // MAINWINDOW_H