#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "grading_scheme.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider_1, SIGNAL(valueChanged(int)),this,SLOT(compute_sum(int)));
    connect(ui->horizontalSlider_2, SIGNAL(valueChanged(int)),this,SLOT(compute_sum(int)));
    connect(ui->horizontalSlider_3, SIGNAL(valueChanged(int)),this,SLOT(compute_sum(int)));
    connect(ui->horizontalSlider_4, SIGNAL(valueChanged(int)),this,SLOT(compute_sum(int)));
    connect(ui->horizontalSlider_5, SIGNAL(valueChanged(int)),this,SLOT(compute_sum(int)));
    connect(ui->horizontalSlider_6, SIGNAL(valueChanged(int)),this,SLOT(compute_sum(int)));
    connect(ui->horizontalSlider_7, SIGNAL(valueChanged(int)),this,SLOT(compute_sum(int)));
    connect(ui->horizontalSlider_8, SIGNAL(valueChanged(int)),this,SLOT(compute_sum(int)));
    connect(ui->horizontalSlider_9, SIGNAL(valueChanged(int)),this,SLOT(compute_sum(int)));
    connect(ui->horizontalSlider_10, SIGNAL(valueChanged(int)),this,SLOT(compute_sum(int)));
    connect(ui->horizontalSlider_11, SIGNAL(valueChanged(int)),this,SLOT(compute_sum(int)));
    ui->sum->show();
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

void MainWindow::compute_sum(int unused=0)
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

    ui->sum->setText("Overall Grade: "+QString::number(0.1*sum+score));
}

