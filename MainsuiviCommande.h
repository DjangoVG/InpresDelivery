#ifndef MAINSUIVICOMMANDE_H
#define MAINSUIVICOMMANDE_H

#include <QMainWindow>

namespace Ui {
class MainsuiviCommande;
}

class MainsuiviCommande : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainsuiviCommande(QWidget *parent = 0);
    ~MainsuiviCommande();
	void setInfo(const char* );
private slots:
    void on_ButtonSuivi_clicked();

    void on_ButtonTerminer_clicked();

    void on_ButtonRetrait_clicked();

private:
    Ui::MainsuiviCommande *ui;
};

#endif // MAINSUIVICOMMANDE_H
