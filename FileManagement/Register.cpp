#include "Register.h"
#include <QMessageBox> 
Register::Register(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

//点击注册
void Register::Click_Login()
{
	QMessageBox msg;
	msg.setText("hello world!");
	msg.exec();
}

////跳转到注册窗口
//void Register::Click_Register()
//{
//	this->hide();			//屏蔽登录界面
//	emit showRegister();	//激活信号，让信号传送到特定页面
//}

//接收信号
void Register::receiveLogin()
{
	this->show();   //显示注册窗口
}