#ifndef MAINAFFICHAGE_H
#define MAINAFFICHAGE_H

#include <QMainWindow>
#include <QWidget>
#include <QPainter>

namespace Ui {
class MainAffichage;
}

class MainAffichage : public QMainWindow
{
    Q_OBJECT

public:
	explicit MainAffichage(QWidget *parent = 0);
	~MainAffichage();
	void TraceTroncon(QPainter* F,int D,int A);
	void paintEvent(QPaintEvent *event);
	void Rafraichir();
private:
    Ui::MainAffichage *ui;
};

#endif // MAINAFFICHAGE_H
