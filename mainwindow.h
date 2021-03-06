#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QListWidgetItem>
#include "thread.h"
#include <pcap.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_2_clicked();
private:
    Ui::MainWindow *ui;
    Thread *t;
    QList<QString> packets;

public slots:
    void error(QString message);
    void captured(QString packet, QString header);
};

#endif // MAINWINDOW_H
