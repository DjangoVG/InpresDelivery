#ifndef MAINAFFCLIENT_H
#define MAINAFFCLIENT_H

#include <QMainWindow>

namespace Ui {
class MainAffClient;
}

class MainAffClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainAffClient(QWidget *parent = 0);
    ~MainAffClient();
	void clearArticle();
	void setArticle(int);
	void setArticle0(const char*);
	void setArticle1(const char*);
	void setArticle2(const char*);
	void setArticle3(const char*);
	void setArticle4(const char*);
	void setPannier(int Q);
	void setQuantite0(int );
	void setQuantite1(int );
	void setQuantite2(int );
	void setQuantite3(int );
	void setQuantite4(int );
	int getQuantite0() const;
	int getQuantite1() const;
	int getQuantite2() const;
	int getQuantite3() const;
	int getQuantite4() const;
	void checkBox(int);
	void setBox0(bool);
	void setBox1(bool);
	void setBox2(bool);
	void setBox3(bool);
	void setBox4(bool);
	bool getBox0() const;
	bool getBox1() const;
	bool getBox2() const;
	bool getBox3() const;
	bool getBox4() const;
	void setRadioBoutton0(bool); 
	void setImage(const char* );
	void setInfo(const char*);

private slots:
    void on_ButtonMateriel_clicked();
    void on_ButtonBrassage_clicked();
    void on_ButtonCommander_clicked();
    void on_ButtonAnnuler_clicked();
    void on_ButtonInformation_clicked();
    void on_ButtonTerminer_clicked();
    void on_radioButton0_clicked();
    void on_radioButton1_clicked();
    void on_radioButton2_clicked();
    void on_radioButton3_clicked();
    void on_radioButton4_clicked();
    void on_checkBox0_clicked();
    void on_checkBox1_clicked();
    void on_checkBox2_clicked();
    void on_checkBox3_clicked();
    void on_checkBox4_clicked();

private:
    Ui::MainAffClient *ui;
};

#endif // MAINAFFCLIENT_H
