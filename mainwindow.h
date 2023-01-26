#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFileInfo>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_swapButton_clicked();
    void on_swapRightTEdit_textChanged();
    void on_swapLeftTEdit_textChanged();
    void on_loadImgButton_clicked();
    void advanceProgress();
    void on_goRightButton_clicked();
    void on_goLeftButton_clicked();

private:
    Ui::MainWindow *ui;

    QImage *m_image = nullptr;
    QTimer *m_timer = nullptr;

    enum class dir{left,right};
    dir m_progressDir = dir::right;

    void checkCzyPusteSwap();
    void resetBackground();
    void showBackground();
};
#endif // MAINWINDOW_H
