#include "grading_scheme.h"
#include "ui_grading_scheme.h"

Grading_Scheme::Grading_Scheme(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Grading_Scheme)
{
    ui->setupUi(this);
}

Grading_Scheme::~Grading_Scheme()
{
    delete ui;
}
