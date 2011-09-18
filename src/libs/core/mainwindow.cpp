#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clearbuffercommand.h"

namespace Core {

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

void MainWindow::on_exit_triggered()
{
   qApp->quit();
}

void MainWindow::on_newFile_triggered() {
    ClearBufferCommand(ui->bufferTextArea).run();
}

}
