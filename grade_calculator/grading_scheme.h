#ifndef GRADING_SCHEME_H
#define GRADING_SCHEME_H

#include <QDialog>
#include <QLabel>
namespace Ui {
class Grading_Scheme;
}

class Grading_Scheme : public QDialog
{
    Q_OBJECT

public:
    explicit Grading_Scheme(QWidget *parent = 0);
    ~Grading_Scheme();

private:
    Ui::Grading_Scheme *ui;

};

#endif // GRADING_SCHEME_H
