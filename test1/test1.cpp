#include "test1.h"

test1::test1(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);   // ��ʼ������

    // ������ʽ�� д����Χ
    QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");
    ui.lineEdit->setValidator(new QRegExpValidator(regExp,  this));

    // �����źźͲ�
    connect(ui.okButton, SIGNAL(clicked()), this, SLOT(accept())); 
    connect(ui.cancelButton, SIGNAL(clicked()), this, SLOT(reject()));
    connect(ui.lineEdit, SIGNAL(textchanged(QString)), this, SLOT(on_lineEdit_textChanged()));
}

void test1::on_lineEdit_textChanged()
{
    ui.okButton->setEnabled(ui.lineEdit->hasAcceptableInput());
}
test1::~test1()
{

}
