#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "grading_scheme.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->sum->setText("Overall Grade: "+QString::number(compute_sum()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionGrading_Scheme_triggered()
{
    Grading_Scheme g;
    g.setModal(true);
    g.exec();
}

int MainWindow::compute_sum()
{
    int sum=0;
    int score=0;
    sum+=ui->horizontalSlider_1->value();
    sum+=ui->horizontalSlider_2->value();
    sum+=ui->horizontalSlider_3->value();
    sum+=ui->horizontalSlider_4->value();
    sum+=ui->horizontalSlider_5->value();
    sum+=ui->horizontalSlider_6->value();
    sum+=ui->horizontalSlider_7->value();
    sum+=ui->horizontalSlider_8->value();


    if(ui->radioButton->isChecked())
    {
        score= 0.4*(ui->horizontalSlider_9->value()+ui->horizontalSlider_10->value())+0.5*ui->horizontalSlider_11->value();

    }
    else
    {
        if( ui->horizontalSlider_9->value()>ui->horizontalSlider_10->value())
            score=0.4*(ui->horizontalSlider_9->value())+0.5*ui->horizontalSlider_11->value();
        else
            score=0.4*(ui->horizontalSlider_10->value())+0.5*ui->horizontalSlider_11->value();
    }

    return 0.1*sum+score;
}

void MainWindow::on_pushButton_clicked()
{


}
