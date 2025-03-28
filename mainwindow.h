#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    int previousPageIndex = 0;
    Ui::MainWindow *ui;
private slots:
    void handlePageChange();
};


#endif // MAINWINDOW_H
