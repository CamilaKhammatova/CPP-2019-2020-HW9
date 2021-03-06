#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include "filedirclass.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow();

private slots:
  void on_SelectDirectoryPushButton_clicked();
  void on_SelectFilePushButton_clicked();
  void on_PrintPushButton_clicked();

private:
  Ui::MainWindow* ui;
  std::unique_ptr<PrintableWithPath> ptr;
};
#endif  // MAINWINDOW_H
