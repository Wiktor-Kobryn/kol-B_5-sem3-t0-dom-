#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      m_timer(new QTimer(this))
{
    ui->setupUi(this);

    ui->imageLabel->setScaledContents(true);
    ui->imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    connect(m_timer, SIGNAL(timeout()), this, SLOT(advanceProgress()));

    ui->goLeftButton->setEnabled(false);
    ui->centralProgressBar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_swapButton_clicked()
{
    QString kopiaSwapRight = ui->swapRightTEdit->toPlainText();
    ui->swapRightTEdit->setPlainText(ui->swapLeftTEdit->toPlainText());
    ui->swapLeftTEdit->setPlainText(kopiaSwapRight);
}

void MainWindow::checkCzyPusteSwap()
{
    if(ui->swapLeftTEdit->toPlainText().isEmpty() && ui->swapRightTEdit->toPlainText().isEmpty())
        ui->swapButton->setEnabled(false);
    else
        ui->swapButton->setEnabled(true);
}

void MainWindow::on_swapRightTEdit_textChanged()
{
    checkCzyPusteSwap();
}


void MainWindow::on_swapLeftTEdit_textChanged()
{
    checkCzyPusteSwap();
}

void MainWindow::resetBackground()
{
    delete[] m_image;
    m_image = nullptr;
}

void MainWindow::showBackground()
{
    QSize dimensions = ui->imageLabel->size();
    if(m_image != nullptr)
    ui->imageLabel->setPixmap(QPixmap::fromImage(m_image->scaled(dimensions)));
}

void MainWindow::on_loadImgButton_clicked()
{
    if(m_image != nullptr)
        resetBackground();

    QString filePath = QFileDialog::getOpenFileName(this, "Open Image File","","Images (*.png *.bmp *.jpg)");
    if(!filePath.isEmpty())
    {
        m_image = new QImage(filePath);
        showBackground();

        QFileInfo path(filePath);
        statusBar()->showMessage(path.fileName());
    }
}

void MainWindow::advanceProgress()
{
    int curValue = ui->centralProgressBar->value();

    switch (m_progressDir)
    {
        case dir::right:
        if(curValue < ui->centralProgressBar->maximum())
        {
            curValue += 5;
            ui->centralProgressBar->setValue(curValue);
        }
        else
        {
            m_timer->stop();
            ui->goLeftButton->setEnabled(true);
        }
        break;
    case dir::left:
        if(curValue > 0)
        {
            curValue -= 10;
            ui->centralProgressBar->setValue(curValue);
        }
        else
        {
            m_timer->stop();
            ui->goRightButton->setEnabled(true);
        }
    }

}


void MainWindow::on_goRightButton_clicked()
{
    m_progressDir = dir::right;
    m_timer->setInterval(200);
    ui->goRightButton->setEnabled(false);
    m_timer->start();
}


void MainWindow::on_goLeftButton_clicked()
{
    m_progressDir = dir::left;
    m_timer->setInterval(300);
    ui->goLeftButton->setEnabled(false);
    m_timer->start();
}


