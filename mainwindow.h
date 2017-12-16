#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
	 explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
	// запуск поиска строк к каталоге номенклатуры по нажатию клавиши "Ввод"
	void beginSearch(QTreeWidget *pfwgt, QTreeWidget *pswgt, QLineEdit *pledt);
private slots:	
// очистка таблиц и полей ввода при нажатии на кнопку
	void on_pushButton_clear_pressed();
// вызов функции поиска в зависимости от поля ввода подавшего сигнал
	void showSignal(QWidget *wgt);
private:	
    Ui::MainWindow *ui;	 	 
// установка сортировки, формата ввода и инициализация полей ввода
	 void initWindow(QTreeWidget *treeWidget, QLineEdit *lineEdit, QFont &f, QValidator *vld);
};
#endif // MAINWINDOW_H
