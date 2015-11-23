#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include <QDialog>
#include <QMessageBox>
#include <QFileDialog>
#include "compress.h"
#include "decompress.h"

namespace Ui {
class Gui;
}

class Gui : public QMainWindow
{
    Q_OBJECT

public:
    explicit Gui(QWidget *parent = 0);
    ~Gui();

private slots:
    void on_pushButton_clicked();

    void on_toolButton_clicked();

    void on_pushButton_2_clicked();

    void on_toolButton_2_clicked();

private:
    Ui::Gui *ui;
};

#endif // GUI_H
