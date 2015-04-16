#include <smartcncontroller/qt/QtWin.h>
#include <QtGui/QApplication>

using namespace SmartCNController;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtWin w;
	w.show();
	return a.exec();
}
