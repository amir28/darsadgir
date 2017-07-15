#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_CalcBtn_clicked()
{
    QMessageBox message;
    float IntTrue = ui->TureBox->value();
    float IntFalse = ui->FalseBox->value();
    float IntQuestion = ui->Questions->value();
    if(IntQuestion == 0) {
        message.setText("لطفا تعداد سوال را بنویسید");
        message.exec();
    } else if(IntTrue + IntFalse>IntQuestion) {
        message.setText("لطفا دوباره چک کنید.( چنین چیزی امکان ندارد)");
        message.exec();
    } else {

    IntTrue = IntTrue * 3;
    if(ui->NegativeCheck->isChecked()) {
        IntTrue = IntTrue - IntFalse;
    }
    IntQuestion = IntQuestion * 3;

    IntTrue = IntTrue / IntQuestion;
    IntTrue = IntTrue * 100;

    QString Answer = QString::number(IntTrue);
    QMessageBox AnswerBox;
    message.setText(Answer + "%");
    message.setWindowTitle("Answer");
    message.exec();
}
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox About;
    About.setText("این برنامه توسط امیرمهدی نوشته شده است.");
    About.setInformativeText("ورژن ۱");
    About.setWindowTitle("درباره");
    About.setIcon(QMessageBox::Information);
    About.exec();
}

void MainWindow::on_actionSourceApp_triggered()
{
    QTextEdit *Source = new QTextEdit();
    Source->setText("لطفا لینک زیر را در مرورگر خود کپی کنید.");
    Source->setWindowTitle("سورس برنامه");
    Source->append("https://github.com/amir28/darsadgir");
    Source->show();
}
