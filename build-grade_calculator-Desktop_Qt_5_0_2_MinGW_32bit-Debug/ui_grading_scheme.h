/********************************************************************************
** Form generated from reading UI file 'grading_scheme.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADING_SCHEME_H
#define UI_GRADING_SCHEME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Grading_Scheme
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Grading_Scheme)
    {
        if (Grading_Scheme->objectName().isEmpty())
            Grading_Scheme->setObjectName(QStringLiteral("Grading_Scheme"));
        Grading_Scheme->resize(400, 300);
        buttonBox = new QDialogButtonBox(Grading_Scheme);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 230, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textBrowser = new QTextBrowser(Grading_Scheme);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(50, 30, 256, 192));

        retranslateUi(Grading_Scheme);
        QObject::connect(buttonBox, SIGNAL(accepted()), Grading_Scheme, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Grading_Scheme, SLOT(reject()));

        QMetaObject::connectSlotsByName(Grading_Scheme);
    } // setupUi

    void retranslateUi(QDialog *Grading_Scheme)
    {
        Grading_Scheme->setWindowTitle(QApplication::translate("Grading_Scheme", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("Grading_Scheme", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Grading Policy for Pic 10B:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">xxxxxxxxxxx</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Grading_Scheme: public Ui_Grading_Scheme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADING_SCHEME_H
