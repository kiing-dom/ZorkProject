#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "ZorkUL.h"
#include "Character.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

    friend class Character;
    friend class Room;

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void overencumberedTest();
    void allRoomItemsCollectedTest();
    void disableAllButtons();
    void addItemsToListWidget(vector<Item> item);
    string displayStamina();
    string displayHealth();
    void printCharacterStats();
    void endGameState(string message1, string message2);

private:
    Ui::MainWindow *ui;
    ZorkUL *zork = new ZorkUL();
    Character character = *new Character("Kiing");
    bool putInInventory;
    void goRoom(string direction);
    void listItems(vector<Item> items, QString description);
    int attempts;
    bool wordleWin;
    string word;
    QString wordle;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
    void on_lineEdit_textChanged(const QString &arg1);
};

#endif
