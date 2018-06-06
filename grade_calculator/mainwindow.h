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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_actionGrading_Scheme_triggered();
    void compute_sum(int unused);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
